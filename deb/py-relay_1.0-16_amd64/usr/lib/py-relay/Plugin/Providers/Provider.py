'''
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2017.11.07
License:     GNU, see LICENSE for more details

Help:
pip search adafruit

Description:
Abstract base classes for Providers
'''

import socket
#
from Inc.Log    import Log
from Inc.Util   import Net


class TProvider():
    def ReadTry(self, aValue = None):
        try:
            Result = self.Read(aValue)
        except Exception as E:
            Log.Print(1, 'x', self.__class__.__name__, 'ReadTry()', aValue, E)
            Result = None
        return Result

    def WriteTry(self, aValue):
        try:
            Result = self.Write(aValue)
        except Exception as E:
            Result = None
            Log.Print(1, 'x', self.__class__.__name__, 'WriteTry()', aValue, E)
        return Result

    def Read(self, aValue):
        Msg = Log.Print(1, 'x', self.__class__.__name__, 'Read()', 'Not implemented')
        raise NotImplementedError(Msg)

    def Write(self, aValue):
        Msg = Log.Print(1, 'x', self.__class__.__name__, 'Write()', 'Not implemented')
        raise NotImplementedError(Msg)

    def Get(self):
        Msg = Log.Print(1, 'x', self.__class__.__name__, 'Get()', 'Not implemented')
        raise NotImplementedError(Msg)

    def GetKey(self, aKey):
        Data = self.ReadTry(aKey)
        if (Data):
            Result = Data.get(aKey)
        else:
            Result = None
        return Result


class TProviderHTTP(TProvider):
    def Read(self, aUrl):
        return Net.GetHttpData(aUrl)
