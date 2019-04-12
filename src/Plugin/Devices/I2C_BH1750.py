"""
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2017.11.10
License:     GNU, see LICENSE for more details

Description:
    Brightness 
"""

from Inc.Param            import TDictParam
from Core.DeviceThread    import TSensorThreadRead
from Plugin.Providers.I2C_BH1750 import TProviderI2C_BH1750


class TSensorI2C_BH1750(TSensorThreadRead):
    def __init__(self, aParent):
        TSensorThreadRead.__init__(self, aParent)

        Pattern = {'Bus': 1, 'Address': TDictParam.Required}
        self.Param.AddDefPattern(Pattern)

    def DoParameter(self, aParam):
        self.Param.LoadPattern(aParam)
        self.Provider = TProviderI2C_BH1750(self.Param.Bus, self.Param.Address, 0x20)
        self.CreateThread()
