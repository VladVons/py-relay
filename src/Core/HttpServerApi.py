"""
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2018.06.06
License:     GNU, see LICENSE for more details
Description:

import os
print os.path.abspath(urllib.__file__)

https://www.programcreek.com/python/example/98644/yattag.Doc
"""


import os

try:
    import urlparse
except:
    import urllib.parse as urlparse

# from html import HTML
try: 
    from yattag import Doc 
except Exception as E: 
    print(__file__, E, 'apt pip install yattag')


from Inc.Log        import Log
from Inc.Util       import FS
from Inc.Param      import TDictReplace, TDictBlock
from Inc.HttpServer import TSockServer, TConnSessionHttp
from Inc.Thread     import CreateThread, TThreadPipe
from Api            import Misc
from Core           import HttpProc


class TThreadPipeApi(TThreadPipe):
    def __init__(self):
        TThreadPipe.__init__(self)

        self.Cnt = 0
        self.PathProc = {
            '/get/app/version': self.GetVersion,
            '/get/app/classes': self.GetClasses,
            '/get/dev/values':  self.GetValues,
            '/get/dev/value':   self.GetValue,
            '/set/dev/value':   self.GetVersion
        }


    def GetVersion(self, aManager, aData):
        Result = Misc.Version()
        Result.update(aManager.Info('Total'))
        return Result

    def GetValue(self, aManager, aData):
        Alias = aData.get('alias')
        return aManager.SecClass.GetAliasVar([Alias], 'Value')

    def GetValues(self, aManager, aData):
        return aManager.SecClass.GetAliasVar([], 'Value')

    def GetClasses(self, aManager, aData):
        Result = []
        for Item in aManager.SecClass.GetAliases():
            Class = aManager.SecClass.GetClass(Item)
            Result.append([Class.Alias, Class.__class__.__name__, Class.Descr])
        return Result

    # we are in main process with parameters
    def DoReceive(self, aManager, aData):
        self.Cnt += 1
        Func = self.PathProc.get(aData['path'])
        Result = Func(aManager, aData)
        return Result


class TWeb():
    def __init__(self, aParent):
        self.Parent = aParent
        self.Layout = '/layout.tpl'

    def ProcessThreadQueue(self, aData):
        ThreadPipe = self.Parent.Parent.ThreadPipe
        if (ThreadPipe):
            aData = ThreadPipe.ThreadSend(aData)
        return aData

    @property
    def Manager(self):
        return self.Parent.Parent.Manager

    @property
    def Classes(self):
        return self.Parent.Parent.Manager.SecClass.Data

    def Html(self, aBody):
        Data = HttpProc.Html(aBody)
        self.Parent.AddData(Data)

    def HtmlAsArr(self, aArr):
        self.Html('<br>\r\n'.join(aArr))

    def HtmlPattern(self, aFile, aDict = {}):
        DReplace = TDictReplace()
        DReplace.AddKeys(aDict)

        FilePath = self.Parent.GetRootPath(aFile)

        DBlock = TDictBlock()
        Data = FS.LoadFromFileToStr(FilePath)
        DBlock.Parse(Data)
        Files = DBlock.GetKeys('File')
        if (Files):
            Blocks = DBlock.GetKeys('Block')
            for Block in Blocks:
                Key   = Block.split()[1]
                Value = DBlock.Get('Block', Key).strip()
                if (Key not in aDict) :
                    DReplace.AddKey(Key, Value)

            Extender = Files[0].split()[1]
            FilePath = self.Parent.GetRootPath(Extender)
            Data = FS.LoadFromFileToStr(FilePath)

        Data = DReplace.Parse(Data)
        self.Parent.AddData(Data)

    def UrlGetProfile(self, aParam):
        Arr = self.Manager.Info('Total')
        Path = '/' + Arr.get('Profile', '')
        Path = Path.replace('/Plugin', '')
        self.Parent.Redirect(Path)

    def HtmlDir(self, aPath, aFullPath):
        Arr   = HttpProc.HtmlDir(aPath, aFullPath)
        Data  = HttpProc.HtmlTable(['Name', 'Size', 'Date'], Arr)
        Param = {'cTitle': 'HtmlDir', 'cBody': Data}
        self.HtmlPattern(self.Layout, Param)

    def UrlDeviceGet(self, aParam):
        Dict = self.ProcessThreadQueue(aParam)
        Arr  = Dict.items()
        Arr.sort()
        Data  = HttpProc.HtmlTable(['Alias', 'Value'], Arr)
        Param = {'cTitle': 'Device value', 'cBody': Data}
        self.HtmlPattern(self.Layout, Param)

    def UrlDevicesGet(self, aParam):
        Dict = self.ProcessThreadQueue(aParam)
        Arr  = Dict.items()
        Arr.sort()
        Data  = HttpProc.HtmlTable(['Alias', 'Value'], Arr)
        Param = {'cTitle': 'Device value', 'cBody': Data}
        self.HtmlPattern(self.Layout, Param)

    def UrlGetClasses(self, aParam):
        Arr = self.ProcessThreadQueue(aParam)
        Arr.sort()
        Data  = HttpProc.HtmlTable(['Alias', 'Class', 'Descr'], Arr)
        Param = {'cTitle': 'Aliases', 'cBody': Data}
        self.HtmlPattern(self.Layout, Param)

    def UrlGetVersion(self, aParam):
        Dict = self.ProcessThreadQueue(aParam)
        Arr = Dict.items()
        Arr.sort()
        Data  = HttpProc.HtmlTable(['Name', 'Value'], Arr)
        Param = {'cTitle': 'Version', 'cBody': Data}
        self.HtmlPattern(self.Layout, Param)

    def UrlDeviceSet(self, aParam):
        pass


