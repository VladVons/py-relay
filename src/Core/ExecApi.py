"""
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2018.03.20
License:     GNU, see LICENSE for more details
Description:
"""


from Inc.Log  import Log
from Inc.Util import UObj, UStr


class TExecApi():
    def __init__(self, aParent):
        self.Device  = aParent
        self.Exec    = aParent.Exec

    def xApi(self, aAlias: str):
        return self.xAClass(aAlias).Exec.apix

    def xAClass(self, aAlias: str):
        Class = self.Device.Manager.SecClass.GetClass(aAlias[1:])
        #print('---', aAlias, Class.Parent.Value)
        if (not Class):
            Msg = Log.PrintDbg(1, 'x', 'Alias not found %s' % aAlias)
            raise Exception(Msg)
        return Class

    def xAPost(self, aAlias: str, aValue = 0):
        # Not a good idea pass a value via class property ???
        if (self.Exec.Caller):
            Caller = self.Exec.Caller
        else:
            Caller = self.Device

        Class = self.xAClass(aAlias)
        return Class.Post(Caller, aValue)

    def xBreak(self, aLabel: str = 'EXIT'):
        self.Exec.BreakLabel = aLabel

    def xFile(self, aName: str):
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
    def xData(self):
        return self.Device.Data

    @property
    def xLastUpdate(self):
        return self.Device.LastUpdate

    @property
    def xError(self):
        return self.Device.MaxErr < 0

    def xMacros(self, aName: str):
        Value = self.Device.Manager.LoadConf.DictReplace.Data.get(aName)
        return UStr.ConvertTo(Value)

    @property
    def xValue(self):
        return self.Device.Value

    def xSetValue(self, aValue):
        self.Device.SetValue(aValue)

    def xSetParam(self, aKey: str, aValue):
        self.Device.Param.SetAttr(aKey, aValue)

    def xGetParam(self, aKey: str):
        self.Device.Param.GetAttr(aKey)

    @property
    def xCaller(self):
        return self.Device.Caller

    def xIsCallerAlias(self, aNames: list) -> bool:
        Name = self.xCaller.Alias
        return Name in aNames

    def xIsCallerClass(self, aNames: list) -> bool:
        Name = UObj.GetName(self.xCaller)
        return Name in aNames

    @property
    def xIf(self) -> bool:
        return self.Exec.CurResult.If

    @property
    def xCntIf(self) -> int:
        return self.Exec.CurResult.CountIf

    @property
    def xCntPost(self) -> int:
        return self.Device.PostCnt

    #---

    def xASetPerCent(self, aAlias: str, aValue: int):
        Value = self.Device.Range.PerCentSafe(None, aValue)
        self.xAPost(aAlias, Value)

    def xASetRatio(self, aAlias: str):
        Class = self.xAClass(aAlias)
        Value = self.Device.Range.Ratio(None, self.xValue, Class.Range.Get(None))
        self.xAPost(aAlias, Value)

    def xASetRatioEx(self, aAlias: str, aMin: int, aMax: int):
        Class = self.xAClass(aAlias)
        Value = self.Device.Range.RatioEx(None, self.xValue, Class.Range.Get(None), [aMin, aMax])
        self.xAPost(aAlias, Value)
