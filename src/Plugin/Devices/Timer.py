"""
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2017.10.15
License:     GNU, see LICENSE for more details
Description:
"""

from Inc.Param    import TDictParam
from Core.Device  import TSensor
from Plugin.Providers.Timer import TProviderTimeRangeCycle, TProviderTimeRangeDay, TProviderTimeRangeDayFadeWave, TTimeRangeCycle

PkgConf = {
    "Version": "1.01",
    "Author": "Vladvons"
}

class TSensorTimeRange(TSensor):
    def __init__(self, aParent):
        TSensor.__init__(self, aParent)

        Pattern = {'Ranges': [], 'Round': None}
        self.Param.AddDefPattern(Pattern)

    def DoParameter(self, aParam):
        self.Param.LoadPattern(aParam)
        self.SetProvider()


class TSensorTimeRangeCycle(TSensorTimeRange):
    def SetProvider(self):
        self.Provider = TProviderTimeRangeCycle(self.Param.Ranges)


class TSensorTimeRangeDay(TSensorTimeRange):
    def SetProvider(self):
        self.Provider = TProviderTimeRangeDay(self.Param.Ranges)


class TSensorTimeRangeDayFadeWave(TSensorTimeRange):
    def __init__(self, aParent):
        TSensorTimeRange.__init__(self, aParent)

        Pattern = {'Min': TDictParam.Required, 'Max': TDictParam.Required, 'Invert': False}
        self.Param.AddDefPattern(Pattern)

    def SetProvider(self):
        self.Provider = TProviderTimeRangeDayFadeWave(self.Param.Ranges, self.Param.Min, self.Param.Max, self.Param.Invert)

"""
has no ReadTry() ?
class TSensorTimeRangeCycleDirect{TSensor}:
    def __init__(self, aParent):
        TSensor.__init__(self, aParent)

        Pattern = {'Ranges': []}
        self.Param.AddDefPattern(Pattern)

    def DoParameter(self, aParam):
        self.Param.LoadPattern(aParam)
        self.Obj = TTimeRangeCycle()
        self.Obj.SetRanges(self.Param.Ranges)

    def _Get(self):
        return self.Obj.Get()
"""
