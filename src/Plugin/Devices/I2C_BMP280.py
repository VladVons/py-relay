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
from Plugin.Providers.I2C_BMP280 import TProviderI2C_BMP280


class TSensorI2C_BMP280(TSensorThreadRead):
    def __init__(self, aParent):
        super().__init__(aParent)

        Pattern = {'Address': TDictParam.Required}
        self.Param.AddDefPattern(Pattern)

    def DoParameter(self, aParam):
        self.Param.LoadPattern(aParam)
        self.Provider = TProviderI2C_BMP280(self.Param.Address)
        self.CreateThread()
