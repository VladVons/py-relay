"""
Copyright:   (c) 2021, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2021.01.19
License:     GNU, see LICENSE for more details
Description:
"""

from Inc.Log     import Log
from Inc.Param   import TDictParam
from Inc.Util    import UNet


from Core.DeviceThread import (
    TSensorThreadRead,
    TProviderThreadRead,
)

from Plugin.Providers.DevMpy import (
    TProviderDevMpy_DHT22
)


PkgConf = {
    "Version": "1.01",
    "Author": "Vladvons"
}


def CheckHostPort(aHost: str, aPort: int = 80):
    Arr = UNet.UrlParse(aHost)
    Host = Arr.netloc
    if (not Host):
        Host = Arr.path

    if (not UNet.CheckHostPort(Host, aPort)):
        Msg = Log.PrintDbg(1, 'e', 'Cant connect to host %s:%s' % (Host, aPort))
        #raise Exception(Msg)


class TProviderDevMpyPinThread(TProviderThreadRead):
    def __init__(self, aParent):
        super().__init__(aParent)

        Pattern = {'Host': TDictParam.Required, 'Pin': TDictParam.Required}
        self.Param.AddDefPattern(Pattern)

    def DoParameter(self, aParam):
        self.Param.LoadPattern(aParam)
        CheckHostPort(self.Param.Host)

        self.SetProvider()
        self.CreateThread()


class TProviderDevMpyPinThread_DHT22(TProviderDevMpyPinThread):
    def SetProvider(self):
        self.Provider = TProviderDevMpy_DHT22(self.Param.Host, self.Param.Pin)
