"""
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2018.03.06
License:     GNU, see LICENSE for more details
Description:

import os
print os.path.abspath(urllib.__file__)

https://www.programcreek.com/python/example/98644/yattag.Doc
"""


import os
import time

try:
    import urlparse
except:
    import urllib.parse as urlparse

# from html import HTML
try: 
    from yattag import Doc 
except Exception as E: 
    print(__file__, E, 'apt pip install yattag')
#
from Inc.Log        import Log
from Inc.Util       import FS, Obj
from Inc.Serialize  import TSerialize
from Inc.Param      import TDictReplace, TDictBlock
from Inc.HttpServer import TSockServer, TConnSessionHttp
from Inc.Thread     import CreateThread, TThreadPipe
from Api.Misc       import Version


def DeviceTree(aObj, aStr = ''):
    if (aObj.Parent):
        aStr += DeviceTree(aObj.Parent) + ' -> '
    aStr += 'Alias:%s, Class:%s, Descr:%s' % (aObj.Alias, Obj.GetName(aObj), aObj.Descr)
    return aStr


class TThreadPipeApi(TThreadPipe):
    Cnt = 0

    # we are in main process with parameters
    def DoReceive(self, aParent, aData):
        self.Cnt += 1
        Alias = aData.get('alias')
        Class = aParent.Parent.SecClass.GetClass(Alias)
        if (Class):
            Value = Class.Exec.apix.xValue
        aData = [self.Cnt, 'Hello', Value, aData]
        return aData


class TWeb():
    def __init__(self, aParent):
        self.Parent = aParent

        self.Serialize = TSerialize()
        self.Serialize.AddModule('Api')

    def ProcessThreadQueue(self, aData):
        ThreadPipe = self.Parent.Parent.ThreadPipe
        if (ThreadPipe):
            aData = ThreadPipe.ThreadSend(aData)
        return aData

    def GetClass(self, aAlias):
        Class = self.Parent.Parent.Manager.SecClass.GetClass(aAlias)
        if (not Class):
            Msg = Log.PrintDbg(1, 'e', 'Alias not found %s' % aAlias)
            self.Parent.AddData(Msg)
        return Class

    def Html(self, aBody):
        doc, tag, text = Doc().tagtext()
        doc.asis('<!DOCTYPE html>')
        with tag('html'):
            with tag('body'):
                #text(aBody)
                doc.asis(aBody)
        Str = doc.getvalue()
        self.Parent.AddData(Str)

    def HtmlAsArr(self, aArr):
        self.Html('<br>\r\n'.join(aArr))

    def HtmlPattern(self, aFile, aDict):
        DReplace = TDictReplace()
        DReplace.AddKeys(aDict)

        DBlock = TDictBlock()
        Data = FS.LoadFromFileToStr(self.Parent.GetFilePath(aFile))
        DBlock.Parse(Data)
        Files = DBlock.GetKeys('File')
        if (Files):
            Blocks = DBlock.GetKeys('Block')
            for Block in Blocks:
                Key   = Block.split()[1]
                Value = DBlock.Get('Block', Key).strip()
                DReplace.AddKey(Key, Value)

            Extender = Files[0].split()[1]
            Data = FS.LoadFromFileToStr(self.Parent.Dir + '/' + Extender)

        Data = DReplace.Parse(Data)
        self.Parent.AddData(Data)

    def UrlVersion(self, aParam):
        Arr = Obj.GetTreeAsList(Version())
        Param = {'cTitle': 'Version', 'cBody': '<br>\r\n'.join(Arr)}
        self.HtmlPattern('/layout.tpl', Param)

    def UrlApi(self, aParam):
        DataIn  = self.Serialize.EncodeFunc(aParam.get('method'), *[])
        DataOut = self.Serialize.DecodeToStr(DataIn)
        self.Html(DataOut)

    def UrlIndex(self, aParam):
        self.HtmlPattern('/index.tpl', {})

    def UrlClassList(self, aParam):
        Arr = []
        Items = self.Parent.Parent.Manager.SecClass.Data
        for Item in Items:
            Str = DeviceTree(Items[Item])
            Arr.append('%s, %s' % (len(Arr) + 1, Str))

        Param = {'cTitle': 'Class list', 'cBody': '<br>\r\n'.join(Arr)}
        self.HtmlPattern('/layout.tpl', Param)

    def UrlDeviceSet(self, aParam):
        Class = self.GetClass(aParam.get('alias'))
        if (Class):
            Class._Set(self, aParam.get('value'))

    def UrlDeviceGet(self, aParam):
        Class = self.GetClass(aParam.get('alias'))
        if (Class):
            Data = self.ProcessThreadQueue(aParam)

            Param = {'cTitle': 'Device value', 'cBody': Data}
            self.HtmlPattern('index.tpl', Param)