class TConnSessionApp(TConnSessionHttp):
    def __init__(self, aParent):
        TConnSessionHttp.__init__(self, aParent)

        self.Web = TWeb(self)
        self.Manager = None
        self.UrlPattern = {
            '/get/app/version':  {'func': self.Web.UrlGetVersion,  'param': []},
            '/get/app/classes':  {'func': self.Web.UrlGetClasses,  'param': []},
            '/get/app/profile':  {'func': self.Web.UrlGetProfile,  'param': []},
            '/get/dev/values':   {'func': self.Web.UrlDevicesGet,  'param': []},
            '/get/dev/value':    {'func': self.Web.UrlDeviceGet,   'param': ['alias']},
            '/set/dev/value':    {'func': self.Web.UrlDeviceSet,   'param': ['alias', 'value']}
        }

    def DoGet(self, aUrl):
        Url   = urlparse.urlparse(aUrl)
        Path  = Url.path
        Query = dict(urlparse.parse_qsl(Url.query, 1))

        if (Path == '/'):
            Path = '/index.tpl'

        FilePath = self.GetRootPath(Path)
        if (FS.FileExists(FilePath)):
            if (os.path.isdir(FilePath)):
                self.Head(200)
                self.Web.HtmlDir(Path, FilePath)
            else:
                Ext = FS.SplitName(FilePath)[3]
                if (Ext == '.tpl'):
                    self.Head(200)
                    self.Web.HtmlPattern(Path)
                else:
                    self.Head(200, Path)
                    Data = FS.LoadFromFileToStr(FilePath)
                    self.AddData(Data)
        else:
            CheckErr = self.Check(Path, Query)
            if (CheckErr):
                Log.PrintDbg(1, 'e', CheckErr)
                self.Head(404)
                self.Web.HtmlPattern('/page_404.tpl', {'cErr': CheckErr})
            else:
                self.Head(200)
                Pattern = self.UrlPattern.get(Path)
                Func    = Pattern.get('func')
                Query['path'] = Path
                Func(Query)
        pass

    def DoPost(self, aUrl, aData):
        print(aUrl, aData)

    def Check(self, aPath, aQuery):
        Pattern = self.UrlPattern.get(aPath)
        if (not Pattern):
            return 'Path not found: %s' % aPath

        Params = Pattern.get('param')
        for Query in aQuery:
            if (Query not in Params):
                return 'Unknown key: %s' % Query

            if (not aQuery.get(Query)):
                return 'Empty key: %s' % Query

        for Param in Params:
            if (not aQuery.get(Param)):
                return 'Missed key: %s' % Param
        return ''


class THttpServerApi(TSockServer):
    def __init__(self, aPort):
        TSockServer.__init__(self, aPort)

        # self.Timeout = 1
        self.Manager    = None
        self.ThreadPipe = None
        self.Conn       = TConnSessionApp(self)

    def DoAccept(self, aConn, aAddr):
        self.Conn.Handle(aConn)

    def Exec(self, aThread):
        if (aThread):
            self.ThreadPipe = TThreadPipeApi()
            self.Manager.SecRun.ThreadPipe = self.ThreadPipe
            CreateThread(self.Run)
        else:
            self.Run()
