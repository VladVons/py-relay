"""
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2018.03.20
License:     GNU, see LICENSE for more details
Description:
"""


from Inc.Log  import Log


class TExecApi():
    def __init__(self, aParent):
        self.Device  = aParent
        self.Exec    = aParent.Exec

    def xApi(self, aAlias):
        return self.xAClass(aAlias).Exec.apix

    def xAClass(self, aAlias):
        Class = self.Device.Manager.SecClass.GetClass(aAlias[1:])
        #print('---', aAlias, Class.Parent.Value)
        if (not Class):
            Msg = Log.PrintDbg(1, 'x', 'Alias not found %s' % aAlias)
            raise Exception(Msg)
        return Class

    def xAPost(self, aAlias, aValue = 0):
        # Not a good idea pass a value via class property ???
        if (self.Exec.Caller):
            Caller = self.Exec.Caller
        else:
            Caller = self.Device

        Class = self.xAClass(aAlias)
        return Class.Post(Caller, aValue)

    def xBreak(self, aLabel = 'EXIT'):
        self.Exec.BreakLabel = aLabel

    def xFile(self, aName):
        Data   = self.Device.Manager.LoadConf.File(aName)
        Result = self.Exec.Scrypt(Data)
        return Result

    @property
    def xUptime(self):
        return self.Device.GetUptime()

    @property
    def xDirection(self):
        return self.Device.Direction

    @property
    def xError(self):
        return self.Device.MaxErr < 0

    @property
    def xValue(self):
        return self.Device.Value

    def xSetValue(self, aValue):
        self.Device.SetValue(aValue)

    def xSetParam(self, aKey, aValue):
        self.Device.Param.SetAttr(aKey, aValue)

    @property
    def xIf(self):
        return self.Exec.CurResult.If

    @property
    def xCntIf(self):
        return self.Exec.CurResult.CountIf

    @property
    def xCntPost(self):
        return self.Device.PostCnt

    #---

    def xASetPerCent(self, aAlias, aValue):
        Value = self.Device.Range.PerCentSafe(None, aValue)
        self.xAPost(aAlias, Value)

    def xASetRatio(self, aAlias):
        Class = self.xAClass(aAlias)
        Value = self.Device.Range.Ratio(None, self.xValue, Class.Range.Get(None))
        self.xAPost(aAlias, Value)

    def xASetRatioEx(self, aAlias, aMin, aMax):
        Class = self.xAClass(aAlias)
        Value = self.Device.Range.RatioEx(None, self.xValue, Class.Range.Get(None), [aMin, aMax])
        self.xAPost(aAlias, Value)