class TConnSessionApp(TConnSessionHttp):
    def __init__(self, aParent):
        TConnSessionHttp.__init__(self, aParent)

        self.Dir     = ''
        self.Manager = None
        self.Dict    = TDictReplace()

        self.Web = TWeb(self)
        self.UrlPattern = {
            '/':                {'func': self.Web.UrlIndex,     'param': []},
            '/favicon.ico':     {'func': self.Web.UrlIndex,     'param': []},
            '/api':             {'func': self.Web.UrlApi,       'param': ['method']},
            '/version':         {'func': self.Web.UrlVersion,   'param': []},
            '/classlist':       {'func': self.Web.UrlClassList, 'param': []},
            '/device/setvalue': {'func': self.Web.UrlDeviceSet, 'param': ['alias', 'value']},
            '/device/getvalue': {'func': self.Web.UrlDeviceGet, 'param': ['alias']}
        }

    def GetFilePath(self, aPath):
        if (not FS.FileExists(aPath)):
            aPath = os.getcwd() + '/' + self.Dir + aPath
            if (not FS.FileExists(aPath)):
                aPath = None
        return aPath

    def LoadFile(self, aPath):
        Result = False
        Path = self.GetFilePath(aPath)
        Data = FS.LoadFromFileToStr(Path)
        if (Data):
            self.AddHead(200)
            self.AddMime(Path)
            self.AddData('')
            self.AddData(self.Dict.Parse(Data))
            #self.AddData(Data)
            Result = True
        return Result

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

    def DoGet(self, aUrl):
        self.Dict.Clear()

        Url   = urlparse.urlparse(aUrl)
        Path  = Url.path
        Query = dict(urlparse.parse_qsl(Url.query, 1))

        FilePath = self.GetFilePath(Path)
        if (FilePath):
            Ext = FS.SplitName(FilePath)[3]
            if (Ext == '.tpl'):
                werqw
                self.Web.HtmlPattern(Path, {})
            else:
                self.LoadFile(FilePath)
        else:
            CheckErr = self.Check(Path, Query)
            if (CheckErr):
                Log.PrintDbg(1, 'e', CheckErr)

                self.AddHead(404)
                self.AddMime('*.html')
                self.AddData('Date: ' + time.strftime("%a, %d %b %Y %H:%M:%S", time.localtime()))
                self.AddData('Server: Simple-Python-HTTP-Server')
                # self.AddData('Connection: close')
                self.AddData('')

                self.Dict.AddKey('CheckErr', CheckErr)
                self.LoadFile('/page_404.tpl')
            else:
                self.AddHead(200)
                self.AddMime('*.html')
                self.AddData('')
                Func = self.UrlPattern.get(Path).get('func')
                try:
                    Func(Query)
                except Exception as E:
                    Log.PrintDbg(1, 'x', E)


class THttpServerApi(TSockServer):
    def __init__(self, aPort):
        TSockServer.__init__(self, aPort)

        # self.Timeout = 1
        self.Manager  = None
        self.Dir      = 'Plugin/Web'
        self.Conn     = TConnSessionApp(self)

    def DoAccept(self, aConn, aAddr):
        self.Conn.Dir = self.Dir
        self.Conn.Handle(aConn)

    def Exec(self, aThread):
        if (aThread):
            self.ThreadPipe = TThreadPipeApi()
            self.Manager.SecRun.ThreadPipe = self.ThreadPipe
            CreateThread(self.Run)
        else:
            self.Run()

# aUrl  = '/device/set?alias=DH1_Relay_A&value=1'
# ServerApi.DoGet(aUrl)
