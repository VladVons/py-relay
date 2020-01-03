"""
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2016.08.21
License:     GNU, see LICENSE for more details
Description:
"""

import os
import time
import collections


def FindFile(aDirs, aFiles, aSubDir = False):
    Result = []

    for Dir in aDirs:
        for Root, Folders, Files in os.walk(Dir, followlinks = True):
            for File1 in aFiles:
                for File2 in Files:
                    if (File1 and File1 in File2):
                        Result.append(Root + '/' + File2)
        if (not aSubDir):
            break
    return Result


def IsFileWrite(aPath: str) -> bool:
    if (os.path.exists(aPath)):
        Result = os.access(aPath, os.W_OK)
    else:
        try:
            with open(aPath, 'w+') as File:
                os.unlink(File.name)
            Result = True
        except:
            Result = False
    return Result


def FileExists(aPath: str) -> bool:
    return os.path.exists(aPath)

def LoadFromFile(aFileName: str, aMode = 'rb') -> bytes:
    Result = None
    if (os.path.isfile(aFileName)):
        with open(aFileName, aMode) as File:
            Result = File.read()
    return Result

def LoadFromFileToStr(aFileName: str) -> str:
    return LoadFromFile(aFileName, 'r')

def LoadFromFileToList(aName: str) -> list:
    Result = []
    if (os.path.isfile(aName)):
        with open(aName, 'r') as File:
            Result = File.readlines()
    return Result

def SaveToFileFromList(aName, aList):
    with open(aName, 'w') as File:
        for Line in aList:
            File.write(Line)

def SplitName(aFullPath):
    Root, Name = os.path.split(aFullPath)
    Base, Ext  = os.path.splitext(Name)

    Obj = collections.namedtuple('FilePart', ['Orig', 'Root', 'Name', 'Base', 'Ext'])
    return Obj(Orig=aFullPath, Root=Root, Name=Name, Base=Base, Ext=Ext)

def ChangeExt(aPath, aExt):
    return os.path.splitext(aPath)[0] + aExt

def GetCTime(aFile):
    Result = time.gmtime(os.path.getctime(aFile))
    #time.strftime('%Y-%m-%d', Result)
    return Result

def GetFileSize(aFile):
    return int(os.path.getsize(aFile))
