"""
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2019.11.26
License:     GNU, see LICENSE for more details
Description:
"""

import os
import mimetypes
from aiohttp import web
#
from Inc.Log     import Log
from Inc.Util    import FS
from Inc.Param   import TDictReplace, TDictBlock, TDictNamed
from Core.ExtApi import TExtApi
from Core        import HttpProc


class THttpApiWeb():
    def __init__(self):
        self.RootDir    = 'Plugin/Web'
        self.FileLayout = '/layout.tpl'
        self.FileIndex  = '/index.tpl'
        self.Url = {
            '/':                {'func': '', 'param': []},
            '/get/app/api':     {'func': '', 'param': []},
            '/get/app/version': {'func': '', 'param': []},
            '/get/app/devices': {'func': '', 'param': []},
            '/get/app/classes': {'func': '', 'param': []},
            '/get/class/keys':  {'func': '', 'param': []},
            '/get/app/profile': {'func': '', 'param': []},
            '/get/dev/values':  {'func': '', 'param': []},
            '/get/dev/valuesf': {'func': '', 'param': ['alias']},
            '/get/dev/value':   {'func': '', 'param': ['alias']},
            '/set/dev/value':   {'func': '', 'param': ['alias', 'value']}
        }

        self._CheckUrl()
        self.Result = TDictNamed({'Text': '', 'Context': ''})
        self.ExtApi = TExtApi()

    def _CheckUrl(self):
        for Item in self.Url:
            if (self.GetObj(Item) is None):
                Log.PrintDbg(1, 'x', 'Unknown url %s' % Item)

    def GetObj(self, aPath: str):
        Result = None

        Data = self.Url.get(aPath)
        if (Data):
            Func = Data.get('func')
            if (Func == ''):
                Func = 'Url' + aPath.replace('/', '_')

            if (hasattr(self, Func)) and (callable(getattr(self, Func))):
                Result = getattr(self, Func)
        return Result

    def ParseUrl(self, aPath: str, aParam):
        Obj = self.GetObj(aPath)
        if (Obj):
            Result = Obj(aParam)
        elif (FS.FileExists(self.RootDir + aPath)):
            Result = self.ParseUrlFile(aPath)
        else:
            Result = Log.PrintDbg(1, 'e', 'Unknown url %s' % aPath)
        return Result

    def ParseUrlFile(self, aPath: str):
        FilePath = self.RootDir + aPath
        if (os.path.isdir(FilePath)):
            Result = self.HtmlDir(aPath, FilePath)
        else:
            Ext = FS.SplitName(FilePath)[3]
            if (Ext == '.tpl'):
                Result = self.HtmlPattern(aPath)
            else:
                self.Result.Context = mimetypes.guess_type(FilePath)[0]
                Result = FS.LoadFromFile(FilePath)
        return Result

    def HtmlDir(self, aPath, aFullPath):
        Data  = HttpProc.HtmlDir(aPath, aFullPath)
        Data  = HttpProc.HtmlTable(['Name', 'Size', 'Date'], Data)
        Param = {'cTitle': 'HtmlDir', 'cBody': Data}
        return self.HtmlPattern(self.FileLayout, Param)

    def HtmlPattern(self, aFile, aDict = {}):
        DReplace = TDictReplace()
        DReplace.AddKeys(aDict)

        FilePath = self.RootDir + aFile

        DBlock = TDictBlock()
        Data = FS.LoadFromFileToStr(FilePath)
        DBlock.Parse(Data)
        Files = DBlock.GetKeys('File')
        if (Files):
            Blocks = DBlock.GetKeys('Block')
            for Block in Blocks:
                Key   = Block.split()[1]
                Value = DBlock.Get('Block', Key).strip()
                if (Key not in aDict):
                    DReplace.AddKey(Key, Value)

            Extender = Files[0].split()[1]
            FilePath = self.RootDir + Extender
            Data = FS.LoadFromFileToStr(FilePath)

        return DReplace.Parse(Data)

    def ToTable(self, aData, aTitle: str, aColumns: list):
        Type = type(aData)
        if (Type is dict):
            aData = sorted(aData.items())
        elif  (Type is list):
            aData.sort()

        aData = HttpProc.HtmlTable(aColumns, aData)
        Param = {'cTitle': aTitle, 'cBody': aData}
        return self.HtmlPattern(self.FileLayout, Param)

    def Url_(self, aParam):
        return self.HtmlPattern(self.FileIndex)

    def Url_get_dev_value(self, aParam):
        Data = self.ExtApi.get_dev_value(aParam)
        return self.ToTable(Data, 'Device value', ['Alias', 'Value'])

    def Url_get_dev_values(self, aParam):
        Data = self.ExtApi.get_dev_values(aParam)
        return self.ToTable(Data, 'Devices value', ['Alias', 'Value'])

    def Url_get_dev_valuesf(self, aParam):
        Data = self.ExtApi.get_dev_valuesf(aParam)
        return self.ToTable(Data, 'Devices value', ['Alias', 'Value'])

    def Url_get_app_classes(self, aParam):
        Data = self.ExtApi.get_app_classes(aParam)
        return self.ToTable(Data, 'Aliases', ['Alias', 'Class', 'Descr'])

    def Url_get_app_version(self, aParam):
        Data = self.ExtApi.get_app_version(aParam)
        return self.ToTable(Data, 'Version', ['Name', 'Value'])

    def Url_get_class_keys(self, aParam):
        Data = self.ExtApi.get_class_keys(aParam)
        return self.ToTable(Data, 'Keys', ['Keys'])

    def Url_get_app_devices(self, aParam):
        Data = self.ExtApi.get_app_devices(aParam)
        return self.ToTable(Data, 'Devices', ['TClass', 'Path', 'Module', 'Inherit'])

    def Url_get_app_api(self, aParam):
        Data = self.ExtApi.get_app_api(aParam)
        return self.ToTable(Data, 'Api', ['Api'])

    def Url_get_app_profile(self, aParam):
        Path = self.ProcessThreadQueue(False, aParam)
        self.Parent.Redirect(Path)

    def Url_set_dev_value(self, aParam):
        Data = self.ExtApi.set_dev_value(aParam)
        return 'OK'


class THttpApiWebServer(THttpApiWeb):
    def Handler_CB(self, aRequest):
        Log.PrintDbg(1, 'i', '%s from %s %s' % (aRequest.path_qs, aRequest.remote, aRequest.headers.get('User-Agent')))
        self.Result.Clear()
        Text = self.ParseUrl(aRequest.rel_url.path, aRequest.query)
        return web.Response(body = Text, content_type = self.Result.Context)

    async def Run(self, aPort):
        Log.PrintDbg(1, 'i', 'Starting server at http://127.0.0.1:%s' % aPort)

        App = web.Application()
        #App.router.add_route('GET', '/', self.Handler)
        #App.router.add_route('GET', '/{name}/', self.Handler)
        App.router.add_route('GET', r'/{name:.*}', self.Handler_CB)

        Runner = web.AppRunner(App)
        await Runner.setup()
        Site = web.TCPSite(Runner, '0.0.0.0', aPort)
        await Site.start()
