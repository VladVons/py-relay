'''
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2017.10.20
License:     GNU, see LICENSE for more details
Description:
'''


import sys
import time
import json
#
from Inc.Log        import Log
from Inc.Util       import Obj, FS, Arr
from Inc.Param      import TDictReplace
from Inc.ConfEditor import TEditorConf

# for nuitka compiler
#from Plugin.Devices import *
from Inc.Import     import TDynImport


class TLoadConf():
    def __init__(self, aDir):
        self.Dir = aDir
        self.DictReplace = TDictReplace()

    def Path(self, aFile):
        return self.Dir + aFile

    def File(self, aFile):
        FilePath = self.Path(aFile)
        Result = FS.LoadFromFileToStr(FilePath)
        if (not Result):
            Msg = Log.Print(1, 'e', self.__class__.__name__, 'File()', 'Cant load file %s' % (FilePath))
            raise Exception(Msg)
        return Result

    def Macros(self, aFile):
        FilePath = self.Path(aFile)
        EditorConf = TEditorConf()
        EditorConf.LoadFromFile(FilePath)
        self.DictReplace.Data = EditorConf.Section.KeyList()

    def Conf(self, aFile):
        # Log.Print(1, 'i', self.__class__.__name__, 'Conf()', 'Load file %s' % aFile)

        Data = self.File(aFile)
        try:
            Data = json.loads(Data)
        except Exception as E:
            Msg = Log.Print(1, 'e', self.__class__.__name__, 'Conf()', 'File %s' % (aFile), E)
            raise Exception(Msg)

        Result = self.DictReplace.ParseVar(Data)
        if (self.DictReplace.Err):
            Msg = Log.Print(1, 'e', self.__class__.__name__, 'Conf()', 'Unknown macros %s' % self.DictReplace.Err)
            raise ValueError(Msg)
        return Result


class TSec():
    def __init__(self, aParent):
        self.Parent = aParent
        self.Data   = {}

    def Clear(self):
        self.Data.clear()

    def Load(self, aData):
        Msg = Log.Print(1, 'e', self.__class__.__name__, 'Load()', 'Not implemented')
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
    def Add(self, aData, aKey):
        Class = self.Parent.SecClass.Parse(aData, None)
        if (Class):
            if (not aKey in self.Data):
                self.Data[aKey] = []
            self.Data[aKey].append(Class)

    def Load(self, aData):
        Keys  = ['Init', 'Start', 'Loop', 'Finish']
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
        Log.Print(2, 'i', self.__class__.__name__, 'Run()')

        Items = self.Data.get('Start')
        self.PostAll(Items)

        Items = self.Data.get('Loop')
        if (Items):
            Log.Print(2, 'i', self.__class__.__name__, 'Run() Loop')

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
            Log.Print(1, 'w', self.__class__.__name__, 'Run()', 'Loop section is empty')

    def Stop(self):
        Log.Print(2, 'i', self.__class__.__name__, 'Stop()')

        if (self.InRun):
            self.InRun = False

            Items = self.Data.get('Finish')
            self.PostAll(Items)

            Obj = self.Parent.SecClass.Data
            for Item in Obj:
                Class = Obj.get(Item)
                Class.DoFinish()


class TSecAction(TSec):
    def Load(self, aData):
        Keys = ['OnError', 'OnValue', 'OnRange', 'OnLoop', 'OnAvg']
        for Item in aData:
            Arr.CheckDif(Item.keys(), Keys)
            for Key in Keys:
                Data = Item.get(Key)
                if (Data):
                    Class = self.Parent.SecClass.Parse(Data, None)
                    if (Class):
                        self.Data[Key] = Class


