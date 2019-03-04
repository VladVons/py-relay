'''
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2017.11.10
License:     GNU, see LICENSE for more details
Description:
'''


from Core.DeviceThread          import TSensorThreadRead
from Plugin.Providers.HTTP_MyIP import TProviderHTTP_MyIP


class TSensorHTTP_MyIP(TSensorThreadRead):
    def DoParameter(self, aParam):
        self.Param.LoadPattern(aParam)
        self.Param.Round = None

        self.Provider = TProviderHTTP_MyIP()
        self.CreateThread()
