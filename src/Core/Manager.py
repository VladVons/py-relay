'''
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2017.10.20
License:     GNU, see LICENSE for more details
Description:
'''

import time
import json
#
from Inc.Log        import Log
from Inc.Util       import Obj, FS
from Inc.Param      import TDictReplace
from Inc.ConfEditor import TEditorConf
from Api            import Version

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
            Msg = Log.Print(1, 'e', self.__class__.__name__, 'LoadFile()', 'Cant load file %s' % (FilePath))
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


class TManager():
    def __init__(self, aParent, aDir):
        self.Parent    = aParent

        self.OnClass   = None
        self.MaxDepth  = 10
        self.InRun     = False
        self.RunKeys   = ['Init', 'Start', 'Loop', 'Finish']
        self.Actions   = {}

        self.Import = TDynImport()
        self.Import.ParseDir('Plugin/Devices')

        self.LoadConf  = TLoadConf(aDir)

        self.StartTimeVirt = time.time()
        self.StartTimeReal = time.time()
        self.SetStartTimeVirt(time.time())

        self.Clear()

        self.DictReplace = TDictReplace()
        self.DictReplace.OnParse = self._CallBack_DictReplace
 
    def SetStartTimeVirt(self, aValue):
        self.StartTimeVirt = int(aValue)

    def _CallBack_DictReplace(self, aParent, aName):
        Path   = aParent.CurField + "/" + aName
        Result = self.GetField(Path)
        return Result

    def Clear(self):
        self.Obj  = {}
        self.Runs = {}

    def CheckKey(self, aList1, aList2):
        Diff = set(aList1) - (set(aList2))
        if (Diff):
            Msg = Log.Print(1, 'e', self.__class__.__name__, 'CheckKey()', 'Unknown key %s in %s' % (str(Diff), aList1))
            raise ValueError(Msg)

    def GetSection(self, aAlias):
        for Item in self.Data:
            Alias = Item.get('Alias')
            if (aAlias == Alias):
                return Item
        return None

    def AddAction(self, aAction, aDict):
        ActionKeys = ['OnError', 'OnValue', 'OnRange', 'OnLoop', 'OnAvg']
        # self.CheckKey(Action.keys(), self.ActionKeys)
        for Item in aAction:
            for Key in ActionKeys:
                Data = Item.get(Key)
                if (Data):
                    Class = self._LoadClass(Data, None, self.MaxDepth)
                    if (Class):
                        aDict[Key] = Class

    def AddRuns(self, aData, aKey):
        Class = self._LoadClass(aData, None, self.MaxDepth)
        if (Class):
            if (not aKey in self.Runs):
                self.Runs[aKey] = []
            self.Runs[aKey].append(Class)

    def GetClass(self, aAlias):
        return self.Obj.get(aAlias)

    def _AddClass(self, aClass):
        # print("aAlias", aAlias, "aClass", aClass)
        if (self.GetClass(aClass.Alias)):
            Msg = Log.Print(1, 'e', self.__class__.__name__, '_AddClass()', 'Alias already exists %s' % aClass.Alias)
            raise Exception(Msg)

        if (self.OnClass):
            aClass = self.OnClass(aClass)

        if (aClass):
            self.Obj[aClass.Alias] = aClass

        return aClass

    def _LoadClass(self, aData, aParent, aDepth):
        Result = None

        if (aDepth < 0):
            Log.Print(1, 'i', self.__class__.__name__, '_LoadClass()', 'Max depth recursion reached %s' % self.MaxDepth)
            return Result

        if (aParent):
            ParentInfo = aParent.Alias   
        else:
            ParentInfo = ''

        Enable   = aData.get('Enable', True)
        ClassRef = aData.get('ClassRef')
        if (ClassRef):
            if (not Enable):
                return None

            if (aParent and (aParent.Alias == ClassRef)):
                Msg = Log.Print(1, 'e', self.__class__.__name__, '_LoadClass()', 'Cross link detected %s' % ClassRef)
                raise Exception(Msg)

            Result = self.GetClass(ClassRef)
            if (not Result):
                Data = self.GetSection(ClassRef)
                if (Data):
                    Result = self._LoadClass(Data, aParent, aDepth - 1)
                else:
                    Msg = Log.Print(1, 'e', self.__class__.__name__, '_LoadClass()', 'ClassRef `%s` not found in %s' % (ClassRef, ParentInfo))
                    raise Exception(Msg)
        # normalclass
        else:
            Alias = aData.get('Alias')
            if (not Alias):
                Msg = Log.Print(1, 'e', self.__class__.__name__, '_LoadClass()', 'Alias is empty in Class %s' % ClassName)
                raise Exception(Msg)

            if (not Enable):
                if (aParent):
                    Msg = Log.Print(1, 'e', self.__class__.__name__, '_LoadClass()', 'Alias %s disabled but used by %s' % (Alias, ParentInfo))
                    raise Exception(Msg)
                return None

            ClassName = aData.get('Class')
            if (not ClassName):
                Msg = Log.Print(1, 'e', self.__class__.__name__, '_LoadClass()', 'Keyword `Class` is empty')
                raise Exception(Msg)


            ModuleName = aData.get('Module')
            if (ModuleName):
                Module = __import__(ModuleName)
                TClass = getattr(Module, ClassName)
            else:
                try:
                    #TClass = globals()[ClassName]
                    TClass = self.Import.GetInstance(ClassName)
                except Exception as E:
                    Log.Print(1, 'x', self.__class__.__name__, '_LoadClass()', 'Can`t load class %s' % ClassName)
                    exit()
                    #raise

            Result = TClass(aParent)
            Result.Alias   = Alias
            Result.Descr   = aData.get('Descr')
            Result.Manager = self
            Result = self._AddClass(Result)
            # print('->_CreateClass', 'Alias', Result.Alias, 'Class', aClassName)

            if (Result):
                for Key in aData.keys():
                    if (Key not in ['Enable', 'Class', 'ClassRef', 'Alias', 'Module', 'Descr', 'Comment']):
                        Result.ExtParam(Key, aData.get(Key), {'Depth': aDepth, 'Parent': self})

                Result.DoStart()

        return Result

    def PostAll(self, aClass):
        if (aClass):
            for Class in aClass:
                Class.Post(None, 0, None)

    def Run(self):
        Log.Print(2, 'i', self.__class__.__name__, 'Run()')

        Obj.Dump(Version())
        print('')

        Items = self.Runs.get('Start')
        self.PostAll(Items)

        Items = self.Runs.get('Loop')
        if (Items):
            self.InRun = True
            try:
                OnLoop = self.Actions.get('OnLoop')
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

        if (self.InRun):
            self.InRun = False

            Items = self.Runs.get('Finish')
            self.PostAll(Items)

            for Item in self.Obj:
                Class = self.Obj.get(Item)
                Class.DoFinish()


    def Load(self, aData):
        Log.Print(2, 'i', self.__class__.__name__, 'Load()')

        self.Clear()

        self.Data = aData.get("Classes", [])
        Include = aData.get("Include")
        if (Include):
            for Item in Include:
                self.CheckKey(Item.keys(), ['Enable', 'File'])
                if (Item.get('Enable', True)):
                    FileName = Item.get('File')
                    Data = self.LoadConf.Conf(FileName)
                    self.Data += Data

        if (not self.Data):
            Msg = Log.Print(1, 'e', self.__class__.__name__, 'Load()', 'Section `Classes` not found')
            raise Exception(Msg)

        Runs = aData.get("Run")
        if (not Runs):
            Msg = Log.Print(1, 'e', self.__class__.__name__, 'Load()', 'Section `Run` not found')
            raise Exception(Msg)

        self.Clear()

        Action = aData.get("Action")
        self.AddAction(Action, self.Actions)

        self.CheckKey(Runs.keys(), self.RunKeys)
        for Key in self.RunKeys:
            KeyData = Runs.get(Key)
            if (KeyData):
                for Item in Runs.get(Key):
                    self.AddRuns(Item, Key)

        for Item in self.Data:
            Alias  = Item.get('Alias')
            Enable = Item.get('Enable', True)
            if (not self.GetClass(Alias) and Enable):
                Log.Print(1, 'w', self.__class__.__name__, 'Load()', 'Alias %s not used' % Alias)

    def LoadFile(self, aFile, aSection = 'Gpio'):
        Log.Print(1, 'i', self.__class__.__name__, 'LoadFile()', '%s%s' % (self.LoadConf.Dir, aFile))

        self.File = aFile
        Data = self.LoadConf.Conf(aFile)
        self.Load(Data[aSection])

    def Reload(self):
        self.LoadFile(self.File)
