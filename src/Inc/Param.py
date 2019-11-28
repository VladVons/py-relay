"""
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2017.10.15
License:     GNU, see LICENSE for more details
Description:
"""

"""
Another implementation^
srom string import Template

greeting = 'Salutations'
html = 'qqq $greeting www'

html1 = Template(html).substitute(**locals())
print(html1)
"""


import re
import os
#
from Inc.Log        import Log
from Inc.Util       import UStr, UObj, UNum, UArr
from Inc.ConfEditor import TEditorConf

#__all__ = ['TDictParam', 'TDictReplace']


class TRange():
    def __init__(self):
        self.Range  = {}
        self.Enable = True
        self.SetMirror(None, 9999999)

    def _Check(self, aRange: list):
        if (type(aRange).__name__ != 'list'): 
            Msg = Log.PrintDbg(1, 'e', 'Value %s must be a list' % (aRange))
            raise Exception(Msg)

        if (aRange[0] > aRange[1]):
            Msg = Log.PrintDbg(1, 'e', 'Min `%s` is grater than Max `%s`' % (aRange[0], aRange[1]))
            raise Exception(Msg)

    def Get(self, aKey: str):
        return self.Range.get(aKey, [self.Min, self.Max])

    def Set(self, aKey: str, aRange: list):
        self._Check(aRange)

        if (aKey):
            self.Range[aKey] = aRange
        else:
            self.Min = aRange[0]
            self.Max = aRange[1]

    def SetMirror(self, aKey: str, aValue: int):
        self.Set(aKey, [-aValue, aValue])

    def Check(self, aKey: str, aValue: int):
        if (self.Enable):
            Range = self.Get(aKey)
            Result = (aValue >= Range[0]) and (aValue <= Range[1])
        else:
            Result = True
        return Result

    def _Ratio(self, aKey, aValue: int, aRangeSrc: list, aRangeDst: list) -> int:
        self._Check(aRangeSrc)
        self._Check(aRangeDst)

        if (aValue < aRangeSrc[0]) or (aValue > aRangeSrc[1]):
            Msg = Log.PrintDbg(1, 'e', 'Value %s is out of range %s' % (aValue, aRangeSrc))
            raise Exception(Msg)

        Ratio  = float(aRangeDst[1] - aRangeDst[0]) / float(aRangeSrc[1] - aRangeSrc[0])
        Result = int(aRangeDst[0] + ((aValue - aRangeSrc[0]) * Ratio))
        return Result

    def Ratio(self, aKey: str, aValue: int, aRangeDst: list) -> int:
        return self._Ratio(aKey, aValue, self.Get(aKey), aRangeDst)

    def RatioEx(self, aKey: str, aValue: int, aRangeDst: list, aRangeSrc: list) -> int:
        RangeSrc = self.Get(aKey)
        aRangeSrc[0] = UNum.Clamp(RangeSrc[0], RangeSrc[1], aRangeSrc[0])
        aRangeSrc[1] = UNum.Clamp(RangeSrc[0], RangeSrc[1], aRangeSrc[1])
        aValue = UNum.Clamp(aRangeSrc[0], aRangeSrc[1], aValue)
        return self._Ratio(aKey, aValue, aRangeSrc, aRangeDst)

    def PerCent(self, aKey: str, aPC: int) -> float:
        Range = self.Get(aKey)
        Value = Range[1] - Range[0]
        return Range[0] + (Value * aPC / 100)

    def PerCentSafe(self, aKey: str, aPC: int) -> float:
        Range = [0, 100]
        if (aPC < Range[0]) or (aPC > Range[1]):
            Msg = Log.PrintDbg(1, 'e', 'Value %s is out of range %s' % (aPC, Range))
            raise Exception(Msg)
        return self.PerCent(aKey, aPC)


