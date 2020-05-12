"""
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2017.10.15
License:     GNU, see LICENSE for more details
Description: 
"""

import time
import inspect
import sys
#
from Inc.Log         import Log
from Inc.Param       import TDictParam, TDictCall, TRange
from Inc.Util        import UNum
from Core.ExecParse  import TExecParse
from Inc.Import      import TDynImport


class TDeviceParse(object):
    def __init__(self, aParent):
        self.Parent     = aParent
        self.Manager    = None
        self.Provider   = None
        self.Alias      = None
        self.Descr      = None
        self.Data       = None
        self.HasParam   = False
        self.Actions    = {}

        self.Exec = TExecParse(self)
        Api = self._ImportExecApi()
        self.Exec.SetApi(Api)

        self.Param      = TDictParam()
        self.ExtParam   = TDictCall()
        self.ExtParam['Parameter'] = self.ExtParameter
        self.ExtParam['Action']    = self.ExtAction
        self.ExtParam['Start']     = self.Exec.Parse
        self.ExtParam['Finish']    = self.Exec.Parse

    def _ImportExecApi(self):
        FileName  = 'Plugin/Lib/ExecApiEx.py'
        ClassName = 'TExecApiEx'

        # load dynamic trick for 'nuitka' compiler
        Import = TDynImport()
        Import.ParseFile(FileName)
        TClass = Import.GetInstance(ClassName)
        if (TClass):
            Result = TClass(self)
        else:
            Log.PrintDbg(1, 'w', 'Extension class %s not found in %s' % (ClassName, FileName))
            from Core.ExecApi import TExecApi
            Result = TExecApi(self)
        return Result

    @property
    def Options(self):
        return self.Manager.Parent.Options

    def _LoadClass(self, aParam: dict, aData: dict):
        return aData.get('Parent').Parse(aParam, self)

    def ExtAction(self, aKey, aParam, aData):
        if (aParam is None):
            aParam = self.Manager.SecDefault.GetSecPath('Action', self, [])
        self.Manager.SecAction.Add(aParam, self.Actions)

    def ExtParameter(self, aKey, aParam, aData):
        if (aParam and aParam.get('ClassRef')):
            self._LoadClass(aParam, aData)

        Def = self.Manager.SecDefault.GetSecPath('Parameter', self, {})
        aParam.update(Def)
        self.DoParameter(aParam)

        self.DoParameterExit()
        self.HasParam = True

    def GetUptime(self) -> int:
        Now = int(time.time())
        return Now - self.Manager.StartTimeVirt

    def GetUptimeReal(self) -> int:
        return int(time.time() - self.Manager.StartTimeReal)

    def DoStart(self):
        self.Exec.Conditions('Start')
        self.DoStartExit()

    def DoStartExit(self):
        pass

    def DoFinish(self):
        self.Exec.Conditions('Finish')

    @staticmethod
    def IsInRecursion(aOnClass, aClass) -> bool:
        while aClass:
            if (aOnClass == aClass):
                return True
            aClass = aClass.Parent
        return False

    def Action(self, aKey: str, aValue):
        OnActionClass = self.Actions.get(aKey)
        if (OnActionClass is None):
            OnActionClass = self.Manager.SecAction.Data.get(aKey)

        if (OnActionClass):
            if (not self.IsInRecursion(OnActionClass, self)):
                OnActionClass.Post(self, aValue, {'Key': aKey})

    def DoParameter(self, aParam):
        #Msg = Log.PrintDbg(1, 'e', 'Not implemented')
        #raise NotImplementedError(Msg)
        pass

    def DoParameterExit(self):
        pass

    def GetProvider(self):
        raise NotImplementedError('')


