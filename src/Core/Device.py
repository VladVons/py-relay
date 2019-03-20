'''
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2017.10.15
License:     GNU, see LICENSE for more details
Description: 
'''

import time
#
from Inc.Log      import Log
from Inc.Param    import TDictParam, TDictCall, TRange
from Inc.Util     import Num
from Core.ExecApi import TExecApi


class TDeviceBase(object):
    def __init__(self, aParent):
        self.Parent     = aParent
        self.Manager    = None
        self.Provider   = None
        self.Alias      = None
        self.Descr      = None
        self.HasParam   = False
        self.Actions    = {}

        self.Param      = TDictParam()
        self.Exec       = TExecApi(self)

        self.ExtParam   = TDictCall()
        self.ExtParam['Parameter'] = self.ExtParameter
        self.ExtParam['Action']    = self.ExtAction
        self.ExtParam['Start']     = self.Exec.Parse
        self.ExtParam['Finish']    = self.Exec.Parse

    def _LoadClass(self, aParam, aData):
        return aData.get('Parent').Parse(aParam, self)

    def ExtAction(self, aKey, aParam, aData):
        self.Manager.AddAction(aParam, self.Actions)

    def ExtParameter(self, aKey, aParam, aData):
        if (aParam and aParam.get('ClassRef')):
            self._LoadClass(aParam, aData)
        self.Manager.SecDefault.SetClassParam(self)
        self.DoParameter(aParam)
        self.DoParameterExit()
        self.HasParam = True

    def GetUptime(self):
        Now = int(time.time())
        return Now - self.Manager.StartTimeVirt

    def GetUptimeReal(self):
        return int(time.time()) - self.Manager.StartTimeReal

    def DoStart(self):
        self.Exec.Conditions('Start')
        self.DoStartExit()

    def DoStartExit(self):
        pass

    def DoFinish(self):
        self.Exec.Conditions('Finish')

    # @staticmethod
    def IsInRecursion(self, aOnClass, aClass):
        while aClass:
            if (aOnClass == aClass):
                return True
            aClass = aClass.Parent
        return False

    def Action(self, aKey, aValue):
        OnActionClass = self.Actions.get(aKey)
        if (OnActionClass is None):
            OnActionClass = self.Manager.SecAction.Data.get(aKey)

        if (OnActionClass):
            if (not self.IsInRecursion(OnActionClass, self)):
                OnActionClass.Post(self, aValue, {'Key': aKey})

    def DoParameter(self, aParam):
        Msg = Log.Print(1, 'e', self.__class__.__name__, 'DoParameter()', 'Not implemented')
        raise NotImplementedError(Msg)

    def DoParameterExit(self):
        pass

    def GetProvider(self):
        Msg = Log.Print(1, 'e', self.__class__.__name__, 'GetProvider()', 'Not implemented')
        raise NotImplementedError(Msg)


