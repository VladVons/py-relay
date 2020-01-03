"""
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2019.11.26
License:     GNU, see LICENSE for more details
Description:
"""

import os
import mimetypes
import json
from aiohttp import web
#
from Inc.Log        import Log
from Inc.Util       import UFS, UObj
from Inc.Param      import TDictReplace, TDictBlock, TDictNamed
from Api.ExternApi  import TExternApi
from Core           import HttpProc


Urls = {
    '/get/app/api':     {'param': [],           'format': ['Api',            ['Api']]},
    '/get/app/version': {'param': [],           'format': ['Version',        ['Name', 'Value']]},
    '/get/app/devices': {'param': [],           'format': ['Devices',        ['TClass', 'Path', 'Module', 'Inherit']]},
    '/get/app/classes': {'param': [],           'format': ['Aliases',        ['Alias', 'Class', 'Descr']]},
    '/get/class/keys':  {'param': [],           'format': ['Keys',           ['Keys']]},
    '/get/dev/values':  {'param': [],           'format': ['Devices value',  ['Alias', 'Value']]},
    '/get/dev/valuesf': {'param': ['alias'],    'format': ['Devices value',  ['Alias', 'Value']]},
    '/get/dev/value':   {'param': ['alias'],    'format': ['Device value',   ['Alias', 'Value']]},
    '/set/dev/value':   {'param': ['alias','value'], 'format': ['Device value', ['Alias', 'Value']]},
    '/set/dev/auto':    {'param': ['alias'],    'format': ['Device auto',    ['Alias', 'Value']]}
}

class THttpApiWeb():
    def __init__(self):
        self.RootDir    = 'Plugin/Web'
        self.FileLayout = '/layout.tpl'
        self.FileIndex  = '/index.tpl'
        self.File404    = '/page_404.tpl'

        self.Result = TDictNamed({'Text': '', 'Context': '', 'Redirect': ''})
        self.ExternApi = TExternApi()
        self._CheckUrls()

    def _CheckUrls(self):
        for Url in Urls:
            Method = self.GetMethodName(Url)
            if (UObj.GetAttr(self, Method, True) is None) and (UObj.GetAttr(self.ExternApi, Method, True) is None):
                Log.PrintDbg(1, 'x', 'Unknown url %s' % Url)

    @staticmethod
    def GetMethodName(aPath: str) -> str:
        return 'path' + aPath.replace('/', '_')

    def CheckParam(self, aPath: str, aParam) -> str:
        Result = ''
        Url = Urls.get(aPath)
        if (Url):
            # duplicate copy for later modification
            Param = Url.get('param', [])[:]

            Diff = set(Param) - set(aParam)
            if (Diff):
                Result ='Param %s not set' % Diff
                Log.PrintDbg(1, 'e', Result)

            Param.append('style')
            Diff = set(aParam) - set(Param)
            if (Diff):
                Result = 'Unknown parameter %s' % Diff
                Log.PrintDbg(1, 'e', Result)
        return Result

    def CallObj(self, aPath: str, aParam) -> str:
        Result = ''
        Method = self.GetMethodName(aPath)
        Obj = UObj.GetAttr(self, Method, True)
        if (Obj):
            Result = Obj(aParam)
        else:
            Obj = UObj.GetAttr(self.ExternApi, Method, True)
            if (Obj):
                Result = Obj(aParam)
                Url = Urls.get(aPath)
                if (Url):
                    Format = Url.get('format')
                    Result = self.Output(aParam, Result, Format[0], Format[1])
                else:
                    Result = json.dumps(Result)
        return Result

    def ParseUrl(self, aPath: str, aParam):
        Err = self.CheckParam(aPath, aParam)
        if (Err != ''):
            Result = self.HtmlPattern(self.File404, {'cErr': Err})
        else:
            Result = self.CallObj(aPath, aParam)
            if (Result == ''):
                if (UFS.FileExists(self.RootDir + aPath)):
                    Result = self.ParseUrlFile(aPath)
                else:
                    Log.PrintDbg(1, 'e', 'Unknown url %s' % aPath)
                    Result = self.HtmlPattern(self.File404, {'cErr': aPath})
        return Result

    def ParseUrlFile(self, aPath: str):
        FilePath = self.RootDir + aPath
        if (os.path.isdir(FilePath)):
            Result = self.HtmlDir(aPath, FilePath)
        else:
            Ext = UFS.SplitName(FilePath).Ext
            if (Ext == '.tpl'):
                Result = self.HtmlPattern(aPath)
            else:
                self.Result.Context = mimetypes.guess_type(FilePath)[0]
                Result = UFS.LoadFromFile(FilePath)
        return Result

    def HtmlDir(self, aPath: str, aFullPath: str):
        Data  = HttpProc.HtmlDir(aPath, aFullPath)
        Data  = HttpProc.HtmlTable(['Name', 'Size', 'Date'], Data)
        Param = {'cTitle': 'HtmlDir', 'cBody': Data}
        return self.HtmlPattern(self.FileLayout, Param)

    def HtmlPattern(self, aFile: str, aDict: dict = {}) -> str:
        DReplace = TDictReplace()
        DReplace.AddKeys(aDict)

        FilePath = self.RootDir + aFile

        DBlock = TDictBlock()
        Data = UFS.LoadFromFileToStr(FilePath)
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
            Data = UFS.LoadFromFileToStr(FilePath)
        return DReplace.Parse(Data)

    def Output(self, aParam,  aData, aTitle: str, aColumns: list) -> str:
        if (aParam.get('style') == 'json'):
            Result = json.dumps(aData)
        else:
            Type = type(aData)
            if (Type is dict):
                aData = sorted(aData.items())
            elif (Type is list):
                aData.sort()

            aData = HttpProc.HtmlTable(aColumns, aData)
            Param = {'cTitle': aTitle, 'cBody': aData}
            Result = self.HtmlPattern(self.FileLayout, Param)
        return Result

    def path_(self, aParam):
        return self.HtmlPattern(self.FileIndex)

    def path_get_app_profile(self, aParam):
        Data = self.ExternApi.path_get_app_profile(aParam)
        self.Result.Redirect = Data.get('Path').rstrip('/').replace('Plugin', '')
        return ''


class THttpApiWebServer(THttpApiWeb):
    def Handler_CB(self, aRequest):
        #aRequest.headers.get('User-Agent')
        Log.PrintDbg(1, 'i', '%s from %s %s' % (aRequest.path_qs, aRequest.remote, ''))

        self.Result.Clear()
        Text = self.ParseUrl(aRequest.rel_url.path, dict(aRequest.query))
        if (self.Result.Redirect):
            raise web.HTTPFound(location = self.Result.Redirect)
        else:
            return web.Response(body = Text, content_type = self.Result.Context)

    async def Run(self, aPort: int):
        Log.PrintDbg(1, 'i', 'Starting server at http://127.0.0.1:%s' % aPort)

        App = web.Application()
        #App.router.add_route('GET', '/', self.Handler)
        #App.router.add_route('GET', '/{name}/', self.Handler)
        App.router.add_route('GET', r'/{name:.*}', self.Handler_CB)

        Runner = web.AppRunner(App)
        await Runner.setup()
        Site = web.TCPSite(Runner, '0.0.0.0', aPort)
        await Site.start()
