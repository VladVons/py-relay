"""
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2018.04.13
License:     GNU, see LICENSE for more details
Description:
"""

import datetime
#
from Inc.Util     import UTime
from Inc.Param    import TDictParam
from Core.Device  import TSensor


PkgConf = {
    "Version": "1.01",
    "Author": "Vladvons"
}

class TSensorUptime(TSensor):
    def __init__(self, aParent):
        super().__init__(aParent)

        # 'S' - Second, 'M' - Minute, 'H' - Hour: 'd' - day, 'w' - week, 'm' - month 'y' - year
        Pattern = {'Unit': 'H'}
        self.Param.AddDefPattern(Pattern)
        self.Ratio = 1

    def DoParameter(self, aParam):
        self.Param.LoadPattern(aParam)
        self.Ratio = UTime.CharToSec(self.Param.Unit, 1)


class TSensorUptimeSys(TSensorUptime):
    def __init__(self, aParent):
        super().__init__(aParent)

    def _Get(self):
        Result = UTime.Uptime() / float(self.Ratio)
        return self.Round(Result)


class TSensorUptimeApp(TSensorUptime):
    def __init__(self, aParent):
        super().__init__(aParent)

    def _Get(self):
        Result = self.GetUptimeReal() / float(self.Ratio)
        return self.Round(Result)
