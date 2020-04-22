"""
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2017.10.20
License:     GNU, see LICENSE for more details
Description:
"""


import sys
import asyncio
#
from Inc.Log        import Log
from Inc.Util       import UObj, UArr

# for nuitka compiler
# from Plugin.Devices import *
from Inc.Import     import TDynImport


class TSec():
    def __init__(self, aParent):
        self.Parent = aParent
        self.Data   = {}

    def Clear(self):
        self.Data.clear()

    def Load(self, aData):
        Msg = Log.PrintDbg(1, 'e', 'Not implemented')
        raise NotImplementedError(Msg)


class TSecVar(TSec):
    def Load(self, aData: dict):
        for Item in aData:
            self.Data[Item] = aData[Item]

class TSecInclude(TSec):
    def Add(self, aData):
        for Key in aData.keys():
            if (Key in self.Data):
                for Item in aData[Key]:
                    self.Data[Key].append(Item)
            else:
                self.Data.update(aData)

    def Load(self, aData):
        for Item in aData:
            UArr.CheckDif(Item.keys(), ['Enable', 'File'])
            if (Item.get('Enable', True)):
                FileName = Item.get('File')
                Data = self.Parent.LoadConf.Conf(FileName)
                self.Add(Data)


class TSecRun(TSec):
    def __init__(self, aParent):
        super().__init__(aParent)
        self.InClass = None
        self.InRun   = False
        self.OnPost  = None

    def DoFunc(self, aName: str):
        Items = self.Parent.SecClass.Data
        for Item in Items:
            Class = Items.get(Item)
            Func = UObj.GetAttr(Class, aName, True)
            if (Func):
                Func()

    def Add(self, aData: dict, aKey: str):
        Class = self.Parent.SecClass.Parse(aData, None)
        if (Class):
            if (aKey not in self.Data):
                self.Data[aKey] = []
            self.Data[aKey].append(Class)

    def Load(self, aData: dict):
        Keys  = ['Start', 'Loop', 'Finish']
        UArr.CheckDif(aData.keys(), Keys)

        for Key in Keys:
            Data = aData.get(Key)
            if (Data):
                for Item in aData.get(Key):
                    self.Add(Item, Key)

    async def PostLoop(self, aClasses: list):
        if (aClasses):
            self.DoFunc('DoLoop')

            Sleep = self.Parent.SecVar.Data.get('LoopSleep', 1)
            await asyncio.sleep(Sleep)

            Sleep = self.Parent.SecVar.Data.get('LoopSleepEach', 0)
            for Class in aClasses:
                await asyncio.sleep(Sleep)
                Class.Post(None, 0, None)

            if (self.OnPost):
                self.OnPost(self)

    @staticmethod
    def Post(aClasses: list):
        if (aClasses):
            for Class in aClasses:
                Class.Post(None, 0, None)

    async def Run(self):
        Log.PrintDbg(2, 'i')

        self.DoFunc('DoStart')
        Items = self.Data.get('Start')
        self.Post(Items)

        Items = self.Data.get('Loop')
        if (Items):
            Log.PrintDbg(2, 'i', 'Loop')

            self.InRun = True
            try:
                while (self.InRun):
                    await self.PostLoop(Items)
            finally:
                self.Stop()
        else:
            Msg = Log.PrintDbg(1, 'e', 'Loop section is empty')
            raise Exception(Msg)

    def Stop(self):
        if (self.InClass):
            Log.PrintDbg(1, 'i', 'Alias %s' % self.InClass.Alias)

        if (self.InRun):
            self.InRun = False

            Items = self.Data.get('Finish')
            self.Post(Items)
            self.DoFunc('DoFinish')


class TSecAction(TSec):
    def Add(self, aData: list, aDict: dict):
        Keys = ['OnError', 'OnValue', 'OnRange', 'OnLoop', 'OnAvg']
        for Item in aData:
            UArr.CheckDif(Item.keys(), Keys)
            for Key in Keys:
                Data = Item.get(Key)
                if (Data):
                    Class = self.Parent.SecClass.Parse(Data, None)
                    if (Class):
                        aDict[Key] = Class

    def Load(self, aData: list):
        self.Add(aData, self.Data)


class TSecDefault(TSec):
    def __init__(self, aParent):
        super().__init__(aParent)

        self.Keys = ['Public', 'Parameter', 'Action']

    def Load(self, aData):
        Keys = ['Enable', 'Class'] + self.Keys
        for Item in aData:
            UArr.CheckDif(Item.keys(), Keys)
            if (Item.get('Enable', True)):
                Name = Item.get('Class')
                for Key in self.Keys:
                    Value = Item.get(Key)
                    if (Value is not None):
                        if (Key not in self.Data):
                            self.Data[Key] = {}
                        self.Data[Key][Name] = Value

    def GetSect(self, aSect, aClass, aDef = {}):
        Name   = UObj.GetName(aClass)
        Result = self.Data.get(aSect, aDef)
        if (Result):
            Result = Result.get(Name, aDef)
        return Result

    def GetClassKeys(self, aClass):
        Result = []
        for Key in self.Keys:
            if (self.GetSect(Key, aClass)):
                Result.append(Key)
        return Result