class TDevice(TDeviceParse):
    def __init__(self, aParent):
        super().__init__(aParent)

        self.UpdateTime = 0
        self._Value     = 0
        self.Protected  = False
        self.PostCnt    = 0
        self.Err        = False
        self.MaxErr     = 0
        self.Key        = ''
        self.OnValue    = None
        self.Caller     = None
        self.Range      = TRange()

        self.Avg = UNum.TAvg()
        #self.Avg.Enable = False

        Pattern = {
            'Enable':   True,
            'Public':   False,
            'Periodic': 1,
            'Delay':    0,
            'Debug':    False,
            'AllValue': False,
            'Refresh':  3600,
            'OnValue':  True,
            'MaxErr':   3,
            'ForceLog': False
        }
        self.Param.AddDefPattern(Pattern)

        self.ExtParam['Start']    = self.Exec.Parse
        self.ExtParam['Checks']   = self.Exec.Parse
        self.ExtParam['Triggers'] = self.Exec.Parse

    @property
    def Direction(self) -> int:
        return self.Avg.Direction

    @property
    def LastUpdate(self) -> int:
        return self.GetUptime() - self.UpdateTime

    @staticmethod
    def GetAlias(aCaller) -> str:
        Result = ''
        if (aCaller):
            Result = aCaller.Alias
        return Result

    def DoPostBegin(self, aCaller, aValue, aData):
        return True

    def DoLoop(self):
        pass

    def DoPost(self, aCaller, aValue, aData):
        pass

    def Post(self, aCaller, aValue, aData = None) -> bool:
        Log.PrintDbg(3, 'i', 'Alias:%s, CAlias:%s, Value:%s' % (self.Alias, self.GetAlias(aCaller), aValue))
        if (self.Options.DebugAlias):
            Msg = Log.Format(1, 'i', self.__class__.__name__, 'Post()', 'Alias:%s, CAlias:%s, Value:%s' % (self.Alias, self.GetAlias(aCaller), aValue))
            Log.PrintTo(Msg)

        #Level = len(inspect.stack())
        #if (Level > 100):
        #    Log.PrintStack(1, 'x', 'Post', 'aCaller')
        #    Msg = Log.PrintDbg(1, 'x', 'Recursion level is to deep %s' % Level)
        #    raise RecursionError(Msg)

        Result = True
        self.PostCnt += 1
        if (self.Param.Enable and (self.PostCnt % self.Param.Periodic == 0) and (self.PostCnt >= self.Param.Delay)):
            self.Manager.SecRun.InClass = self
            self.Caller = aCaller

            if (self.Param.ForceLog):
                Log.PrintDbg(0, 'i', 'Alias:%s, CAlias:%s, Value:%s' % (self.Alias, self.GetAlias(aCaller), aValue))

            if (self.DoPostBegin(aCaller, aValue, aData)):
                if (self.Exec.Conditions('Checks')):
                    Result = self.DoPost(aCaller, aValue, aData)

            if (self.Param.Debug):
                Log.PrintDbg(1, 'i', 'Alias:%s, CAlias:%s, Value:%s, Result:%s' % (self.Alias, self.GetAlias(aCaller), aValue, Result))
        return Result

    def GetValue(self) -> int:
        return self._Value

    def SetValue(self, aValue) -> bool:
        Log.PrintDbg(3, 'i', 'Alias %s, Value %s' % (self.Alias, aValue))
        Result = False

        if (self.Protected):
            return Result

        self.Err = not self.CheckValue(aValue)
        if (self.Err):
            self.Exec.Conditions('Triggers')
            return Result

        if (self._Value != aValue) or (self.Param.AllValue) or (self.Param.Refresh > 0 and self.LastUpdate > self.Param.Refresh):
            if (self.OnValue):
                aValue = self.OnValue(self, aValue)
            self._Value = aValue

            if (self.Param.OnValue):
                self.Action('OnValue', aValue)

            self.Exec.Conditions('Triggers')

            self.UpdateTime = self.GetUptime()
            self.MaxErr     = self.Param.MaxErr
            Result = True

        return Result

    def SetValueForce(self, aValue) -> bool:
        self.Protected = False
        Result = self.SetValue(aValue)
        self.Protected = True
        return Result

    def CheckValue(self, aValue: int) -> bool:
        if (aValue is None):
            self.MaxErr -= 1
            if (self.MaxErr < 0):
                self.Value  = 0
                if (self.MaxErr % self.Param.MaxErr == 0):
                    Log.PrintDbg(1, 'i', 'Invalid value. Alias: %s, Value: None' % (self.Alias))
                    self.Action('OnError', self.Value)
            return False

        if (not self.Range.Check(self.Key, aValue)):
            Log.PrintDbg(1, 'i', 'Invalid range. Alias: %s, Value: %s' % (self.Alias, aValue))
            self.Action('OnRange', aValue)
            return False

        return True

    Value = property(GetValue, SetValue)


class TSensor(TDevice):
    def __init__(self, aParent):
        super().__init__(aParent)

        Pattern = {'Round': 0.1, 'Avg': 3}
        self.Param.AddDefPattern(Pattern)

    def DoParameterExit(self):
        self.MaxErr = self.Param.MaxErr
        self.Avg.SetSize(self.Param.Avg)
        self._Get()

    def DoPost(self, aCaller, aValue, aData):
        Value  = self._Get()
        Result = self.SetValue(Value)
        return Result

    def _Get(self):
        if (self.Provider):
            if (self.Key):
                Result = self.Provider.Get(self.Key)
            else:
                Result = self.Provider.Get()
            return self.Round(Result)
        else:
            Msg = Log.PrintDbg(1, 'x', 'Alias %s. No `Provider` assigned' % (self.Alias))
            raise NotImplementedError(Msg)

    def Round(self, aValue):
        if (aValue is None):
            Result = None
        elif (self.Param.Round is None):
            Result = aValue
        else:
            if (not self.Avg.Check(aValue)):
                self.Action('OnAvg', aValue)
            self.Avg.Add(aValue)
            Value = self.Avg.GetAvgRound()

            try:
                Result = UNum.RoundPart(Value, self.Param.Round)
            except:
                Result = None
                Log.PrintDbg(1, 'x', 'Alias: %s, Value: %s' % (self.Alias, aValue))
        return Result


class TControl(TDevice):
    def __init__(self, aParent):
        super().__init__(aParent)
        self.Range.SetMirror(None, 999999)

    def DoPost(self, aCaller, aValue, aData):
        self._Set(aCaller, aValue)
        self.SetValue(aValue)
        return True

    def _Set(self, aCaller, aValue):
        if (self.Provider):
            self.Provider.Set(aCaller, aValue)
        else:
            Msg = Log.PrintDbg(1, 'x', 'Alias %s. No `Provider` assigned' % (self.Alias))
            raise NotImplementedError(Msg)

    def _Get(self):
        return self.Provider.Get()
