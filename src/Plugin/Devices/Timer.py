"""
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2017.10.15
License:     GNU, see LICENSE for more details
Description:
"""

from Inc.Param    import TDictParam
from Core.Device  import TSensor
from Plugin.Providers.Timer import (
    TProviderTimeRangeCycle,
    TProviderTimeRangeDay,
    TProviderTimeRangeDayFadeWave,
    TProviderTimeRangeDayFadeLine,
    TProviderTimeRangeMonth
)


PkgConf = {
    "Version": "1.01",
    "Author": "Vladvons"
}

class TSensorTimeRange(TSensor):
    def __init__(self, aParent):
        super().__init__(aParent)

        Pattern = {'Time': [], 'Value': [], 'Round': None}
        self.Param.AddDefPattern(Pattern)

    def DoParameter(self, aParam):
        self.Param.LoadPattern(aParam)
        self.SetProvider()


class TSensorTimeRangeCycle(TSensorTimeRange):
    def SetProvider(self):
        self.Provider = TProviderTimeRangeCycle(self.Param.Time, self.Param.Value)


class TSensorTimeRangeDay(TSensorTimeRange):
    def SetProvider(self):
        self.Provider = TProviderTimeRangeDay(self.Param.Time, self.Param.Value)


class TSensorTimeRangeMonth(TSensorTimeRange):
    def SetProvider(self):
        self.Provider = TProviderTimeRangeMonth(self.Param.Time, self.Param.Value)


class TSensorTimeRangeDayFadeWave(TSensorTimeRange):
    def __init__(self, aParent):
        super().__init__(aParent)

        Pattern = {'Invert': False}
        self.Param.AddDefPattern(Pattern)

    def SetProvider(self):
        self.Provider = TProviderTimeRangeDayFadeWave(self.Param.Time, self.Param.Value, self.Param.Invert)


class TSensorTimeRangeDayFadeLine(TSensorTimeRange):
    def SetProvider(self):
        self.Provider = TProviderTimeRangeDayFadeLine(self.Param.Time, self.Param.Value)



"""
has no ReadTry() ?
class TSensorTimeRangeCycleDirect{TSensor}:
    def __init__(self, aParent):
        super().__init__(aParent)

        Pattern = {'Ranges': []}
        self.Param.AddDefPattern(Pattern)

    def DoParameter(self, aParam):
        self.Param.LoadPattern(aParam)
        self.Obj = TTimeRangeCycle()
        self.Obj.SetRanges(self.Param.Ranges)

    def _Get(self):
        return self.Obj.Get()
"""