class TSecClass(TSec):
    def __init__(self, aParent):
        super().__init__(aParent)
        self.OnClass = None
        self.Unused  = []
        self.Keys = ['Enable', 'Class', 'ClassRef', 'Alias', 'Module', 'Descr', 'Comment', 'Data', 'Public']

        self.Import = TDynImport()
        self.Import.ParseDir('Plugin/Devices')


    def _DecorAliasesVar(aFunc):
        def Wrapper(self, aArrAlias, aVar, aValue = None):
            if (not aArrAlias):
                aArrAlias = self.GetAliases()

            Result = {}
            for Idx, Alias in enumerate(aArrAlias):
                Class = self.GetClass(Alias)
                if (Class):
                    Result[Alias] = aFunc(self, Alias, aVar, aValue)
                else:
                    Result[Alias] = None
            return Result
        return Wrapper

    @_DecorAliasesVar
    def GetAliasVar(self, aAlias: str, aVarName: str, aValueNotUsed):
        Class = self.GetClass(aAlias)
        return UObj.GetAttrPath(Class, aVarName)

    @_DecorAliasesVar
    def SetAliasVar(self, aAlias: str, aVarName: str, aValue):
        Class = self.GetClass(aAlias)
        return UObj.SetAttrPath(Class, aVarName, aValue)

    def GetUnused(self):
        Result = []

        Items = self.Parent.SecInclude.Data.get('Class')
        if (Items):
            for Item in Items:
                Alias  = Item.get('Alias')
                Enable = Item.get('Enable', True)
                if (Enable and (not self.Parent.SecClass.GetClass(Alias))):
                    Result.append(Alias)
        return Result

    def GetSection(self, aAlias: str):
        Items = self.Parent.SecInclude.Data.get('Class')
        if (Items):
            for Item in Items:
                Alias = Item.get('Alias')
                if (aAlias == Alias):
                    return Item
        return None

    def GetClass(self, aAlias: str):
        return self.Data.get(aAlias)

    def GetAliases(self, aSubstr = ''):
        Keys = self.Data.keys()
        return UArr.ListFilter(Keys, aSubstr)

    def AddClass(self, aClass):
        # print("aAlias", aAlias, "aClass", aClass)
        if (self.GetClass(aClass.Alias)):
            Msg = Log.PrintDbg(1, 'e', 'Alias already exists %s' % aClass.Alias)
            raise Exception(Msg)

        if (self.OnClass):
            aClass = self.OnClass(aClass)

        if (aClass):
            self.Data[aClass.Alias] = aClass

        return aClass

    def Load(self, aData):
        pass

    def Parse(self, aData: dict, aParent):
        Result = None

        PAlias = ''
        if (aParent):
            PAlias = aParent.Alias

        Enable   = aData.get('Enable', True)
        ClassRef = aData.get('ClassRef')
        if (ClassRef):
            if (not Enable):
                return Result

            if (aParent and (aParent.Alias == ClassRef)):
                Msg = Log.PrintDbg(1, 'e', 'Cross link detected %s' % ClassRef)
                raise Exception(Msg)

            Result = self.GetClass(ClassRef)
            if (not Result):
                Data = self.GetSection(ClassRef)
                if (Data):
                    Result = self.Parse(Data, aParent)
                else:
                    Msg = Log.PrintDbg(1, 'e', 'ClassRef `%s` not found in %s' % (ClassRef, PAlias))
                    raise Exception(Msg)
        # normalclass
        else:
            ClassName = aData.get('Class')
            if (not ClassName):
                Msg = Log.PrintDbg(1, 'e', 'Keyword `Class` is empty')
                raise Exception(Msg)

            Alias = aData.get('Alias')
            if (not Alias):
                Msg = Log.PrintDbg(1, 'e', 'Keyword `Alias` is empty in `Class` %s' % (ClassName))
                raise Exception(Msg)

            if (not Enable):
                if (aParent):
                    Msg = Log.PrintDbg(1, 'e', 'Alias %s disabled but used by %s' % (Alias, PAlias))
                    raise Exception(Msg)
                return None

            ModuleName = aData.get('Module')
            if (ModuleName):
                Module = __import__(ModuleName)
                TClass = getattr(Module, ClassName)
            else:
                # TClass = globals()[ClassName]
                TClass = self.Import.GetInstance(ClassName)
                if (TClass is None):
                    Log.PrintDbg(1, 'x', 'Cant load class %s->%s' % (PAlias, ClassName))
                    sys.exit(1)

            Log.PrintDbg(1, 'i', 'Load %s->%s (%s)' % (PAlias, Alias, TClass.__name__))
            Result = TClass(aParent)

            # boolean value
            Result.Public = self.Parent.SecDefault.GetSect('Public', Result, None)
            if (Result.Public is None):
                Result.Public = aData.get('Public', True)

            Result.Alias = Alias
            Result.Descr = aData.get('Descr', '')
            Result.Data  = aData.get('Data')
            Result.Manager = self.Parent
            Result = self.AddClass(Result)
            # print('->_CreateClass', 'Alias', Result.Alias, 'Class', aClassName)

            if (Result):
                Def  = self.Parent.SecDefault.GetClassKeys(Result)
                Keys = UArr.Combine(aData.keys(), Def)
                for Key in Keys:
                    if (Key not in self.Keys):
                        Result.ExtParam(Key, aData.get(Key), {'Parent': self})
                #Result.DoStart()
        return Result