class TDictCall(dict):
    def __setitem__(self, aKey: str, aValue):
        if (callable(aValue)):
            dict.__setitem__(self, aKey, aValue)
        else:
            Msg = Log.PrintDbg(1, 'e', 'Function %s is not callable' % (aValue))
            raise ValueError(Msg)

    def __call__(self, aKey: str, aParam, aData: dict = {}):
        Func = self.get(aKey)
        if (Func):
            return Func(aKey, aParam, aData)
        else:
            Msg = Log.PrintDbg(1, 'e', 'Key %s not found' % (aKey))
            raise NotImplementedError(Msg)


class TDictNamed():
    def __init__(self, aData = None):
        Type = type(aData).__name__
        if (Type == 'dict'):
            self.SetDict(aData)
        elif (Type == 'list'):
            self.SetList(aData)
        elif (Type == 'str'):
            self.SetStr(aData)

    def SetDict(self, aData: dict):
        for Key in aData:
            Value = aData.get(Key)
            setattr(self, Key.strip(), Value)

    def SetList(self, aData: list, aValue = None):
        for Item in aData:
            setattr(self, Item.strip(), aValue)

    def SetStr(self, aData: str, aValue = None):
        Items = aData.split(',')
        self.SetList(Items, aValue)

    def Clear(self):
        Types = {'str': '', 'int':  0, 'float': 0.0, 'bool': False, 'dict': {}, 'list': []}
        Items = dict(vars(self))
        for Item in Items:
            Type = type(getattr(self, Item)).__name__
            Value = Types.get(Type)
            setattr(self, Item, Value)

    def GetVars(self) -> dict:
        return dict(vars(self))

    def GetDict(self) -> dict:
        Result = {}
        Items  = self.GetVars()
        for Item in Items:
            Result[Item] = getattr(self, Item)
        return Result


class TDictParam(TDictNamed):
    Required = 'Required'

    def __init__(self, aDict: dict= {}):
        self.Loaded = False
        self.OnLoad = None
        self.DefPattern = {}

        if (aDict):
            self.Load(aDict)

    def GetPattern(self):
        return self.DefPattern

    def HasAttr(self, aName: str) -> bool:
        Vars = self.GetAttrs()
        return (aName in Vars)

    def GetAttrs(self) -> dict:
        Result = self.GetVars()
        for Item in ['Loaded', 'OnLoad', 'DefPattern']:
            Result.pop(Item)
        return Result

    def GetAttr(self, aKey: str) -> dict:
        return self.GetAttrs().get(aKey)

    def SetAttr(self, aKey: str, aValue):
        if (self.OnLoad):
            aValue = self.OnLoad(aKey, aValue)
        Log.PrintDbg(3, 'i', 'Key: %s, Value: %s' % (aKey, aValue))
        Result = self.GetAttr(aKey)
        setattr(self, aKey, aValue)
        return Result

    def Load(self, aParam: dict, aAll: bool = True):
        for Key in aParam:
            Value = aParam.get(Key)
            if (aAll or Value != None):
                self.SetAttr(Key, Value)
        self.Loaded = True

    def LoadPattern(self, aParam: dict, aPattern: dict = {}):
        #Pattern = {**self.Pattern, **aPattern} # need 3.0
        #Pattern = dict(self.Pattern.items() + aPattern.items()) #only 2.7
        Pattern  = {}
        if (self.DefPattern):
            Pattern.update(self.DefPattern)
        if (aPattern):
            Pattern.update(aPattern)
        UArr.CheckDif(aParam, Pattern)

        for Key in Pattern:
            Default = Pattern.get(Key)
            Param   = aParam.get(Key, Default)
            if ( (Default == TDictParam.Required) and (Param == TDictParam.Required) ):
                Msg = Log.PrintDbg(1, 'e', 'Key %s is required in %s' % (Key, UObj.GetTreeAsStr(aParam)))
                raise Exception(Msg)

            self.SetAttr(Key, Param)
            self.Loaded = True

    def LoadFile(self, aName: str, aPattern: dict = {}):
        if (not os.path.isfile(aName)):
            Msg = Log.PrintDbg(1, 'e', 'File not found %s' % aName)
            raise Exception(Msg)

        EditorConf = TEditorConf()
        EditorConf.LoadFromFile(aName)
        Param = EditorConf.Section.KeyList(False)
        self.LoadPattern(Param, aPattern)

    def AddDefPattern(self, aPattern):
        self.DefPattern.update(aPattern)
        self.Load(aPattern)


