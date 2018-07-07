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


class TSensorGroupDiff(TSensor):
    def __init__(self, aParent):
        TSensor.__init__(self, aParent)

        Pattern = {'Diff': 1.03}
        self.Param.AddDefPattern(Pattern)

    def DoParameter(self, aParam):
        self.Param.LoadPattern(aParam)

    def _Get(self):
        ValueAvrg = 0
        ValueSum  = 0

        Items = self.Exec.GetKey('Checks')
        for i in range(len(Items)):
            Alias = Items[i].get('Alias')[0]
            Class = self.Manager.GetClass(Alias)

            ValueSum += Class.Value
            ValueAvrg = self.Round(ValueSum / (i + 1))
            if (Class.Value == 0):
                Log.Print(1, 'w', self.__class__.__name__, '_Get()', 'Zero value. Alias %s in %s' % (self.Alias, Class.Alias))
            else:
                if (self.Param.Diff != -1):    
                    Diff = round(ValueAvrg / Class.Value, 2)
                    if (Diff > self.Param.Diff):
                        Log.Print(1, 'w', self.__class__.__name__, '_Get()', 'Too much sensor difference %s. Alias %s in %s' % (Diff, self.Alias, Class.Alias))
        return ValueAvrg