class TSecDefault(TSec):
    def __init__(self, aParent):
        TSec.__init__(self, aParent)

    def Load(self, aData):
        Keys = ['Enable', 'Class', 'Parameter']
        for Item in aData:
            Arr.CheckDif(Item.keys(), Keys)
            if (Item.get('Enable', True)):
                Name = Item.get('Class')
                self.Data[Name] = Item.get('Parameter')

    def SetClassParam(self, aClass):
        Name  = aClass.__class__.__name__
        Param = self.Data.get(Name)
        if (Param):
            Arr.CheckDif(Param, aClass.Param.DefPattern)
            aClass.Param.AddDefPattern(Param)


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
        for Item in Items:
            Alias  = Item.get('Alias')
            Enable = Item.get('Enable', True)
            if (not self.Parent.SecClass.GetClass(Alias) and Enable):
                Result.append(Alias)
        return Result

    def GetSection(self, aAlias):
        Items = self.Parent.SecInclude.Data['Class']
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
            Msg = Log.Print(1, 'e', self.__class__.__name__, 'AddClass()', 'Alias already exists %s' % aClass.Alias)
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
                Msg = Log.Print(1, 'e', self.__class__.__name__, 'Parse()', 'Cross link detected %s' % ClassRef)
                raise Exception(Msg)

            Result = self.GetClass(ClassRef)
            if (not Result):
                Data = self.GetSection(ClassRef)
                if (Data):
                    Result = self.Parse(Data, aParent)
                else:
                    Msg = Log.Print(1, 'e', self.__class__.__name__, 'Parse()', 'ClassRef `%s` not found in %s' % (ClassRef, ParentInfo))
                    raise Exception(Msg)
        # normalclass
        else:
            Alias = aData.get('Alias')
            if (not Alias):
                Msg = Log.Print(1, 'e', self.__class__.__name__, 'Parse()', 'Alias is empty in Class %s' % ClassName)
                raise Exception(Msg)

            if (not Enable):
                if (aParent):
                    Msg = Log.Print(1, 'e', self.__class__.__name__, 'Parse()', 'Alias %s disabled but used by %s' % (Alias, ParentInfo))
                    raise Exception(Msg)
                return None

            ClassName = aData.get('Class')
            if (not ClassName):
                Msg = Log.Print(1, 'e', self.__class__.__name__, 'Parse()', 'Keyword `Class` is empty')
                raise Exception(Msg)

            ModuleName = aData.get('Module')
            if (ModuleName):
                Module = __import__(ModuleName)
                TClass = getattr(Module, ClassName)
            else:
                try:
                    # TClass = globals()[ClassName]
                    TClass = self.Import.GetInstance(ClassName)
                except Exception as E:
                    Log.Print(1, 'x', self.__class__.__name__, 'Parse()', 'Cant load class %s' % ClassName, E)
                    sys.exit(1)
                    #raise

            Log.Print(1, 'i', self.__class__.__name__, 'Parse()', 'Load %s->%s (%s)' % (ParentInfo, Alias, TClass.__name__))
            Result = TClass(aParent)
            Result.Alias = Alias
            Result.Descr = aData.get('Descr')
            Result.Manager = self.Parent
            Result = self.AddClass(Result)
            # print('->_CreateClass', 'Alias', Result.Alias, 'Class', aClassName)

            if (Result):
                for Key in aData.keys():
                    if (Key not in ['Enable', 'Class', 'ClassRef', 'Alias', 'Module', 'Descr', 'Comment']):
                        Result.ExtParam(Key, aData.get(Key), {'Parent': self})
                Result.DoStart()

        return Result


class TManager():
    def __init__(self, aParent, aDir):
        self.Parent    = aParent

        self.LoadConf   = TLoadConf(aDir)

        self.StartTimeVirt = time.time()
        self.StartTimeReal = time.time()
        self.SetStartTimeVirt(time.time())

        self.Init()

    def Init(self):
        self.SecAction  = TSecAction(self)
        self.SecClass   = TSecClass(self)
        self.SecDefault = TSecDefault(self)
        self.SecInclude = TSecInclude(self)
        self.SecRun     = TSecRun(self)

    def SetStartTimeVirt(self, aValue):
        self.StartTimeVirt = int(aValue)

    def Load(self, aData):
        Log.Print(2, 'i', self.__class__.__name__, 'Load()')

        self.Init()

        Keys = ['Include', 'Default', 'Run', 'Action']
        Arr.CheckDif(aData.keys(), Keys + ['Class'])
        self.SecInclude.Data = aData

        # call self.SecInclude, self.SecDefault etc
        for Key in Keys:
            Name = 'Sec' + Key
            Obj  = getattr(self, Name)
            if (Obj):
                Data = self.SecInclude.Data.get(Key)
                if (Data):
                    Obj.Load(Data)
                else:
                    Log.Print(1, 'w', self.__class__.__name__, 'Load()', 'Empty section %s' % Key)
            else:
                Msg = Log.Print(1, 'e', self.__class__.__name__, 'Load()', 'Cant find method %s' % Name)
                raise Exception(Msg)

        #self.SecClass.SetParam('Sleep_1', 'Time', 5)

    def Run(self):
        self.SecRun.Run()

    def Info(self, aMode):
        if (aMode == 'Attrs'):
            Arr = {}
            for Item in self.SecClass.Data:
                Arr[Item] = self.SecClass.Data[Item].Param.GetAttrs()
            Obj.Dump(Arr)
        elif (aMode == 'Unused'):
            Unused = self.SecClass.GetUnused()
            for Item in Unused:
                Log.Print(1, 'w', self.__class__.__name__, 'Info()', 'Alias %s not used' % Item)
        elif (aMode == 'Total'):
            Arr = {}
            Arr['Class'] = len(self.SecClass.Data)
            Arr['Unused'] = len(self.SecClass.GetUnused())
            Arr['Loop'] = len(self.SecRun.Data.get('Loop'))
            Obj.Dump(Arr)
        else:
            Log.Print(1, 'w', self.__class__.__name__, 'Info()', 'Unknown option %s' % aMode)
        print('')

    def LoadFile(self, aFile):
        Log.Print(1, 'i', self.__class__.__name__, 'LoadFile()', '%s%s' % (self.LoadConf.Dir, aFile))

        self.File = aFile
        Data = self.LoadConf.Conf(aFile)
        self.Load(Data)

        self.Info('Unused')
        self.Info('Total')

    def Reload(self):
        self.LoadFile(self.File)
