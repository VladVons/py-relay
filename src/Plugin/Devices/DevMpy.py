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
    TProviderDevMpy_DHT22,
    TProviderDevMpy_DS18B20
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

#----------------

class TProviderDevMpyPinThread(TProviderThreadRead):
    def __init__(self, aParent):
        super().__init__(aParent)

        Pattern = {'Host': TDictParam.Required, 'Pin': TDictParam.Required, 'Round': 0.25}
        self.Param.AddDefPattern(Pattern)

    def DoParameter(self, aParam):
        self.Param.LoadPattern(aParam)
        CheckHostPort(self.Param.Host)

        self.SetProvider()
        self.CreateThread()


class TProviderDevMpyPinThread_DHT22(TProviderDevMpyPinThread):
    def SetProvider(self):
        #self.Range.Set('temperature', [-40, 80])
        self.Provider = TProviderDevMpy_DHT22(self.Param.Host, self.Param.Pin)

#----------------

class TSensorDevMpyThread(TSensorThreadRead):
    def __init__(self, aParent):
        super().__init__(aParent)

        Pattern = {'Host': TDictParam.Required, 'Avg': 3, 'Round': 0.25}
        self.Param.AddDefPattern(Pattern)

    def DoParameter(self, aParam):
        self.Param.LoadPattern(aParam)

        CheckHostPort(self.Param.Host)
        self.Avg.SetSize(self.Param.Avg)

        self.SetProvider()
        self.CreateThread()

class TSensorDevMpyPinThread_DS18B20(TSensorDevMpyThread):
    def __init__(self, aParent):
        super().__init__(aParent)

        Pattern = {'Pin': TDictParam.Required, 'ID': None}
        self.Param.AddDefPattern(Pattern)

    def SetProvider(self):
        self.Range.Set(None, [-55, 125])
        self.Provider = TProviderDevMpy_DS18B20(self.Param.Host, self.Param.Pin, self.Param.ID)
