'''
Copyright:   (c) 2017, Vladimir Vons
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2017.10.15
License:     GNU, see LICENSE for more details
Description:
'''


import time
import os

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
        self.DateFmt  = '%Y-%m-%d %H:%M:%S'

    def AddEcho(self, aEcho):
        if (not isinstance(aEcho, TLogEcho)):
            raise ValueError('Class %s must be inherited from TLogEcho' % aEcho)

        self.Echoes.append(aEcho)

    def _Parse(self, *aParam):
        List = []
        Dict = {}
        for Param in aParam:
            if (type(Param) == dict):
                Dict.update(Param)
            else:
                List.append(Param)
        return List, Dict

    def Format(self, aLevel, aType, *aParam):
        List, Dict = self._Parse(aParam)

        Str = '%s, %s, Level:%d, Type:%s, List:%s'
        Arr = [self.Cnt, time.strftime(self.DateFmt), aLevel, aType, list(List)]
        if (Dict):
            Arr.append(Dict)
            Str += ', Dict:%s'

        if (self.Tail):
            Arr.append(self.Tail)
            Str += ', Tail:%s'

        Result = Str % tuple(Arr)
        return Result

    def Print(self, aLevel, aType, *aParam):
        Result = self.Format(aLevel, aType, aParam)
        if (aLevel <= self.LogLevel):
            self.Cnt += 1
            for Echo in self.Echoes:
                Echo.Write(Result)
        return Result

    def PrintStr(self, aLevel, aMsg):
        self.Print(aLevel, 'i', [aMsg])

    def SetLogLevel(self, aValue):
        self.LogLevel = int(aValue)

    def SetTail(self, aValue):
        self.Tail = aValue

Log = TLog()