class TDictReplace():
    def __init__(self, aPrefix: str = "$<", aSufix: str = ">"):
        self.Data    = {}
        self.Skip    = []
        self.OnParse = None
        self.SetDelim(aPrefix, aSufix)
        self.Clear()

    def SetDelim(self, aPrefix: str, aSufix: str):
        self.Prefix   = aPrefix
        self.Sufix    = aSufix
        self.Pattern  = "\\" + self.Prefix + "([^" + "\\" + self.Prefix + self.Sufix + "]*)" + self.Sufix
        #self.Pattern  = self.Prefix + "(.*?)" + self.Sufix

    def GetUnknown(self):
        return self.Err

    def Clear(self):
        self.ClearUnknown()
        self.Data = {}

    def ClearUnknown(self):
        self.Err = []

    def HasPrefix(self, aData):
        return ( (UStr.IsStr(aData)) and (aData.find(self.Prefix) != -1) )

    def GetMatch(self, aData: str) -> list:
        Result = []
        if (self.HasPrefix(aData)):
            Result = re.findall(self.Pattern, aData)
        return Result

    def GetKey(self, aKey: str, aDef = ''):
        return self.Data.get(aKey, aDef)

    def AddKey(self, aKey: str, aValue):
        self.Data[aKey] = aValue

    def AddKeys(self, aDict: dict):
        self.Data.update(aDict)

    def Replace(self, aStr: str, aFind: str, aRepl: str) -> str:
        return aStr.replace(self.Prefix + aFind + self.Sufix, aRepl)

    # search macros $<xxx> in aStr and repalce it with value returned by aFunc
    def _ParseRecurs(self, aData: str) -> str:
        Items = self.GetMatch(aData)
        if (Items):
            for Item in Items:
                Item = Item.strip()
                if (not Item in self.Skip):
                    if (self.OnParse):
                        Repl = self.OnParse(self, Item)
                    else:
                        Repl = self.GetKey(Item)

                    if (Repl == ''):
                        self.Err.append(Item)
                    else:
                        Type = type(Repl).__name__
                        if (Type in ['instancemethod', 'function']):
                            Repl = Repl(self, Item)
                        aData = self.Replace(aData, Item, str(Repl))

            if (len(self.Err) == 0):
                aData = self.Parse(aData)
        return aData

    def Parse(self, aData: str) -> str:
        return self._ParseRecurs(aData)

    def ParseTo(self, aData):
        Value = self.Parse(aData)
        return UStr.ConvertTo(Value)

    def ParseVar(self, aData):
        if (isinstance(aData, dict)):
            for Key in aData:
                Value = self.ParseVar(aData[Key])
                aData[Key] = Value
        elif (isinstance(aData, list)):
            for i in range(len(aData)):
                 aData[i] = self.ParseVar(aData[i])
        else:
            aData = self.ParseTo(aData)
        return aData


class TDictBlock():
    def __init__(self, aPrefix: str = "$<", aSufix: str = ">"):
        self.Data = {}
        self.Prefix = aPrefix
        self.Sufix  = aSufix

    def Parse(self, aData: str):
        if (aData):
            Pattern = '\\' + self.Prefix + '(\w+\s[\w\./]+)' + self.Sufix
            Items1 = re.findall(Pattern, aData, re.S)
            for Item1 in Items1:
                BlockBeg = '\\' + self.Prefix + Item1 + self.Sufix
                BlockEnd = '\\' + self.Prefix + '/' + Item1 + self.Sufix
                Pattern = BlockBeg + '(.*?)' + BlockEnd
                Items2 = re.findall(Pattern, aData, re.S)
                if (Items2):
                    self.Data[Item1] = Items2[0]
                else:
                    self.Data[Item1] = ''

    def Get(self, aSection: str, aBlock: str):
        return self.Data.get(aSection + ' ' + aBlock)

    def GetKeys(self, aFilter = ''):
        return UArr.ListFilter(self.Data, aFilter)
