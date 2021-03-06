"""
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2017.10.15
License:     GNU, see LICENSE for more details

Description:
encode adn decode serilization with JSON

class TClass1():
    def Test1(self):
        print('Test1')
        return 'MyTest1'

Serialize = TSerialize()

Class1 = TClass1()
Serialize.AddClass(Class1)
Data  = Serialize.CallFunc('TClass1.Test1')
print(Data)

Serialize.AddModule('Api.Misc')
DataIn  = Serialize.CallFunc('Misc.Version')
print(DataIn)

Args    = ['Hello']
DataIn  = Serialize.CallFunc('DummyMethod')
DataIn  = Serialize.EncodeFunc('DummyMethod', *Args)
DataOut = Serialize.Decode(DataIn)
print(DataOut)
"""

import json
import re
import sys
import importlib
#
from Inc.Log import Log


# just for test 
def DummyMethod(aMsg = 'This is DummyMethod'):
    print('DummyMethod()', aMsg)
    return 'Result: ' + aMsg

class TDummyClass():
    def DummyMethod(self, aMsg = 'This is class DummyClass.DummyMethod'):
        print('TDummyClass.DummyMethod()', aMsg)
        return 'Result: ' + aMsg


class TSerializeObj():
    def __init__(self):
        self.Data  = {}
        self.Delim = '.'
        self.LastError = ''

        # if TRUE some class variable must be cleared with Purge()
        self.CasheObj = False

    def Clear(self):
        self.Data.clear()
        self.LastError = ''

    def AddModule(self, aName: str):
        Last = aName.split(self.Delim)[-1]
        __import__(aName)
        globals()[Last] = sys.modules[aName]

    def AddClass(self, aObj):
        self.AddObj(aObj.__class__.__name__, aObj)

    def AddObj(self, aName: str, aObj):
        try:
            aObj
            self.Data[aName] = aObj
        except NameError as E:
            Log.PrintDbg(1, 'x', E.message)

    def FindObj(self, aObj, aName: str):
        if (hasattr(aObj, aName)):
            Result = getattr(aObj, aName)
        else:
            Result = globals().get(aName)
        return Result

    def GetObj(self, aName: str):
        if (aName in self.Data):
            return self.Data[aName]

        self.LastError = ''
        Path   = ''
        Result = None
        Items  = aName.strip().split(self.Delim)
        for Item in Items:
            Char = ('' if (Path == '') else self.Delim)
            Path += Char + Item
            if (Path in self.Data):
                Result = self.Data[Path]
            else:
                Result = self.FindObj(Result, Item)
                if (Result):
                    self.Data[Path] = Result
                else:
                    self.LastError = Log.PrintDbg(1, 'e', 'No object %s found in %s ' % (Item, Path))
                    break
        return Result

    def CallObj(self, aObj, aArgs):
        try:
            if (aArgs):
                Result = aObj(*aArgs)
            else:
                Result = aObj()
        except Exception as E:
            self.LastError = Log.PrintDbg(1, 'x', E.message)
            Result = None
        return Result


class TSerialize(TSerializeObj):
    def SplitFunc(self, aFuncStr):
        # recognize string "ClassName.FuncName('Param')"
        Match = re.match("(?P<Name>[\w\.]+)\((?P<Arg>.*)\)", aFuncStr)
        if (Match):
            return Match.groupdict()
        else:
            return {}

    def CallFunc(self, aFuncName: str, aArgs: list = []):
        Arr = self.SplitFunc(aFuncName)
        if (Arr):
            aFuncName = Arr['Name']
            aArgs     = Arr['Arg'].replace("'", '').split(',')

        Obj = self.GetObj(aFuncName)
        if (Obj):
            ObjType = type(Obj).__name__
            if (ObjType in ['instancemethod', 'function']):
                Result = self.CallObj(Obj, aArgs)
            else:
                Result = Log.PrintDbg(1, 'e', 'Object %s is not callable type %s' % (aFuncName, ObjType))
        else:
            Result = self.LastError
        return Result

    @staticmethod
    def CEncodeData(aData):
        return json.dumps({'Data': aData})

    def EncodeData(self, aData):
        return TSerialize.CEncodeData(aData)

    def EncodeFuncAuth(self, aUser: str, aPassw: str):
        return self.EncodeFunc('AuthUser', aUser, aPassw)

    def EncodeFunc(self, aFuncName: str, *aArgs) -> str:
        Data = {'Type': 'Func', 'Name': aFuncName}
        if (len(aArgs) > 0):
            Data['Arg'] = aArgs
        return json.dumps(Data)

    def EncodeProp(self, aPropName: str) -> str:
        Data = {'Type': 'Prop', 'Name': aPropName}
        return json.dumps(Data)

    def DecodeToStr(self, aData):
        Data = self.Decode(aData)
        return self.EncodeData(Data)

    def Decode(self, aData):
        Result = ''
        if (aData):
            try:
                Node = json.loads(aData)
            except Exception as E:
                Node   = None
                Result = Log.PrintDbg(1, 'x', E.message)

            if (Node):
                Type = Node.get('Type')
                Name = Node.get('Name')
                if (Type == 'Func'):
                    if ('Arg' in Node):
                        Result = self.CallFunc(Name, Node.get('Arg'))
                    else:
                        Result = self.CallFunc(Name)
                elif (Type == 'Prop'):
                    Result = self.GetObj(Name)
                else:
                    Result = Log.PrintDbg(1, 'e', 'Unknown type %s' % (Type))
        return Result

    def DecodeFuncName(self, aData):
        Result = ''
        Node = json.loads(aData)
        if (Node['Type'] == 'Func'):
            Result = Node.get('Name')
        return Result

    def DecodeFuncArg(self, aData):
        Node = json.loads(aData)
        return Node.get('Arg')
