'''.
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2018.03.20
License:     GNU, see LICENSE for more details
Description:
'''

import time
import datetime
#
from Inc.Log  import Log
from Inc.Util import Time
from Core.ExecParse import TExecParse


class TExecApi(TExecParse):
    def __init__(self, aParent):
        TExecParse.__init__(self, aParent)

    def Break(self, aLabel = 'EXIT'):
        self.BreakLabel = aLabel

    def Sleep(self, aValue):
        time.sleep(aValue)

    def Class(self, aAlias):
        Class = self.Parent.Manager.SecClass.GetClass(aAlias[1:])
        #print('---', aAlias, Class.Parent.Value)
        if (not Class):
            Msg = Log.Print(1, 'x', self.__class__.__name__, 'Alias()', 'Alias not found %s' % aAlias)
            raise Exception(Msg)
        return Class

    def Api(self, aAlias):
        return self.Class(aAlias).Exec

    @property
    def Error(self):
        return self.Parent.MaxErr < 0

    @property
    def Value(self):
        return self.GetValue()

    def GetValue(self):
        return self.Parent.Value

    def SetValue(self, aAlias, aValue = None):
        if (aValue is None):
            aValue = self.GetValue()
        self.Post(aAlias, aValue)

    @property
    def If(self):
        return self.CurResult.If

    @property
    def CountIf(self):
        return self.CurResult.CountIf

    def SetIf(self, aAlias, aInvert = False):
        self.Post(aAlias, self.If ^ aInvert)

    def Post(self, aAlias, aValue = 0):
        # Not a good idea pass a value via class property ???
        if (self.Caller):
            Caller = self.Caller
        else:
            Caller = self.Parent

        Class = self.Class(aAlias)
        return Class.Post(Caller, aValue)

    def Thermostat(self, aBase, aDif = 1, aValue = None):
        if (aValue is None):
            aValue = self.GetValue()

        if (aDif > 0):
            Result = (aValue < aBase) or (self.Parent.Direction > 0 and aValue < aBase + aDif)
        else:
            Result = (aValue > aBase) or (self.Parent.Direction < 0 and aValue > aBase + aDif)
        return Result

    def InValue(self, aBegin, aEnd, aValue = None):
        if (aValue is None):
            aValue = self.GetValue()
        return Time.CheckRange(aValue, aBegin, aEnd)

    def InUptime(self, aBegin = '0S', aEnd = '10y'):
        Sec1 = Time.StrToSec(aBegin)
        Sec2 = Time.StrToSec(aEnd)
        Now  = self.Parent.GetUptime()
        return Time.CheckRange(Now, Sec1, Sec2)

    def InHour(self, aBegin = '00:00:00', aEnd = '23:59:59'):
        Sec1 = Time.TimeToSec(aBegin)
        Sec2 = Time.TimeToSec(aEnd)
        Now  = Time.TimeToSec(datetime.datetime.now().strftime('%H:%M:%S'))
        return Time.CheckRange(Now, Sec1, Sec2)

    @Time.RangeDecorator
    def InValues(self, aRange):
        return self.InValue(aRange[0], aRange[1])

    @Time.RangeDecorator
    def InUptimes(self, aRange):
        return self.InUptime(aRange[0], aRange[1])

    @Time.RangeDecorator
    def InHours(self, aRange):
        return self.InHour(aRange[0], aRange[1])

    def SetPerCent(self, aAlias, aValue):
        Value = self.Parent.Range.PerCentSafe(None, aValue)
        self.Post(aAlias, Value)

    def SetRatio(self, aAlias):
        Class = self.Class(aAlias)
        Value = self.Parent.Range.Ratio(None, self.Parent.Value, Class.Range.Get(None))
        self.Post(aAlias, Value)

    def SetRatioEx(self, aAlias, aMin, aMax):
        Class = self.Class(aAlias)
        Value = self.Parent.Range.RatioEx(None, self.Parent.Value, Class.Range.Get(None), [aMin, aMax])
        self.Post(aAlias, Value)

    def File(self, aName):
        Data = self.Parent.Manager.LoadConf.File(aName)
        Result = self.Scrypt(Data)
        return Result
