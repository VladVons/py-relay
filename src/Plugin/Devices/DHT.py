"""
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2017.11.10
License:     GNU, see LICENSE for more details
Description:
    voltage - 3.3V
    gpio - 23 (was connected)
"""

from Inc.Param            import TDictParam
from Core.DeviceThread    import TSensorThreadRead
from Plugin.Providers.DHT import TProviderDHT_22

PkgConf = {
    "Version": "1.01",
    "Author": "Vladvons"
}

class TSensorDHT_22(TSensorThreadRead):
    def __init__(self, aParent):
        super().__init__(aParent)

        Pattern = {'Address': TDictParam.Required}
        self.Param.AddDefPattern(Pattern)

    def DoParameter(self, aParam):
        self.Param.LoadPattern(aParam)
        self.Provider = TProviderDHT_22(self.Param.Address)
        self.CreateThread()
