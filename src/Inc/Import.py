"""
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
"""

import os
import sys
import re
#
from Inc.Log  import Log
from Inc.Util import UObj


# nuitka --module Manager.py 
# from XXX import *
class TDynImport():
    def __init__(self):
        self.Data = {}

    def Clear(self):
        self.Data.clear()

    def GetInherited(self, aInvert: bool = False):
        Tree = []
        for Item in self.Data:
            TClass = self.GetInstance(Item)
            Path = UObj.GetClassInstancePath(TClass)
            Tree.append(Path)

        Result = {}
        for Item in Tree:
            Last = Item.split('/')[-1]
            if any(Item + '/' in S for S in Tree) ^ aInvert:
                #Tree.remove(Item)
                Result[Last] = Item
        return Result

    def AddClass(self, aClassName: str, aModule: str, aPath: str):
        Data = self.Data.get(aClassName)
        if (Data):
            Msg = Log.PrintDbg(1, 'e', 'Class %s already exists in' % aClassName, Data)
            raise Exception(Msg)

        self.Data[aClassName] = {'Module': aModule, 'Path': aPath}
        if (aPath and (aPath not in sys.path)):
            sys.path.insert(0, aPath)

    def ParseFile(self, aFileName: str) -> int:
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

    def ParseDir(self, aDir: str):
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
        elif (aClassName in self.Data):
            Module = self.Data[aClassName]['Module']
            Result = self.GetAttr(aClassName, Module)
        else:
            Result = globals().get(aClassName)
        return Result
