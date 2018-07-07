'''
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2016.08.21
License:     GNU, see LICENSE for more details
Description:
'''

import os

def FindFile(aDirs, aFiles, aSubDir = False):
    Result = []

    for Dir in aDirs:
        for Root, Folders, Files in os.walk(Dir):
            for File1 in aFiles:
                for File2 in Files:
                    if (File1 in File2):
                        Result.append(Root + '/' + File2)
        if (not aSubDir):
            break
    return Result

def FileExists(aPath):
    return os.path.exists(aPath)

def LoadFromFileToStr(aFileName):
    Result = None
    if (os.path.isfile(aFileName)):
        File = open(aFileName, 'rb')
        Result = File.read()
        File.close()
    return Result

def LoadFromFileToList(aName):
    Result = []
    if (os.path.isfile(aName)):
        with open(aName, "r") as File:
            Result = File.readlines()
    return Result

def SaveToFileFromList(aName, aList):
    with open(aName, 'w') as File:
        for Line in aList:
            File.write(Line)

def GetCoreName(aPath):
    return os.path.splitext(os.path.basename(aPath))[0]

def ChangeExt(aPath, aExt):
    return os.path.splitext(aPath)[0] + aExt