class TDevice(TDeviceBase):
    def __init__(self, aParent):
        TDeviceBase.__init__(self, aParent)

        self.LastChange = 0
        self.Value      = 0
        self.PrevValue  = 0
        self.PostCnt    = 0
        self.MaxErr     = 0
        self.Key        = ''
        self.OnValue    = None
        self.Range      = TRange()

        self.Avg = Num.TAvg()
        #self.Avg.Enable = False

        Pattern = {'Enable': True, 'Periodic': 1, 'Delay': 0, 'Debug': False, 'AllValue': False, 'Refresh': 3600, 'OnValue': True, 'MaxErr': 5}
        self.Param.AddDefPattern(Pattern)

        self.ExtParam['Checks']   = self.Exec.Parse
        self.ExtParam['Triggers'] = self.Exec.Parse

    def GetAlias(self, aCaller):
        Result = ''
        if (aCaller):
            Result = aCaller.Alias
        return Result

    def DoPostBegin(self, aCaller, aValue, aData):
        return True

    def DoPost(self, aCaller, aValue, aData):
        pass

    def Post(self, aCaller, aValue, aData = None):
        Log.Print(3, 'i', self.__class__.__name__, 'Post()', 'Alias:%s, CAlias:%s, Value:%s' % (self.Alias, self.GetAlias(aCaller), aValue))

        Result = True
        self.PostCnt += 1
        if (self.Param.Enable and (self.PostCnt % self.Param.Periodic == 0) and (self.PostCnt >= self.Param.Delay)):
            if (self.DoPostBegin(aCaller, aValue, aData)):
                if (self.Exec.Conditions('Checks')):
                    Result = self.DoPost(aCaller, aValue, aData)

            if (self.Param.Debug):
                Log.Print(1, 'i', self.__class__.__name__, 'Post()', 'Alias:%s, CAlias:%s, Value:%s, Result:%s' % (self.Alias, self.GetAlias(aCaller), aValue, Result))
        return Result

    def SetValue(self, aValue):
        Log.Print(3, 'i', self.__class__.__name__, 'SetValue()', 'Alias %s, Value %s' % (self.Alias, aValue))

        if (not self.CheckValue(aValue)):
            self.Exec.Conditions('Triggers')
            return False

        Result = False
        if (self.Value != aValue) or (self.Param.AllValue) or (self.GetUptime() - self.LastChange > self.Param.Refresh):
            if (self.OnValue):
                aValue = self.OnValue(self, aValue)
            self.Value = aValue

            if (self.Param.OnValue):
                self.Action('OnValue', aValue)

            self.Exec.Conditions('Triggers')

            self.LastChange = self.GetUptime()
            self.PrevValue  = aValue 
            self.MaxErr     = self.Param.MaxErr
            Result = True

        return Result

    def CheckValue(self, aValue):
        if (aValue is None):
            self.MaxErr -= 1
            if (self.MaxErr < 0):
                self.Value  = 0
                if (self.MaxErr % self.Param.MaxErr == 0):
                    Log.Print(1, 'i', self.__class__.__name__, 'CheckValue()', 'Invalid value. Alias: %s, Value: None' % (self.Alias))
                    self.Action('OnError', self.Value)
            return False

        if (not self.Range.Check(self.Key, aValue)):
            Log.Print(1, 'i', self.__class__.__name__, 'CheckValue()', 'Invalid range. Alias: %s, Value: %s' % (self.Alias, aValue))
            self.Action('OnRange', aValue)
            return False

        return True


class TSensor(TDevice):
    def __init__(self, aParent):
        TDevice.__init__(self, aParent)

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
            Msg = Log.Print(1, 'x', self.__class__.__name__, '_Get()', 'Alias %s. No `Provider` assigned' % (self.Alias))
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
            Value = self.Avg.GetAvg()

            try:
                Result = Num.RoundPart(Value, self.Param.Round)
            except:
                Result = None
                Log.Print(1, 'x', self.__class__.__name__, 'Round()', 'Alias: %s, Value: %s' % (self.Alias, aValue))
        return Result


class TRelay(TDevice):
    def __init__(self, aParent):
        # super().__init__(aParent) # __need 3.5
        TDevice.__init__(self, aParent)

        Pattern = {'State':False, 'Invert':False}
        self.Param.AddDefPattern(Pattern)

        self.Range.Set(None, [0, 1])

    def DoPost(self, aCaller, aValue, aData):
        self._Set(aCaller, aValue)
        self.SetValue(aValue)
        return True

    def _Set(self, aCaller, aValue):
        if (self.Provider):
            self.Provider.Set(aCaller, int(aValue) ^ self.Param.Invert)
        else:
            Msg = Log.Print(1, 'x', self.__class__.__name__, '_Set()', 'Alias %s. No `Provider` assigned' % (self.Alias))
            raise NotImplementedError(Msg)

    def _Get(self):
        Value = int(self.Provider.Get())
        return Value ^ self.Param.Invert


class TControl(TRelay):
    def __init__(self, aParent):
        TRelay.__init__(self, aParent)
        self.Range.SetMirror(None, 999999)
