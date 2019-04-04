'''.
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2018.03.20
License:     GNU, see LICENSE for more details
Description:
'''

import re
#
from Inc.Log  import Log


class TExecApi():
    def __init__(self, aParent):
        self.Device  = aParent
        self.Exec    = aParent.Exec

    def Api(self, aAlias):
        return self.AClass(aAlias).Exec

    def AClass(self, aAlias):
        Class = self.Device.Manager.SecClass.GetClass(aAlias[1:])
        #print('---', aAlias, Class.Parent.Value)
        if (not Class):
            Msg = Log.PrintDbg(1, 'x', 'Alias not found %s' % aAlias)
            raise Exception(Msg)
        return Class

    def APost(self, aAlias, aValue = 0):
        # Not a good idea pass a value via class property ???
        if (self.Exec.Caller):
            Caller = self.Exec.Caller
        else:
            Caller = self.Device

        Class = self.AClass(aAlias)
        return Class.Post(Caller, aValue)

    def Break(self, aLabel = 'EXIT'):
        self.Exec.BreakLabel = aLabel

    def File(self, aName):
        Data   = self.Device.Manager.LoadConf.File(aName)
        Result = self.Scrypt(Data)
        return Result

    @property
    def Uptime(self):
        return self.Device.GetUptime()

    @property
    def Direction(self):
        return self.Device.Direction

    @property
    def Error(self):
        return self.Device.MaxErr < 0

    @property
    def Value(self):
        return self.Device.Value

    def SetValue(self, aValue):
        print('---1', aValue)
        self.Device.SetValue(aValue)

    def SetParam(self, aKey, aValue):
        self.Device.Param.SetAttr(aKey, aValue)

    @property
    def If(self):
        return self.Exec.CurResult.If

    @property
    def CountIf(self):
        return self.Exec.CurResult.CountIf

    #---

    def ASetPerCent(self, aAlias, aValue):
        Value = self.Device.Range.PerCentSafe(None, aValue)
        self.APost(aAlias, Value)

    def ASetRatio(self, aAlias):
        Class = self.AClass(aAlias)
        Value = self.Device.Range.Ratio(None, self.Value, Class.Range.Get(None))
        self.APost(aAlias, Value)

    def ASetRatioEx(self, aAlias, aMin, aMax):
        Class = self.AClass(aAlias)
        Value = self.Device.Range.RatioEx(None, self.Value, Class.Range.Get(None), [aMin, aMax])
        self.APost(aAlias, Value)
