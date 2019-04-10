'''
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2018.03.06
License:     GNU, see LICENSE for more details
Description:

import os
print os.path.abspath(urllib.__file__)

https://www.programcreek.com/python/example/98644/yattag.Doc
'''

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
    print(__file__, E, 'pip install yattag')

#
from Inc.Log        import Log
from Inc.Util       import FS
from Inc.Serialize  import TSerialize
from Inc.Param      import TDictReplace
from Inc.HttpServer import TSockServer, TConnSessionHttp
from Inc.Thread     import CreateThread, TThreadPipe


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

    def UrlApi(self, aParam):
        DataIn  = self.Serialize.EncodeFunc(aParam.get('method'), *[])
        DataOut = self.Serialize.DecodeToStr(DataIn)

        doc, tag, text = Doc().tagtext()
        doc.asis('<!DOCTYPE html>')
        with tag('html'):
            with tag('body'):
                text(DataOut)
        self.Parent.AddData(doc.getvalue())

    def UrlIndex(self, aParam):
        pass

    def UrlDeviceSet(self, aParam):
        Class = self.GetClass(aParam.get('alias'))
        if (Class):
            Class._Set(self, aParam.get('value'))

    def UrlDeviceGet(self, aParam):
        Class = self.GetClass(aParam.get('alias'))
        if (Class):
            Data = self.ProcessThreadQueue(aParam)
            self.Parent.AddData(str(Data))


class TConnSessionApp(TConnSessionHttp):
    def __init__(self, aParent):
        TConnSessionHttp.__init__(self, aParent)

        self.Dir     = ''
        self.Manager = None
        self.Dict = TDictReplace()

        Web = TWeb(self)
        self.UrlPattern = {
            '/': {'func': Web.UrlIndex, 'param': []},
            '/favicon.ico': {'func': Web.UrlIndex, 'param': []},
            '/api': {'func': Web.UrlApi, 'param': ['method']},
            '/device/set': {'func': Web.UrlDeviceSet, 'param': ['alias', 'value']},
            '/device/get': {'func': Web.UrlDeviceGet, 'param': ['alias']}
        }

    def LoadFile(self, aPath):
        Path = os.getcwd() + '/' + self.Dir + aPath
        Data = FS.LoadFromFileToStr(Path)
        Result = (Data is not  None)
        if (Result):
            self.AddHead(200)
            self.AddMime(Path)
            self.AddData('')
            self.AddData(self.Dict.Parse(Data))
            #self.AddData(Data)
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

        if (not self.LoadFile(Path)):
            CheckErr = self.Check(Path, Query)
            if (CheckErr):
                Log.PrintDbg(1, 'e', CheckErr)

                self.AddHead(404)
                self.AddMime('*.html')
                self.AddData('Date: ' + time.strftime("%a, %d %b %Y %H:%M:%S", time.localtime()))
                self.AddData('Server: Simple-Python-HTTP-Server')
                #self.AddData('Connection: close')
                self.AddData('')

                self.Dict.AddKey('CheckErr', CheckErr)
                self.LoadFile('/page_404.tpl')
            else:
                self.AddHead(200)
                self.AddMime('*.html')
                self.AddData('')
                Func = self.UrlPattern.get(Path).get('func')
                Func(Query)
            #print(self.GetData())


class TThreadPipeApi(TThreadPipe):
    Cnt = 0

    # we are in main process with parameters
    def DoReceive(self, aData):
        self.Cnt += 1
        aData = [self.Cnt, 'Hello', aData]
        return aData


class THttpServerApi(TSockServer):
    def __init__(self, aPort):
        TSockServer.__init__(self, aPort)

        #self.Timeout = 1
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

#aUrl  = '/device/set?alias=DH1_Relay_A&value=1'
#ServerApi.DoGet(aUrl)
