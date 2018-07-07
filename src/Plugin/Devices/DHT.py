'''
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2017.11.10
License:     GNU, see LICENSE for more details
Description:
    voltage - 3.3V
    gpio - 23 (was connected)
'''

from Inc.Param        import TDictParam
from Core.Device      import TSensorThredRead
from Plugin.Providers.DHT import TProviderDHT_22


class TSensorDHT_22(TSensorThredRead):
    def __init__(self, aParent):
        TSensorThredRead.__init__(self, aParent)

        Pattern = {'Address': TDictParam.Required}
        self.Param.AddDefPattern(Pattern)

    def DoParameter(self, aParam):
        self.Param.LoadPattern(aParam)
        self.Provider = TProviderDHT_22(self.Param.Address)
        self.CreateThread()
