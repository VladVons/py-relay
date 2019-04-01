'''
Copyright:   (c) 2017, Vladimir Vons
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2017.10.20
License:     GNU, see LICENSE for more details
Description:

Import = TDynImport()
Import.ParseDir('Plugin/Devices')
Import.GetInstance(ClassName)
TClass = Import.GetInstance(ClassName)
Result = TClass(None)
'''

import os
import sys
import re
#
from Inc.Log import Log


# nuitka --module Manager.py 
# from XXX import *
class TDynImport():
    def __init__(self):
        self.Classes = {}

    def Clear(self):
        self.Classes.clear()

    def AddClass(self, aClassName, aModule, aPath):
        Data = self.Classes.get(aClassName)
        if (Data):
            Msg = Log.PrintDbg(1, 'e', 'Class %s already exists in' % aClassName, Data)
            raise Exception(Msg)

        self.Classes[aClassName] = {'Module': aModule, 'Path': aPath}
        if (aPath and (aPath not in sys.path)):
            sys.path.insert(0, aPath)

    def ParseFile(self, aFileName):
        Result = 0
        if (not os.path.exists(aFileName)):
            return Result

        Root, Name = os.path.split(aFileName)
        Base = os.path.splitext(Name)[0]

        with open(aFileName, 'r') as File:
            Lines = File.readlines()

        for Line in Lines:
            if ('class ' in Line):
                Data = re.search('(class\s+)(.+)\(', Line)
                if (Data):
                    Result += 1
                    ClassName = Data.group(2)
                    self.AddClass(ClassName, Base, Root)
                    # print('--- FilePath, line, ClassName', FilePath, Line, ClassName)
        return Result


    def ParseDir(self, aDir):
        for Root, Dirs, Files in os.walk(aDir):
            for File in Files:
                FilePath = Root + '/' + File
                FileExt  = os.path.splitext(File)[1]
                if (FileExt == '.py'):
                    self.ParseFile(FilePath)

    def GetAttr(self, aClassName, aModuleName):
        Module = __import__(aModuleName)
        Result = getattr(Module, aClassName)
        return Result

    def GetInstance(self, aClassName, aModuleName = ''):
        if (aModuleName):
            Result = self.FromModule(aClassName, aModuleName)
        elif (aClassName in self.Classes):
            Module = self.Classes[aClassName]['Module']
            Result = self.GetAttr(aClassName, Module)
        else:
            Result = globals().get(aClassName)
        return Result
