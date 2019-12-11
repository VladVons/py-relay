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
from Inc.Util import UObj


__all__ = ['TLog', 'Log', 'TLogConsole', 'TLogFile']



class TLogEcho():
    def Write(self, aMsg: str):
        raise NotImplementedError('class Write()')


class TLogConsole(TLogEcho):
    def Write(self, aMsg: str):
        print(aMsg)


class TLogFile(TLogEcho):
    def __init__(self, aName: str):
        self.Name = aName

    def Write(self, aMsg: str):
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

    def _GetStack(self, aStack) -> str:
        CurDir    = os.getcwd()
        Dir, File = os.path.split(aStack[1])
        Path   = Dir.replace(CurDir, '').strip('/') + '/' + File
        Method = aStack[3]
        Line   = aStack[2]
        return '%s->%s(%s)' % (Path, Method, Line)

    def AddEcho(self, aEcho: TLogEcho):
        if (not isinstance(aEcho, TLogEcho)):
            raise ValueError('Class %s must be inherited from TLogEcho' % aEcho)
        self.Echoes.append(aEcho)

    def Format(self, aLevel: int, aType: str, *aParam) -> str:
        Data   = UObj.TupleToStr(aParam)
        Result = 'N:%s, D:%s, L:%d, T:%s, M:%s %s' % (self.Cnt, time.strftime(self.DateFmt), aLevel, aType, Data, self.Tail)
        return Result

    def Print(self, aLevel: int, aType: str, *aParam) -> str:
        Result = self.Format(aLevel, aType, aParam)
        if (aLevel <= self.LogLevel):
            self.Cnt += 1
            for Echo in self.Echoes:
                Echo.   Write(Result)
        return Result

    def PrintStack(self, aLevel: int, aType: str, aFunc, aVar):
        Items = inspect.stack()
        for Item in Items:
            if (Item.function == aFunc):
                Str = self._GetStack(Item) + ('->%s:%s' % (aVar, Item.frame.f_locals.get(aVar)))
                self.Print(aLevel, aType, Str)

    def PrintDbg(self, aLevel: int, aType: str, *aParam) -> str:
        Str = self._GetStack(inspect.stack()[1])
        return self.Print(aLevel, aType, Str, aParam)

    def PrintTo(self, aMsg: str, aToEcho = 0):
        Echoes = len(self.Echoes)
        if (aToEcho >= Echoes):
            aToEcho = Echoes - 1
        self.Echoes[aToEcho].Write(aMsg)

    def SetLogLevel(self, aValue: int):
        self.LogLevel = int(aValue)

    def SetTail(self, aValue: str):
        self.Tail = aValue

Log = TLog()
