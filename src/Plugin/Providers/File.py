"""
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2017.11.09
License:     GNU, see LICENSE for more details
Description:
"""

import os
#
from Inc.Log   import Log
from Inc.Util  import FS, Str
from ._Common  import TProvider


class TProviderFile(TProvider):
    def __init__(self, aFile):
        self.File = aFile

        if (not os.path.exists(aFile)):
            Msg = Log.PrintDbg(1, 'e', 'File not found %s' % aFile)
            raise Exception(Msg)


class TProviderFile_Size(TProviderFile):
    def Read(self, aUnused = None):
        return FS.GetFileSize(self.File)

    def Get(self):
        return self.Read()


class TProviderFile_Read(TProviderFile):
    def Read(self, aUnused = None):
        return FS.LoadFromFileToStr(self.File)


class TProviderFile_Write(TProvider):
    def __init__(self, aFile, aMode = 'w+'):
        self.File = aFile
        self.Mode = aMode


        if (not FS.IsFileWrite(aFile)):
            Msg = Log.PrintDbg(1, 'e', 'Cant write to %s' % aFile)
            raise Exception(Msg)

    def Write(self, aData):
        with open(self.File, self.Mode) as File:
            File.write(aData)

"""
Reads raspberry CPU temperature from a file.
File  = '/sys/class/thermal/thermal_zone0/temp'
"""
class TProviderFile_CPUTemp(TProviderFile_Read):
    def Get(self):
        Result = self.ReadTry()
        if (Result):
            Result = int(Result) / 1000
        return Result


"""
Reads `one wire` temperature from a file.
File  = '/sys/bus/w1/devices/28-0416939679ff/w1_slave'
"""
class TProviderFile_W1DS(TProviderFile_Read):
    def Get(self):
        Result = self.ReadTry()
        if (Result):
            Str1   = Result.split('\n')[1].split(' ')[9]
            Result = Str.ToFloat(Str1[2:]) / 1000
        return Result


class TProviderFile_CPULoad(TProviderFile_Read):
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
