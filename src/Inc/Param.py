'''
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2017.10.15
License:     GNU, see LICENSE for more details
Description:
'''

'''
Another implementation^
srom string import Template

greeting = 'Salutations'
html = 'qqq $greeting www'

html1 = Template(html).substitute(**locals())
print(html1)

'''


import re
import os
#
from Inc.Log        import Log
from Inc.Util       import Str, Obj, Num
from Inc.ConfEditor import TEditorConf

#__all__ = ['TDictParam', 'TDictReplace']


class TRange():
    def __init__(self):
        self.Range  = {}
        self.Enable = True
        self.SetMirror(None, 9999999)

    def _Check(self, aRange):
        if (type(aRange).__name__ != 'list'): 
            Msg = Log.Print(1, 'e', self.__class__.__name__, '_Check()', 'Value %s must be a list' % (aRange))
            raise Exception(Msg)

        if (aRange[0] > aRange[1]):
            Msg = Log.Print(1, 'e', self.__class__.__name__, '_Check()', 'Min `%s` is grater than Max `%s`' % (aRange[0], aRange[1]))
            raise Exception(Msg)

    def Get(self, aKey):
        return self.Range.get(aKey, [self.Min, self.Max])

    def Set(self, aKey, aRange):
        self._Check(aRange)

        if (aKey):
            self.Range[aKey] = aRange
        else:
            self.Min = aRange[0]
            self.Max = aRange[1]

    def SetMirror(self, aKey, aValue):
        self.Set(aKey, [-aValue, aValue])

    def Check(self, aKey, aValue):
        if (self.Enable):
            Range = self.Get(aKey)
            Result = (aValue >= Range[0]) and (aValue <= Range[1])
        else:
            Result = True
        return Result

    def _Ratio(self, aKey, aValue, aRangeSrc, aRangeDst):
        self._Check(aRangeSrc)
        self._Check(aRangeDst)

        if (aValue < aRangeSrc[0]) or (aValue > aRangeSrc[1]):
            Msg = Log.Print(1, 'e', self.__class__.__name__, 'Ratio()', 'Value %s is out of range %s' % (aValue, aRangeSrc))
            raise Exception(Msg)

        Ratio  = float(aRangeDst[1] - aRangeDst[0]) / float(aRangeSrc[1] - aRangeSrc[0])
        Result = int(aRangeDst[0] + ((aValue - aRangeSrc[0]) * Ratio))
        return Result

    def Ratio(self, aKey, aValue, aRangeDst):
        return self._Ratio(aKey, aValue, self.Get(aKey), aRangeDst)

    def RatioEx(self, aKey, aValue, aRangeDst, aRangeSrc):
        RangeSrc = self.Get(aKey)
        aRangeSrc[0] = Num.Clamp(RangeSrc[0], RangeSrc[1], aRangeSrc[0])
        aRangeSrc[1] = Num.Clamp(RangeSrc[0], RangeSrc[1], aRangeSrc[1])
        aValue = Num.Clamp(aRangeSrc[0], aRangeSrc[1], aValue)
        return self._Ratio(aKey, aValue, aRangeSrc, aRangeDst)

    def PerCent(self, aKey, aPC):
        Range = self.Get(aKey)
        Value = Range[1] - Range[0]
        return Range[0] + (Value * aPC / 100)

    def PerCentSafe(self, aKey, aPC):
        Range = [0, 100]
        if (aPC < Range[0]) or (aPC > Range[1]):
            Msg = Log.Print(1, 'e', self.__class__.__name__, 'PerCent()', 'Value %s is out of range %s' % (aPC, Range))
            raise Exception(Msg)
        return self.PerCent(aKey, aPC)


class TDictCall(dict):
    def __setitem__(self, aKey, aValue):
        if (callable(aValue)):
            dict.__setitem__(self, aKey, aValue)
        else:
            Msg = Log.Print(1, 'e', self.__class__.__name__, '__setitem__()', 'Function %s is not callable' %  (aValue))
            raise ValueError(Msg)

    def __call__(self, aKey, aParam, aData = {}):
        Func = self.get(aKey)
        if (Func):
            return Func(aKey, aParam, aData)
        else:
            Msg = Log.Print(1, 'e', self.__class__.__name__, '__call__()', 'Key %s not found' % (aKey))
            raise NotImplementedError(Msg)


