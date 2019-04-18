"""
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2017.10.20
License:     GNU, see LICENSE for more details
Description:
"""


import sys
#
from Inc.Log        import Log
from Inc.Util       import Arr

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
            Arr.CheckDif(Item.keys(), ['Enable', 'File'])
            if (Item.get('Enable', True)):
                FileName = Item.get('File')
                Data = self.Parent.LoadConf.Conf(FileName)
                self.Add(Data)


class TSecRun(TSec):
    def __init__(self, aParent):
        TSec.__init__(self, aParent)
        self.InClass = None
        self.InRun   = False
        self.OnPost  = None
        self.ThreadPipe = None

    def DoFunc(self, aFunc):
        Items = self.Parent.SecClass.Data
        for Item in Items:
            Class = Items.get(Item)
            Func = getattr(Class, aFunc)
            Func()

    def Add(self, aData, aKey):
        Class = self.Parent.SecClass.Parse(aData, None)
        if (Class):
            if (aKey not in self.Data):
                self.Data[aKey] = []
            self.Data[aKey].append(Class)

    def Load(self, aData):
        Keys  = ['Start', 'Loop', 'Finish']
        Arr.CheckDif(aData.keys(), Keys)

        for Key in Keys:
            Data = aData.get(Key)
            if (Data):
                for Item in aData.get(Key):
                    self.Add(Item, Key)

    def PostAll(self, aClasses):
        if (aClasses):
            for Class in aClasses:
                Class.Post(None, 0, None)

            if (self.OnPost):
                self.OnPost(self)

            # check if something comes from thread
            if (self.ThreadPipe):
                self.ThreadPipe.MainReceive(self.Parent)

    def Run(self):
        Log.PrintDbg(2, 'i')

        self.DoFunc('DoStart')

        Items = self.Data.get('Start')
        self.PostAll(Items)

        Items = self.Data.get('Loop')
        if (Items):
            Log.PrintDbg(2, 'i', 'Loop')

            self.InRun = True
            try:
                OnLoop = self.Parent.SecAction.Data.get('OnLoop')
                if (OnLoop):
                    OnLoop.Post(Items, 0, None)
                else:
                    while (self.InRun):
                        self.PostAll(Items)
                        # time.sleep(1)
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
            self.PostAll(Items)

            self.DoFunc('DoFinish')


class TSecAction(TSec):
    def Add(self, aData, aDict):
        Keys = ['OnError', 'OnValue', 'OnRange', 'OnLoop', 'OnAvg']
        for Item in aData:
            Arr.CheckDif(Item.keys(), Keys)
            for Key in Keys:
                Data = Item.get(Key)
                if (Data):
                    Class = self.Parent.SecClass.Parse(Data, None)
                    if (Class):
                        aDict[Key] = Class

    def Load(self, aData):
        self.Add(aData, self.Data)


class TSecDefault(TSec):
    def __init__(self, aParent):
        TSec.__init__(self, aParent)

        self.Keys = ['Parameter', 'Action']

    def Load(self, aData):
        Keys = ['Enable', 'Class'] + self.Keys
        for Item in aData:
            Arr.CheckDif(Item.keys(), Keys)
            if (Item.get('Enable', True)):
                Name = Item.get('Class')
                for Key in self.Keys:
                    Value = Item.get(Key)
                    if (Value):
                        if (Key not in self.Data):
                            self.Data[Key] = {}
                        self.Data[Key][Name] = Value

    def GetSect(self, aSect, aClass, aDef = {}):
        Name   = aClass.__class__.__name__
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
        TSec.__init__(self, aParent)
        self.OnClass = None
        self.Unused  = []

        self.Import = TDynImport()
        self.Import.ParseDir('Plugin/Devices')

    def _DecorGetAliasVar(aFunc):
        def Wrapper(self, aArrAlias, aVar):
            if (not aArrAlias):
                aArrAlias = self.GetAliases()

            Result = {}
            for Alias in aArrAlias:
                Class = self.GetClass(Alias)
                if (Class):
                    Result[Alias] = aFunc(self, Alias, aVar)
                else:
                    Result[Alias] = None
            return Result
        return Wrapper

    @_DecorGetAliasVar
    def GetAliasParam(self, aAlias, aVar):
        Class = self.GetClass(aAlias)
        return Class.Param.GetAttr(aVar)

    @_DecorGetAliasVar
    def GetAliasVar(self, aAlias, aVar):
        Obj = self.GetClass(aAlias)
        for Var in aVar.split('.'):
            if (hasattr(Obj, Var)):
                Obj = getattr(Obj, Var)
            else:
                return None
        return Obj

    def SetParam(self, aAlias, aParam, aValue):
        Result = None
        Class  = self.GetClass(aAlias)
        if (Class and Class.Param.HasAttr(aParam)):
            Class.Param.SetAttr(aParam, aValue)
            Result = Class.Param.GetAttr(aParam)
        return Result

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

    def GetSection(self, aAlias):
        Items = self.Parent.SecInclude.Data.get('Class')
        if (Items):
            for Item in Items:
                Alias = Item.get('Alias')
                if (aAlias == Alias):
                    return Item
        return None

    def GetClass(self, aAlias):
        return self.Data.get(aAlias)

    def GetAliases(self):
        return self.Data.keys()

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

    def Parse(self, aData, aParent):
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
            Result.Alias = Alias
            Result.Descr = aData.get('Descr')
            Result.Manager = self.Parent
            Result = self.AddClass(Result)
            # print('->_CreateClass', 'Alias', Result.Alias, 'Class', aClassName)

            if (Result):
                Def  = self.Parent.SecDefault.GetClassKeys(Result)
                Keys = Arr.Combine(aData.keys(), Def)
                for Key in Keys:
                    if (Key not in ['Enable', 'Class', 'ClassRef', 'Alias', 'Module', 'Descr', 'Comment']):
                        Result.ExtParam(Key, aData.get(Key), {'Parent': self})
                #Result.DoStart()
        return Result
