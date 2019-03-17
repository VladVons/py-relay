'''
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2017.11.09
License:     GNU, see LICENSE for more details
Description:
'''

import os
#
from Inc.Log   import Log
from Inc.Util  import FS
from .Provider import TProvider


class TProviderFile(TProvider):
    def __init__(self, aFile):
        self.File = aFile

        if (not os.path.exists(aFile)):
            Msg = Log.Print(1, 'e', self.__class__.__name__,'__init__()', 'File not found %s' % self.Param.File)
            raise Exception(Msg)

    def Read(self, aName):
        return FS.LoadFromFileToStr(aName)


"""
Reads raspberry CPU temperature from a file.
File  = '/sys/class/thermal/thermal_zone0/temp'
"""
class TProviderFile_CPUTemp(TProviderFile):
    def Get(self):
        Result = self.ReadTry(self.File)
        if (Result):
            Result = int(Result) / 1000
        return Result


"""
Reads `one wire` temperature from a file.
File  = '/sys/bus/w1/devices/28-0416939679ff/w1_slave'
"""
class TProviderFile_W1DS(TProviderFile):
    def Get(self):
        Result = self.ReadTry(self.File)
        if (Result):
            Str1   = Result.split('\n')[1].split(' ')[9]
            Result = float(Str1[2:]) / 1000
        return Result
