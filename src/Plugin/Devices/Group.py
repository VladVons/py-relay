'''
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2017.11.10
License:     GNU, see LICENSE for more details
Description:
'''


from Inc.Log     import Log
from Core.Device import TRelay, TSensor, TDevice


class TDeviceGroup(TDevice):
    def DoPostBegin(self, aCaller, aValue, aData):
        #Log.Print(3, 'i', self.__class__.__name__, 'DoPost()', 'Alias %s, CAlias %s, Value %s' % (self.Alias, aCaller.Alias, aValue))

        self.Value = aValue

        # make transparent
        self.Exec.Caller = aCaller

        return True


class TSensorGroup(TSensor):
    def GetItems(self):
        return self.Exec.GetKey('Checks')

    def GetSum(self):
        Result = 0
        for Item in self.GetItems():
            Alias = Item.get('Alias')[0]
            Class = self.Manager.GetClass(Alias)
            Result += Class.Value
        return Result

    def GetAvg(self):
        Items = self.GetItems()
        return self.GetSum() / len(Items)

class TSensorGroupAvg(TSensorGroup):
    def __init__(self, aParent):
        TSensorGroup.__init__(self, aParent)

        Pattern = {'Diff': 1.03}
        self.Param.AddDefPattern(Pattern)

    def DoParameter(self, aParam):
        self.Param.LoadPattern(aParam)

    def _Get(self):
        Result = self.GetAvg()

        # check anomaly
        for Item in self.GetItems():
            Alias = Item.get('Alias')[0]
            Class = self.Manager.GetClass(Alias)
            if (self.Param.Diff != -1):
                Diff = round(Result / Class.Value, 2)
                if (Diff > self.Param.Diff):
                    Log.Print(1, 'w', self.__class__.__name__, '_Get()', 'Too much sensor difference %s. Alias %s in %s' % (Diff, self.Alias, Class.Alias))
        return Result


class TSensorGroupSum(TSensorGroup):
    def DoParameter(self, aParam):
        self.Param.LoadPattern(aParam)

    def _Get(self):
        return self.GetSum()
