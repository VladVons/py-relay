"""
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2017.11.10
License:     GNU, see LICENSE for more details
Description:
"""


from Inc.Log     import Log
from Core.Device import TRelay, TSensor, TDevice


PkgConf = {
    "Version": "1.01",
    "Author": "Vladvons"
}

class TDeviceGroup(TDevice):
    def DoPostBegin(self, aCaller, aValue, aData):
        #Log.PrintDbg(3, 'i', 'Alias %s, CAlias %s, Value %s' % (self.Alias, aCaller.Alias, aValue))

        self.Value = aValue

        # make transparent
        self.Exec.Caller = aCaller

        return True


class TSensorGroup(TSensor):
    def DoParameter(self, aParam):
        self.Param.LoadPattern(aParam)

    def DoStartExit(self):
        for Item in self.GetItems():
            Class = self.GetItemClass(Item)
            Class.Param.OnValue = False

    def GetItems(self):
        return self.Exec.GetKey('Checks')

    def GetItemClass(self, aItem):
        Alias = aItem.get('Alias')[0]
        return self.Manager.SecClass.GetClass(Alias)

    def GetSum(self):
        Result = 0
        for Item in self.GetItems():
            Result += self.GetItemClass(Item).Value
        return Result

    def GetAvg(self):
        Items = self.GetItems()
        return self.GetSum() / len(Items)


class TSensorGroupAvg(TSensorGroup):
    def __init__(self, aParent):
        TSensorGroup.__init__(self, aParent)

        Pattern = {'Diff': 1.03}
        self.Param.AddDefPattern(Pattern)

    def _Get(self):
        Result = self.GetAvg()

        if (self.Param.Diff != -1):
            for Item in self.GetItems():
                Alias = Item.get('Alias')[0]
                Class = self.Manager.SecClass.GetClass(Alias)
                Diff = round(Result / Class.Value, 2)
                if (Diff > self.Param.Diff):
                    Log.PrintDbg(1, 'w', 'Too much diff %s. Alias %s in %s' % (Diff, self.Alias, Class.Alias))
                    self.Action('OnError', Class.Value)
        return Result


class TSensorGroupSum(TSensorGroup):
    def _Get(self):
        return self.GetSum()


class TSensorGroupAnd(TSensorGroup):
    def _Get(self):
        Result = True
        for Item in self.GetItems():
            Value = self.GetItemClass(Item).Value
            Result = Result and bool(Value)
        return Result


class TSensorGroupOr(TSensorGroup):
    def _Get(self):
        Result = False
        for Item in self.GetItems():
            Value = self.GetItemClass(Item).Value
            Result = Result or bool(Value)
        return Result
