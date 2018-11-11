'''
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2017.10.15
License:     GNU, see LICENSE for more details
Description: 10
'''

import time
#
from Inc.Log      import Log
from Inc.Param    import TDictParam, TDictCall, TRange
from Inc.Thread   import TThreadReadList
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
        self.ExtParam['Parameter'] = self.ExtParametr
        self.ExtParam['Action']    = self.ExtAction
        self.ExtParam['Start']     = self.Exec.Parse
        self.ExtParam['Finish']    = self.Exec.Parse

    def _LoadClass(self, aParam, aData):
        return aData.get('Parent')._LoadClass(aParam, self, aData.get('Depth') - 1)

    def ExtAction(self, aKey, aParam, aData):
        self.Manager.AddAction(aParam, self.Actions)

    def ExtParametr(self, aKey, aParam, aData):
        if (aParam and aParam.get('ClassRef')):
            self._LoadClass(aParam, aData)
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
        OnAvtionClass = self.Actions.get(aKey)
        if (OnAvtionClass is None):
            OnAvtionClass = self.Manager.Actions.get(aKey)

        if (OnAvtionClass):
            if (not self.IsInRecursion(OnAvtionClass, self)):
                OnAvtionClass.Post(self, aValue, {'Key': aKey})

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
        self.PostCnt    = 0
        self.Key        = ''
        self.OnValue    = None
        self.Range = TRange()

        self.Avg = Num.TAvg()
        #self.Avg.Enable = False

        self.Param.AddDefPattern( {'Enable': True, 'Periodic': 1, 'Delay': 0, 'Debug': False, 'AllValue': False, 'WaitValue': 3600*24})
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
                Log.Print(0, 'i', self.__class__.__name__, 'Post()', 'Alias:%s, CAlias:%s, Value:%s, Result:%s' % (self.Alias, self.GetAlias(aCaller), aValue, Result))
        return Result

    def SetValue(self, aValue):
        Log.Print(3, 'i', self.__class__.__name__, 'SetValue()', 'Alias %s, Value %s' % (self.Alias, aValue))

        if ((self.Value != aValue) or (self.Param.AllValue) or (self.GetUptime() - self.LastChange > self.Param.WaitValue)):
            if (aValue is None):
                self.Action('OnError', aValue)
                return

            if (not self.Range.Check(self.Key, aValue)):
                self.Action('OnRange', aValue)
                return

            if (self.OnValue):
                aValue = self.OnValue(self, aValue)
            self.Value = aValue
            self.LastChange = self.GetUptime()
            self.Action('OnValue', aValue)

            self.Exec.Conditions('Triggers')


class TSensor(TDevice):
    def __init__(self, aParent):
        TDevice.__init__(self, aParent)
        self.Param.AddDefPattern({'Round': 0.1, 'Avg': 3})

    def DoParameterExit(self):
        self.Avg.SetSize(self.Param.Avg)
        self._Get()

    def DoPost(self, aCaller, aValue, aData):
        Value = self._Get()
        self.SetValue(Value)
        return True

    def _Get(self):
        if (self.Provider):
            if (self.Key):
                Result = self.Provider.Get(self.Key)
            else:
                Result = self.Provider.Get()
        else:
            # get previous vaue
            Result = self.Value
        return self.Round(Result)


    def Round(self, aValue):
        if (self.Param.Round is None):
            Result = aValue
        else:
            if (not self.Avg.Check(aValue)):
                self.Action('OnAvg', aValue)
            self.Avg.Add(aValue)
            Value = self.Avg.GetAvg()

            try:
                Result = Num.RoundPart(Value, self.Param.Round)
            except:
                Result = 0
                Log.Print(1, 'x', self.__class__.__name__, 'Round()', 'Alias: %s, Value: %s' % (self.Alias, aValue))
        return Result


class TRelay(TDevice):
    def __init__(self, aParent):
        # super().__init__(aParent) # __need 3.5
        TDevice.__init__(self, aParent)
        self.Param.AddDefPattern( {'State':False, 'Invert':False} )
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


#=== Read slow devices.
class TSensorThredRead(TSensor):
    def __init__(self, aParent):
        TSensor.__init__(self, aParent)
        self.Thread = None

    def CreateThread(self):
        if (not self.Provider):
            Msg = Log.Print(1, 'e', self.__class__.__name__, 'CreateThread()', 'Alias %s. No `Provider` assigned' % (self.Alias))
            raise NotImplementedError(Msg)

        self.Thread   = TThreadReadList(self._ReadCallBack)
        self.Thread.Periodic = self.Param.Periodic
        self.Thread._SetData(self._ReadCallBack())
        self.Thread.Create()

    # call slow method from thread
    def _ReadCallBack(self):
        return self.Provider.Get()

    def _Get(self):
        Data = self.Thread.GetData()
        if (Data is None):
            # get previous value
            Result = self.Value
        else:
            Result = Data
        return self.Round(Result)


# === Read slow devices.
class TProviderThredRead(TDeviceBase):
    def __init__(self, aParent):
        TDeviceBase.__init__(self, aParent)
        self.Thread = None

        self.Param.AddDefPattern({'Periodic': 1})

    def CreateThread(self):
        if (not self.Provider):
            Msg = Log.Print(1, 'e', self.__class__.__name__, 'CreateThread()', 'Alias %s. Not `Provider` assigned' % (self.Alias))
            raise NotImplementedError(Msg)

        self.Thread = TThreadReadList(self._ReadCallBack)
        self.Thread._SetData(self._ReadCallBack())
        self.Thread.Periodic = self.Param.Periodic
        self.Thread.Create()

    # call slow method from thread
    def _ReadCallBack(self):
        Result = self.Provider.ReadTry()
        return Result

    def Get(self, aKey = ''):
        Result = self.Thread.GetData()
        if (Result and aKey): 
            Result = Result.get(aKey)
        return Result
