'''
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2018.04.13
License:     GNU, see LICENSE for more details
Description:
'''

from Inc.Param    import TDictParam
from Core.Device  import TSensor
from Plugin.Providers.Solar import TProviderSun, TProviderMoon


class TSensorSolar(TSensor):
    def __init__(self, aParent):
        TSensor.__init__(self, aParent)

        Pattern = {'Latitude': TDictParam.Required, 'Longitude': TDictParam.Required}
        self.Param.AddDefPattern(Pattern)

    def DoParameter(self, aParam):
        self.Param.LoadPattern(aParam)
        self.SetProvider()


class TSensorSun(TSensorSolar):
    def SetProvider(self):
        self.Provider = TProviderSun(self.Param.Latitude, self.Param.Longitude)


class TSensorMoon(TSensorSolar):
    def SetProvider(self):
        self.Provider = TProviderMoon(self.Param.Latitude, self.Param.Longitude)