class TDictParam():
    Required = 'Required'

    def __init__(self):
        self.Loaded  = False
        self.OnLoad  = None
        self.DefPattern  = {}

    def GetPattern(self):
        return self.DefPattern

    def GetVars(self):
        return vars(self)

    def GetAttr(self, aKey = None):
        Result = self.GetVars()
        if (aKey):
            return Result.get(aKey)
        else:
            return Result

    def SetAttr(self, aKey, aValue):
        if (self.OnLoad):
            aValue = self.OnLoad(aKey, aValue)
        Log.Print(3, 'i', self.__class__.__name__, 'SetAttr()', 'Key: %s, Value: %s' % (aKey, aValue))
        setattr(self, aKey, aValue)

    def Load(self, aParam, aAll = True):
        for Key in aParam:
            Value = aParam.get(Key)
            if (aAll or Value != None):
                self.SetAttr(Key, Value)
        self.Loaded = True

    def LoadPattern(self, aParam, aPattern = {}):
        #Pattern = {**self.Pattern, **aPattern} # need 3.0
        #Pattern = dict(self.Pattern.items() + aPattern.items()) #only 2.7
        Pattern  = {}
        if (self.DefPattern):
            Pattern.update(self.DefPattern)
        if (aPattern):
            Pattern.update(aPattern)

        Diff = set(aParam.keys()) - set(Pattern.keys())
        #print('---1', 'Diff', Diff, aParam.keys(), Pattern.keys())
        if (Diff):
            print(Pattern)
            Msg = Log.Print(1, 'e', self.__class__.__name__, 'LoadPattern()', 'Unknown key %s in %s' % (str(Diff), Obj.GetTreeAsStr(aParam, 2)))
            raise Exception(Msg)

        for Key in Pattern:
            Default = Pattern.get(Key)
            Param   = aParam.get(Key, Default)
            if ( (Default == TDictParam.Required) and (Param == TDictParam.Required) ):
                Msg = Log.Print(1, 'e', self.__class__.__name__, 'LoadPattern()', 'Key %s is required in %s' % (Key, Obj.GetTreeAsStr(aParam, 2)))
                raise Exception(Msg)

            self.SetAttr(Key, Param)
            self.Loaded = True

    def LoadFile(self, aName, aPattern = {}):
        if (not os.path.isfile(aName)):
            Msg = Log.Print(1, 'e', self.__class__.__name__, 'LoadFile)', 'File not found %s' % aName)
            raise Exception(Msg)

        EditorConf = TEditorConf()
        EditorConf.LoadFromFile(aName)
        Param = EditorConf.Section.KeyList(False)
        self.LoadPattern(Param, aPattern)

    def AddDefPattern(self, aPattern):
        self.DefPattern.update(aPattern)
        self.Load(aPattern)


class TDictReplace():
    def __init__(self, aPrefix = "$<", aSufix = ">"):
        self.Data    = {}
        self.Skip    = []
        self.OnParse = None
        self.SetDelim(aPrefix, aSufix)
        self.Clear()

    def SetDelim(self, aPrefix, aSufix):
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

    def IsStr(self, aData):
        return (aData) and (type(aData).__name__ in ['str', 'unicode']) 

    def HasPrefix(self, aData):
        return ( (self.IsStr(aData)) and (aData.find(self.Prefix) != -1) )

    def GetMatch(self, aData):
        if (self.HasPrefix(aData)):
            Result = re.findall(self.Pattern, aData)
        else:
            Result = []
        return Result


    def GetKey(self, aKey, aDef = ''):
        return self.Data.get(aKey, aDef)

    def AddKey(self, aKey, aValue):
        self.Data[aKey] = aValue

    def Replace(self, aStr, aFind, aRepl):
        return aStr.replace(self.Prefix + aFind + self.Sufix, aRepl)

    # search macros $<xxx> in aStr and repalce it with value returned by aFunc
    def _ParseRecurs(self, aData):
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

    def Parse(self, aData):
        return self._ParseRecurs(aData)

    def ParseTo(self, aData):
        return Str.ConvertTo(self.Parse(aData))

    def ParseVar(self, aData):
        if (isinstance(aData, dict)):
            for Key in aData:
                aData[Key] = self.ParseVar(aData[Key])
        elif (isinstance(aData, list)):
            for i in range(len(aData)):
                 aData[i] = self.ParseVar(aData[i])
        else:
            aData = self.ParseTo(aData)
        return aData
