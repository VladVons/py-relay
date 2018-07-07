'''
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2018.04.13
License:     GNU, see LICENSE for more details
Description:
'''

import datetime
#
from Inc.Util     import Time
from Inc.Param    import TDictParam
from Core.Device  import TSensor


class TSensorUptime(TSensor):
    def __init__(self, aParent):
        TSensor.__init__(self, aParent)

        # 'S' - Second, 'M' - Minute, 'H' - Hour: 'd' - day, 'w' - week, 'm' - month 'y' - year
        Pattern = {'Unit': 'H'}
        self.Param.AddDefPattern(Pattern)
        self.Ratio = 1

    def DoParameter(self, aParam):
        self.Param.LoadPattern(aParam)
        self.Ratio = Time.CharToSec(self.Param.Unit, 1)


class TSensorUptimeSys(TSensorUptime):
    def __init__(self, aParent):
        TSensorUptime.__init__(self, aParent)

    def _Get(self):
        Result = Time.Uptime() / float(self.Ratio)
        return self.Round(Result)


class TSensorUptimeApp(TSensorUptime):
    def __init__(self, aParent):
        TSensorUptime.__init__(self, aParent)

    def _Get(self):
        Result = self.GetUptimeReal() / float(self.Ratio)
        return self.Round(Result)
