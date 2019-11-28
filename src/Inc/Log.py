"""
Copyright:   (c) 2017, Vladimir Vons
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2017.10.15
License:     GNU, see LICENSE for more details
Description:
"""


import time
import inspect
import os
#
from Inc.Util import Obj


__all__ = ['TLog', 'Log', 'TLogConsole', 'TLogFile']



class TLogEcho():
    def Write(self, aMsg):
        raise NotImplementedError('class Write()')


class TLogConsole(TLogEcho):
    def Write(self, aMsg):
        print(aMsg)


class TLogFile(TLogEcho):
    def __init__(self, aName):
        self.Name = aName

    def Write(self, aMsg):
        with open(self.Name, 'a+') as hFile:
            hFile.write(aMsg + '\n')


class TLog():
    def __init__(self):
        self.Cnt      = 0
        self.LogLevel = 1
        self.Echoes   = []
        self.OnPrint  = None
        self.Tail     = ''
        self.DateFmt  = '%Y-%m-%d %H.%M.%S'

    def _GetStack(self, aStack):
        File   = os.path.split(aStack[1])
        Method = aStack[3]
        Line   = aStack[2]
        return '%s->%s(%s)' % (File, Method, Line)

    def AddEcho(self, aEcho):
        if (not isinstance(aEcho, TLogEcho)):
            raise ValueError('Class %s must be inherited from TLogEcho' % aEcho)
        self.Echoes.append(aEcho)

    def Format(self, aLevel, aType, *aParam):
        Data   = Obj.TupleToStr(aParam)
        Result = 'N:%s, D:%s, L:%d, T:%s, M:%s %s' % (self.Cnt, time.strftime(self.DateFmt), aLevel, aType, Data, self.Tail)
        return Result

    def Print(self, aLevel, aType, *aParam):
        Result = self.Format(aLevel, aType, aParam)
        if (aLevel <= self.LogLevel):
            self.Cnt += 1
            for Echo in self.Echoes:
                Echo.   Write(Result)
        return Result

    def PrintStack(self, aLevel, aType, aFunc, aVar):
        Items = inspect.stack()
        for Item in Items:
            if (Item.function == aFunc):
                Str = self._GetStack(Item) + ('->%s:%s' % (aVar, Item.frame.f_locals.get(aVar)))
                self.Print(aLevel, aType, Str)

    def PrintDbg(self, aLevel, aType, *aParam):
        Str = self._GetStack(inspect.stack()[1])
        return self.Print(aLevel, aType, Str, aParam)

    def PrintTo(self, aMsg, aToEcho = 0):
        Echoes = len(self.Echoes)
        if (aToEcho >= Echoes):
            aToEcho = Echoes - 1
        self.Echoes[aToEcho].Write(aMsg)

    def SetLogLevel(self, aValue):
        self.LogLevel = int(aValue)

    def SetTail(self, aValue):
        self.Tail = aValue

Log = TLog()
