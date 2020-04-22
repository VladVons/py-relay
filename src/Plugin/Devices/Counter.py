"""
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2019.04.19
License:     GNU, see LICENSE for more details
Description:
"""

#
from Inc.Log          import Log
from Core.Device      import TSensor

PkgConf = {
    "Version": "1.01",
    "Author": "Vladvons"
}


class TSensorCounter(TSensor):
    def __init__(self, aParent):
        super().__init__(aParent)

        Pattern = {'Begin': 0, 'End': 999999, 'Cycle': False}
        self.Param.AddDefPattern(Pattern)

    def DoParameter(self, aParam):
        self.Param.LoadPattern(aParam)


class TSensorCounterInc(TSensorCounter):
    def DoParameter(self, aParam):
        self.Param.LoadPattern(aParam)
        self.Count = self.Param.Begin

    def _Get(self):
        self.Count += 1
        if (self.Param.Cycle and self.Count > self.Param.End):
            self.Count = self.Param.Begin
        return self.Count


class TSensorCounterDec(TSensorCounter):
    def DoParameter(self, aParam):
        self.Param.LoadPattern(aParam)
        self.Count = self.Param.End

    def _Get(self):
        self.Count -= 1
        if (self.Param.Cycle and self.Count < self.Param.Begin):
            self.Count = self.Param.End
        return self.Count
