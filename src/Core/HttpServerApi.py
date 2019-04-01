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
from Inc.HttpServer import THTTPServer
from Inc.Param      import TDictReplace


class TWeb():
    def __init__(self, aParent):
        self.Parent = aParent

        self.Serialize = TSerialize()
        self.Serialize.AddModule('Api')

    def GetClass(self, aAlias):
        Class = self.Parent.Manager.SecClass.GetClass(aAlias)
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
            self.Parent.AddData(str(Class._Get()))


class THTTPServerApi(THTTPServer):
    def __init__(self, aPort, aManager, aDevices):
        THTTPServer.__init__(self, aPort)

        self.Manager = aManager
        self.Devices = aDevices
        self.Dir     = None

        self.Dict = TDictReplace()

        Web = TWeb(self)
        self.UrlPattern = {
            '/':            {'func': Web.UrlIndex,     'param': []},
            '/favicon.ico': {'func': Web.UrlIndex,     'param': []},
            '/api':         {'func': Web.UrlApi,       'param': ['method']},
            '/device/set':  {'func': Web.UrlDeviceSet, 'param': ['alias', 'value']},
            '/device/get':  {'func': Web.UrlDeviceGet, 'param': ['alias']}
        }

    def DoTimeout(self):
        self.Manager.PostAll(self.Devices)

    def DoPost(self, aUrl, aData):
        print(aUrl, aData)

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


#aUrl  = '/device/set?alias=DH1_Relay_A&value=1'
#ServerApi.DoGet(aUrl)
