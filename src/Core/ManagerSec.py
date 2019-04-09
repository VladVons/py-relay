'''
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2017.10.20
License:     GNU, see LICENSE for more details
Description:
'''


import sys
#
from Inc.Log        import Log
from Inc.Util       import Obj, FS, Arr

# for nuitka compiler
#from Plugin.Devices import *
from Inc.Import     import TDynImport


class TSec():
    def __init__(self, aParent):
        self.Parent = aParent
        self.Data   = {}

    def Clear(self):
        self.Data.clear()

    def Load(self, aData):
        Msg = Log.PrintDbg(1, 'e', 'Load()', 'Not implemented')
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

    def __del__(self):
        pass

    def DoFunc(self, aFunc):
        Items = self.Parent.SecClass.Data
        for Item in Items:
            Class = Items.get(Item)
            Func = getattr(Class, aFunc)
            Func()

    def Add(self, aData, aKey):
        Class = self.Parent.SecClass.Parse(aData, None)
        if (Class):
            if (not aKey in self.Data):
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

    def PostAll(self, aClass):
        if (aClass):
            for Class in aClass:
                Class.Post(None, 0, None)

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
            Msg = Log.PrintDbg(1, 'e', 'Run->Loop section is empty')
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
                if (not self.Parent.SecClass.GetClass(Alias) and Enable):
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

        if (aParent):
            ParentInfo = aParent.Alias
        else:
            ParentInfo = ''

        Enable = aData.get('Enable', True)
        ClassRef = aData.get('ClassRef')
        if (ClassRef):
            if (not Enable):
                return None

            if (aParent and (aParent.Alias == ClassRef)):
                Msg = Log.PrintDbg(1, 'e', 'Cross link detected %s' % ClassRef)
                raise Exception(Msg)

            Result = self.GetClass(ClassRef)
            if (not Result):
                Data = self.GetSection(ClassRef)
                if (Data):
                    Result = self.Parse(Data, aParent)
                else:
                    Msg = Log.PrintDbg(1, 'e', 'ClassRef `%s` not found in %s' % (ClassRef, ParentInfo))
                    raise Exception(Msg)
        # normalclass
        else:
            Alias = aData.get('Alias')
            if (not Alias):
                Msg = Log.PrintDbg(1, 'e', 'Alias is empty in Class %s' % ClassName)
                raise Exception(Msg)

            if (not Enable):
                if (aParent):
                    Msg = Log.PrintDbg(1, 'e', 'Alias %s disabled but used by %s' % (Alias, ParentInfo))
                    raise Exception(Msg)
                return None

            ClassName = aData.get('Class')
            if (not ClassName):
                Msg = Log.PrintDbg(1, 'e', 'Keyword `Class` is empty')
                raise Exception(Msg)

            ModuleName = aData.get('Module')
            if (ModuleName):
                Module = __import__(ModuleName)
                TClass = getattr(Module, ClassName)
            else:
                # TClass = globals()[ClassName]
                TClass = self.Import.GetInstance(ClassName)
                if (TClass is None):
                    Log.PrintDbg(1, 'x', 'Cant load class %s->%s' % (ParentInfo, ClassName))
                    sys.exit(1)

            Log.PrintDbg(1, 'i', 'Load %s->%s (%s)' % (ParentInfo, Alias, TClass.__name__))
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
