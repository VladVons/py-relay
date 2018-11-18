'''.
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2018.03.20
License:     GNU, see LICENSE for more details
Description:
'''

import re
import time
import datetime
#
from Inc.Log  import Log
from Inc.Util import Time, Obj
from Inc.Exec import TExec, TExecResult


class TExecParse(TExec):
    def __init__(self, aParent):
        TExec.__init__(self, aParent)
        self.Keys = {}
        self.Cond = ['If', 'Then', 'Else', 'Always']

    def GetKey(self, aKey):
        return self.Keys.get(aKey, {})

    def ExtractAlias(self, aData):
        Allow = self.Cond + ['Enable', 'Label']
        Diff = set(aData.keys()) - set(Allow)
        if (Diff):
            Msg = Log.Print(1, 'e', self.__class__.__name__, 'ExtractAlias()', 'Unknown key %s in %s' % (str(Diff), Obj.GetTreeAsStr(aData)))
            raise Exception(Msg)

        Result = []
        if (aData.get('Enable', True)):
            Prefix  = "'"
            Sufix   = "'"
            Pattern = Prefix + "(.*?)" + Sufix
            for Key in self.Cond:
                Data = aData.get(Key)
                if (Data):
                    Matches = re.findall(Pattern, Data)
                    if (Matches):
                        for Match in Matches:
                            if (Match.startswith('$')):
                                Result.append(Match[1:])
        return Result

    def Parse(self, aKey, aParam, aData):
        for Item in aParam:
            Aliases = self.ExtractAlias(Item)
            if (Aliases):
                Item['Alias'] = Aliases
                for Alias in Aliases:
                    Link = {'ClassRef': Alias}
                    self.Parent._LoadClass(Link, aData)

            if (not aKey in self.Keys):
                self.Keys[aKey] = []

            Item['Result'] = TExecResult()
            self.Keys[aKey].append(Item)

    def Conditions(self, aKey):
        Result = True
        Items = self.Keys.get(aKey)
        if (Items):
            self.BreakLabel = None
            for Item in Items:
                if (self.BreakLabel):
                    if (self.BreakLabel == 'EXIT'):
                        return Result
                    if (self.BreakLabel != Item.get('Label')):
                        continue

                if (self.ExecSection(Item)):
                    if (self.If is not None):
                        Result &= bool(self.If)

            if (self.BreakLabel):
                Msg = Log.Print(1, 'e', self.__class__.__name__, 'Conditions()', 'Unknown Label %s in %s' % (self.BreakLabel, self.Parent.Alias))
                raise Exception(Msg)
        return Result


class TExecApi(TExecParse):
    def __init__(self, aParent):
        TExecParse.__init__(self, aParent)

    def _InTimeRange(self, aValue, aBegin, aEnd):
        Sec1 = Time.StrToSec(aBegin)
        Sec2 = Time.StrToSec(aEnd)
        if (Sec1 > Sec2):
            Msg = Log.Print(1, 'e', self.__class__.__name__, 'InTimeRange()', 'Min %s is greater than Max %s' % (Sec1, Sec2))
            raise ValueError(Msg)
        return (Sec1 <= aValue) and (Sec2 >= aValue)

    def Break(self, aLabel = 'EXIT'):
        self.BreakLabel = aLabel

    def Sleep(self, aValue):
        time.sleep(aValue)

    def Class(self, aAlias):
        Class = self.Parent.Manager.GetClass(aAlias[1:])
        #print('---', aAlias, Class.Parent.Value)
        if (not Class):
            Msg = Log.Print(1, 'x', self.__class__.__name__, 'Alias()', 'Alias not found %s' % aAlias)
            raise Exception(Msg)
        return Class

    def Api(self, aAlias):
        return self.Class(aAlias).Exec

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

    def InValue(self, aBegin, aEnd, aValue = None):
        if (aValue is None):
            aValue = self.GetValue()
        return (aValue >= aBegin) and (aValue <= aEnd)

    def InUptime(self, aBegin = '0S', aEnd = '10y'):
        return self.InTimeRange(self.Parent.GetUptime(), aBegin, aEnd)

    def InHour(self, aBegin = '00:00:00', aEnd = '23:59:59'):
        Sec1 = Time.TimeToSec(aBegin)
        Sec2 = Time.TimeToSec(aEnd)
        if (Sec1 > Sec2):
            Msg = Log.Print(1, 'e', self.__class__.__name__, 'InHour()', '%s is greater than %s' % (Sec1, Sec2))
            raise ValueError(Msg)

        Now = Time.TimeToSec(datetime.datetime.now().strftime('%H:%M:%S'))
        return (Now >= Sec1) and (Now < Sec2)

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
