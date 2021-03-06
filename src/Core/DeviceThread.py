"""
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2017.10.15
License:     GNU, see LICENSE for more details

Description: Access slow devices using thread
"""

from Inc.Log      import Log
from Inc.Thread   import TThreadReadList
from Core.Device  import TSensor, TDeviceParse


class TSensorThreadRead(TSensor):
    def __init__(self, aParent):
        super().__init__(aParent)
        self.Thread = None

    def CreateThread(self):
        if (not self.Provider):
            Msg = Log.PrintDbg(1, 'e', 'Alias %s. No `Provider` assigned' % (self.Alias))
            raise NotImplementedError(Msg)

        self.Thread = TThreadReadList(self._ReadCallBack)
        self.Thread.Periodic = self.Param.Periodic
        self.Thread._SetData(self._ReadCallBack())
        self.Thread.Create()

    # call slow method from thread
    def _ReadCallBack(self):
        return self.Provider.Get()

    def _Get(self):
        Data = self.Thread.GetData()
        return self.Round(Data)


# === Read slow devices.
class TProviderThreadRead(TDeviceParse):
    def __init__(self, aParent):
        super().__init__(aParent)
        self.Thread = None

        self.Param.AddDefPattern({'Periodic': 1})

    def CreateThread(self):
        if (not self.Provider):
            Msg = Log.PrintDbg(1, 'e', 'Alias %s. Not `Provider` assigned' % (self.Alias))
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
