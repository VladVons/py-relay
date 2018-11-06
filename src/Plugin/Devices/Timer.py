'''
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2017.10.15
License:     GNU, see LICENSE for more details
Description:
'''

from Inc.Param    import TDictParam
from Core.Device  import TSensor
from Plugin.Providers.Timer import TProviderTimeRangeCycle, TProviderTimeRangeDay, TTimeRangeCycle


class TSensorTimeRange(TSensor):
    def __init__(self, aParent):
        TSensor.__init__(self, aParent)

        Pattern = {'Ranges': []}
        self.Param.AddDefPattern(Pattern)

    def DoParameter(self, aParam):
        self.Param.LoadPattern(aParam)
        self.SetProvider()
        self.Avg.SetSize(1)


class TSensorTimeRangeCycle(TSensorTimeRange):
    def SetProvider(self):
        self.Provider = TProviderTimeRangeCycle(self.Param.Ranges)


class TSensorTimeRangeDay(TSensorTimeRange):
    def SetProvider(self):
        self.Provider = TProviderTimeRangeDay(self.Param.Ranges)

'''
has no ReadTry() ?
class TSensorTimeRangeCycleDirect(TSensor):
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
'''
