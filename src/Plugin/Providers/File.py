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
from Inc.Util  import FS, Str
from .Provider import TProvider


class TProviderFile(TProvider):
    def __init__(self, aFile):
        self.File = aFile

        if (not os.path.exists(aFile)):
            Msg = Log.Print(1, 'e', self.__class__.__name__,'__init__()', 'File not found %s' % self.File)
            raise Exception(Msg)


class TProviderFile_Size(TProviderFile):
    def Read(self, aUnused = None):
        return FS.GetFileSize(self.File)

    def Get(self):
        return self.Read()


class TProviderFile_Data(TProviderFile):
    def Read(self, aUnused = None):
        return FS.LoadFromFileToStr(self.File)


"""
Reads raspberry CPU temperature from a file.
File  = '/sys/class/thermal/thermal_zone0/temp'
"""
class TProviderFile_CPUTemp(TProviderFile_Data):
    def Get(self):
        Result = self.ReadTry()
        if (Result):
            Result = int(Result) / 1000
        return Result


"""
Reads `one wire` temperature from a file.
File  = '/sys/bus/w1/devices/28-0416939679ff/w1_slave'
"""
class TProviderFile_W1DS(TProviderFile_Data):
    def Get(self):
        Result = self.ReadTry()
        if (Result):
            Str1   = Result.split('\n')[1].split(' ')[9]
            Result = Str.ToFloat(Str1[2:]) / 1000
        return Result


class TProviderFile_CPULoad(TProviderFile_Data):
    def Get(self, aKey = 'default'):
        Result = {}
        Data = self.ReadTry()
        if (Data):
            Arr = Data.split()
            Result['m1']  = Str.ToFloat(Arr[0])
            Result['m5']  = Str.ToFloat(Arr[1])
            Result['m15'] = Str.ToFloat(Arr[2])
            Result['default'] = Result['m1']
        return Result.get(aKey)
