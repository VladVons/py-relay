'''
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2017.11.10
License:     GNU, see LICENSE for more details

Description:
    Brightness 
'''

from Inc.Param        import TDictParam
from Core.Device      import TSensorThredRead, TRelay
from Plugin.Providers.I2C import TProviderI2C_BH1750, TProviderI2C_Relay_8574, TProviderI2C_BMP280


class TSensorI2C_BH1750(TSensorThredRead):
    def __init__(self, aParent):
        TSensorThredRead.__init__(self, aParent)

        Pattern = {'Bus': 1, 'Address': TDictParam.Required}
        self.Param.AddDefPattern(Pattern)

    def DoParameter(self, aParam):
        self.Param.LoadPattern(aParam)
        self.Provider = TProviderI2C_BH1750(self.Param.Bus, self.Param.Address, 0x20)
        self.CreateThread()


class TSensorI2C_BMP280(TSensorThredRead):
    def __init__(self, aParent):
        TSensorThredRead.__init__(self, aParent)

        Pattern = {'Address': TDictParam.Required}
        self.Param.AddDefPattern(Pattern)

    def DoParameter(self, aParam):
        self.Param.LoadPattern(aParam)
        self.Provider = TProviderI2C_BMP280(self.Param.Address)
        self.CreateThread()


class TRelayI2C_Relay_8574(TRelay):
    def __init__(self, aParent):
        TRelay.__init__(self, aParent)

        Pattern = {'Bus': 1, 'Address': TDictParam.Required, 'Bits': 8, 'Command': TDictParam.Required}
        self.Param.AddDefPattern(Pattern)

    def DoParameter(self, aParam):
        self.Param.LoadPattern(aParam)
        self.Provider = TProviderI2C_Relay_8574(self.Param.Bus, self.Param.Address, self.Param.Command)
