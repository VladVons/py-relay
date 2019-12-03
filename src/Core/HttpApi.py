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
from Api.ExternApi  import TExternApi, Urls
from Core           import HttpProc


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

    def CallObj(self, aPath: str, aParam):
        Result = None

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
        Result = self.CallObj(aPath, aParam)
        if (Result is None):
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
            Ext = UFS.SplitName(FilePath)[3]
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
        Text = self.ParseUrl(aRequest.rel_url.path, aRequest.query)
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
