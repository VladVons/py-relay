'''
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2017.11.10
License:     GNU, see LICENSE for more details
Description:
'''

from Inc.Log          import Log
from Core.Device      import TSensor
from Plugin.Providers.Random import TProviderRandom


class TSensorRandom(TSensor):
    def __init__(self, aParent):
        TSensor.__init__(self, aParent)

        Pattern = {'Begin': 0, 'End': 99}
        self.Param.AddDefPattern(Pattern)

    def DoParameter(self, aParam):
        self.Param.LoadPattern(aParam)
        self.Provider = TProviderRandom(self.Param.Begin, self.Param.End)

        self.Range.Set(None, [self.Param.Begin, self.Param.End])

class TSensorRandomEx(TSensor):
    def __init__(self, aParent):
        TSensor.__init__(self, aParent)

        Pattern = {'Begin':0, 'End':99}
        self.Param.AddDefPattern(Pattern)

    def DoParameter(self, aParam):
        self.ParamLoadPattern(aParam)
        self.Provider = TProviderRandom(self.Param.Begin, self.Param.End)
        self.CreateThread()

    # Custom handler example
    def DoOnValue(self, aValue):
        #TRelayThredRead.DoOnValue(self, aValue)
        Log.Print(1, 'i', self.__class__.__name__, 'my DoOnValue()', 'Alias: %s, Descr: %s, Value: %s' % (self.Alias, self.Descr, self.Value))

        #Root = self.GetRoot()
        ## print to LCD
        #Root.Screen.Print('My %s %s' % (self.Alias, self.Value))
        ## write to SQLite
        #Root.DbDict.Add('My' + self.Alias, self.Value)

    # Custom handler example
    #def DoPost(self, aValue):
    #    print('my DoOnPost', self.Alias, aValue)



