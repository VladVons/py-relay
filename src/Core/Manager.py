"""
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2017.10.20
License:     GNU, see LICENSE for more details
Description:
"""


import time
import json
#
from Inc.Log         import Log
from Inc.Util        import UObj, UFS, UArr
from Inc.Param       import TDictReplace
from Inc.ConfEditor  import TEditorConf
from Core.ManagerSec import TSecAction, TSecClass, TSecDefault, TSecInclude, TSecRun, TSecVar


class TLoadConf():
    def __init__(self, aDir):
        self.Dir = aDir
        self.DictReplace = TDictReplace()

    def Path(self, aFile: str) -> str:
        return self.Dir + aFile

    def File(self, aFile: str) -> str:
        FilePath = self.Path(aFile)
        Result = UFS.LoadFromFileToStr(FilePath)
        if (not Result):
            Msg = Log.PrintDbg(1, 'e', 'Cant load file %s' % (FilePath))
            raise Exception(Msg)
        return Result

    def Macros(self, aFile: str):
        Files = [aFile, self.Path(aFile)]
        for File in Files:
            EditorConf = TEditorConf()
            EditorConf.LoadFromFile(File)
            Data = EditorConf.Section.KeyList()
            self.DictReplace.Data.update(Data)

    def Conf(self, aFile: str):
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
        self.File     = None
        self.LoadConf = TLoadConf(aDir)

        self.StartTimeVirt = time.time()
        self.StartTimeReal = time.time()
        self.SetStartTimeVirt(time.time())

        self.Init()

    def Init(self):
        self.SecVar     = TSecVar(self)
        self.SecAction  = TSecAction(self)
        self.SecClass   = TSecClass(self)
        self.SecDefault = TSecDefault(self)
        self.SecInclude = TSecInclude(self)
        self.SecRun     = TSecRun(self)

    def SetStartTimeVirt(self, aValue):
        self.StartTimeVirt = int(aValue)

    def Load(self, aData: dict):
        Log.PrintDbg(2, 'i')

        #self.SecClass.OnClass miss?
        #self.Init()

        Keys = ['Include', 'Default', 'Run', 'Action', 'Var']
        UArr.CheckDif(aData.keys(), Keys + ['Class'])
        self.SecInclude.Data = aData

        # call self.SecInclude, self.SecDefault etc
        for Key in Keys:
            Name = 'Sec' + Key
            ObjC  = getattr(self, Name)
            if (ObjC):
                Data = self.SecInclude.Data.get(Key)
                if (Data):
                    ObjC.Load(Data)
                else:
                    Log.PrintDbg(1, 'w', 'Empty section %s' % Key)
            else:
                Msg = Log.PrintDbg(1, 'e', 'Cant find method %s' % Name)
                raise Exception(Msg)

        #self.SecClass.SetParam('Sleep_1', 'Time', 5)

    async def Run(self):
        await self.SecRun.Run()

    def Stop(self):
        self.SecRun.Stop()

    def Info(self, aMode: str):
        Result = {}
        if (aMode == 'Attrs'):
            for Item in self.SecClass.Data:
                Result[Item] = self.SecClass.Data[Item].Param.GetAttrs()
        elif (aMode == 'Unused'):
            Result = self.SecClass.GetUnused()
        elif (aMode == 'Total'):
            Result['Class']  = len(self.SecClass.Data)
            Result['Unused'] = len(self.SecClass.GetUnused())
            Result['Loop']   = len(self.SecRun.Data.get('Loop', []))
            Result['Profile']   = self.LoadConf.Dir
            Result['UptimeApp'] = int(time.time() - self.StartTimeReal)
        return Result

    def InfoDump(self, aMode):
        Arr = self.Info(aMode)
        UObj.Dump(Arr)
        print('')

    def LoadFile(self, aFile: str):
        Log.PrintDbg(1, 'i', '%s%s' % (self.LoadConf.Dir, aFile))

        self.File = aFile
        Data = self.LoadConf.Conf(aFile)
        self.Load(Data)

        self.InfoDump('Unused')
        self.InfoDump('Total')

    def Reload(self):
        self.LoadFile(self.File)
