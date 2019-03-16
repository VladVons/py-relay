'''
Copyright:   (c) 2017, Vladimir Vons
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2017.10.15
License:     GNU, see LICENSE for more details
Description:
'''

import logging

__all__ = ['TLog', 'Log']


class TLog():
    def __init__(self):
        self.LogLevel = 1
        self.OnPrint  = None
        self.Tail     = ''
        self.Logger   = logging

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
        if (aLevel <= self.LogLevel):
            List, Dict = self._Parse(*aParam)
            Result = 'Log: Level:%d, Type:%s, List:%s, Dict:%s, Tail:%s' % (aLevel, aType, list(List), Dict, self.Tail)

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
        else:
            Result = ''
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
                            datefmt='%Y/%m/%d %H:%M:%S',
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
