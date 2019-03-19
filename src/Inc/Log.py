'''
Copyright:   (c) 2017, Vladimir Vons
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2017.10.15
License:     GNU, see LICENSE for more details
Description:
'''

import logging
import time

__all__ = ['TLog', 'Log']


class TLog():
    def __init__(self):
        self.LogLevel = 1
        self.OnPrint  = None
        self.Tail     = ''
        self.Logger   = logging
        self.Format   = '%Y/%m/%d %H:%M:%S' 

    def _Parse(self, *aParam):
        List = []
        Dict = {}
        for Param in aParam:
            if (type(Param) == dict):
                Dict.update(Param)
            else:
                List.append(Param)
        return List, Dict


    def Print(self, aLevel, aType, *aParam):
        if (aLevel > self.LogLevel):
            return ''

        List, Dict = self._Parse(*aParam)

        Str = 'Log: %s, Level:%d, Type:%s, List:%s'
        Arr = [time.strftime(self.Format), aLevel, aType, list(List)]
        if (Dict):
            Arr.append(Dict)
            Str += ', Dict:%s'

        if (self.Tail):
            Arr.append(self.Tail)
            Str += ', Tail:%s'

        Result = Str % tuple(Arr)

        if (aType == 'w'):
            self.Logger.warn(Result)
        elif (aType == 'e'):
            self.Logger.error(Result)
        elif (aType == 'x'):
            self.Logger.exception(Result)
        else:
            self.Logger.info(Result)

        if (self.OnPrint):
            self.OnPrint(aLevel, aType, Dict)

        return Result

    def Warn(self, aLevel, aMsg):
        self.Print(aLevel, 'w', [aMsg])

    def SetLogLevel(self, aValue):
        self.LogLevel = int(aValue)

    def SetConsole(self):
        self.Logger = logging.getLogger('MyConsole')
        self.Logger.addHandler(logging.StreamHandler())

        # by default print only warnings
        #self.Logger.setLevel(logging.INFO)

    def SetFile(self, aFile):
        # Format = '[%(asctime)s], %(module)s->%(funcName)s->%(lineno)d,
        # %(levelname)s: %(message)s'
        Format = '[%(asctime)s], %(levelname)s:%(message)s'
        try:
            logging.basicConfig(
                            level=logging.INFO,
                            format=Format,
                            datefmt=self.Format,
                            filename=aFile,
                            filemode='a')
            print ('%s->SetFile(): %s' % (self.__class__.__name__, aFile))
            Result = True
        except IOError as E:
            print ('%s->SetFile() Error: %s: %s' % (self.__class__.__name__, E, aFile))
            Result = False
        return Result

    def SetTail(self, aValue):
        self.Tail = aValue

Log = TLog()
