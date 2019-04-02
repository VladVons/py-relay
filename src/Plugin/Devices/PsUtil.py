'''
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2019.04.01
License:     GNU, see LICENSE for more details
Description:
'''


try:
    import psutil
except Exception as E:
    print(__file__, E, 'apt install python-psutil')
#
#from Inc.Param    import TDictParam
from Core.Device  import TSensor

PkgConf = {
    "Version": "1.01",
    "Author": "Vladvons"
}


class TSensorPsUtil_CPU_Usage(TSensor):
    def __init__(self, aParent):
        TSensor.__init__(self, aParent)

        Pattern = {'Round': 1}
        self.Param.AddDefPattern(Pattern)

    def _Get(self):
        Result = psutil.cpu_percent(interval = 0.3)
        return self.Round(Result)

