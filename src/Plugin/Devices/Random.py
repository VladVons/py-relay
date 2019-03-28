'''
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2017.11.10
License:     GNU, see LICENSE for more details
Description:
'''

import random
#
from Inc.Log          import Log
from Core.Device      import TSensor
from Plugin.Providers.Random import TProviderRandom

PkgConf = {
    "Version": "1.01",
    "Author": "Vladvons"
}

class TSensorRange(TSensor):
    def __init__(self, aParent):
        TSensor.__init__(self, aParent)

        Pattern = {'Begin': 0, 'End': 99}
        self.Param.AddDefPattern(Pattern)

    def DoParameter(self, aParam):
        self.Param.LoadPattern(aParam)


class TSensorRandom(TSensorRange):
    def DoParameter(self, aParam):
        self.Param.LoadPattern(aParam)
        self.Provider = TProviderRandom(self.Param.Begin, self.Param.End)
        self.Range.Set(None, [self.Param.Begin, self.Param.End])


class TSensorRandomEx(TSensorRange):
    # Custom handler example
    def DoOnValue(self, aValue):
        #TRelayThreadRead.DoOnValue(self, aValue)
        Log.Print(1, 'i', self.__class__.__name__, 'DoOnValue()', 'Alias: %s, Descr: %s, Value: %s' % (self.Alias, self.Descr, self.Value))

        #Root = self.GetRoot()
        ## print to LCD
        #Root.Screen.Print('My %s %s' % (self.Alias, self.Value))
        ## write to SQLite
        #Root.DbDict.Add('My' + self.Alias, self.Value)

    # Custom handler example
    #def DoPost(self, aValue):
    #    print('my DoOnPost', self.Alias, aValue)


class TSensorRandomNone(TSensorRange):
    def __init__(self, aParent):
        TSensor.__init__(self, aParent)

        Pattern = {'None': 5}
        self.Param.AddDefPattern(Pattern)

    def _Get(self):
        Result = random.randint(self.Param.Begin, self.Param.End)
        Div    = Result % 10
        if (Div < self.Param.None):
            Result = None
        return Result


class TSensorCycleInc(TSensorRange):
    def DoParameter(self, aParam):
        self.Param.LoadPattern(aParam)
        self.Count = self.Param.Begin

    def _Get(self):
        self.Count += 1
        if (self.Count > self.Param.End):
            self.Count = self.Param.Begin
        return self.Count

class TSensorCycleDec(TSensorRange):
    def DoParameter(self, aParam):
        self.Param.LoadPattern(aParam)
        self.Count = self.Param.End

    def _Get(self):
        self.Count -= 1
        if (self.Count < self.Param.Begin):
            self.Count = self.Param.End
        return self.Count
