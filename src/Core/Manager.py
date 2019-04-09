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
from Inc.Log         import Log
from Inc.Util        import Obj, FS, Arr
from Inc.Param       import TDictReplace
from Inc.ConfEditor  import TEditorConf
from Core.ManagerSec import TSecAction, TSecClass, TSecDefault, TSecInclude, TSecRun


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
            Msg = Log.PrintDbg(1, 'e', 'Cant load file %s' % (FilePath))
            raise Exception(Msg)
        return Result

    def Macros(self, aFile):
        FilePath = self.Path(aFile)
        EditorConf = TEditorConf()
        EditorConf.LoadFromFile(FilePath)
        self.DictReplace.Data = EditorConf.Section.KeyList()

    def Conf(self, aFile):
        Log.PrintDbg(3, 'i', 'Load file %s' % aFile)

        Data = self.File(aFile)
        try:
            Data = json.loads(Data)
        except Exception as E:
            Msg = Log.PrintDbg(1, 'e', 'File %s' % (aFile), E)
            raise Exception(Msg)

        Result = self.DictReplace.ParseVar(Data)
        if (self.DictReplace.Err):
            Msg = Log.PrintDbg(1, 'e', 'Unknown macros %s' % self.DictReplace.Err)
            raise ValueError(Msg)
        return Result


class TManager():
    def __init__(self, aParent, aDir):
        self.Parent   = aParent
        self.LoadConf = TLoadConf(aDir)

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
        Log.PrintDbg(2, 'i')

        #self.SecClass.OnClass miss?
        #self.Init()

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
                    Log.PrintDbg(1, 'w', 'Empty section %s' % Key)
            else:
                Msg = Log.PrintDbg(1, 'e', 'Cant find method %s' % Name)
                raise Exception(Msg)

        #self.SecClass.SetParam('Sleep_1', 'Time', 5)

    def Run(self):
        self.SecRun.Run()

    def Stop(self):
        self.SecRun.Stop()

    def Info(self, aMode):
        if (aMode == 'Attrs'):
            Arr = {}
            for Item in self.SecClass.Data:
                Arr[Item] = self.SecClass.Data[Item].Param.GetAttrs()
            Obj.Dump(Arr)
        elif (aMode == 'Unused'):
            Unused = self.SecClass.GetUnused()
            for Item in Unused:
                Log.PrintDbg(1, 'w', 'Alias %s not used' % Item)
        elif (aMode == 'Total'):
            Arr = {}
            Arr['Class']  = len(self.SecClass.Data)
            Arr['Unused'] = len(self.SecClass.GetUnused())
            Arr['Loop']   = len(self.SecRun.Data.get('Loop', []))
            Obj.Dump(Arr)
        else:
            Log.PrintDbg(1, 'w', 'Unknown option %s' % aMode)
        print('')

    def LoadFile(self, aFile):
        Log.PrintDbg(1, 'i', '%s%s' % (self.LoadConf.Dir, aFile))

        self.File = aFile
        Data = self.LoadConf.Conf(aFile)
        self.Load(Data)

        self.Info('Unused')
        self.Info('Total')

    def Reload(self):
        self.LoadFile(self.File)
