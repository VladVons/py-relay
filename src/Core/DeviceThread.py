'''
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2017.10.15
License:     GNU, see LICENSE for more details

Description: Access slow devices using thread
'''

from Inc.Log      import Log
from Inc.Param    import TDictParam, TDictCall, TRange
from Inc.Thread   import TThreadReadList
from Core.Device  import TSensor, TDeviceBase


class TSensorThreadRead(TSensor):
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
class TProviderThreadRead(TDeviceBase):
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
