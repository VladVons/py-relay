'''
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2017.10.15
License:     GNU, see LICENSE for more details

Description:
encode adn decode serilization with JSON

Serialize = TSerialize()
Serialize.AddModule('Api') # add Apy.py

Args    = ['Hello']
DataIn  = Serialize.EncodeFunc('DummyMethod', *Args)
DataOut = Serialize.Decode(DataIn)
print(DataOut)
'''

import json
import re
#
from Inc.Log import Log

# just for test 
def DummyMethod(aMsg = 'This is DummyMethod'):
    print(aMsg)
    return 'Result: ' + aMsg

class DummyClass():
    def DummyMethod(self, aMsg = 'This is class DummyClass.DummyMethod'):
        print(aMsg)
        return 'Result: ' + aMsg


class TSerialize():
    def __init__(self):
        # if TRUE some class variable must be cleared with Purge()
        self.CasheObj = False

        self.Clear()
        self.Delim     = '.'
        self.Module    = None

    def Clear(self):
        self.Data = {}
        self.LastError = ''

    def Purge(self, aName):
        Result = 0
        Data = {}
        for Item in self.Data:
            if (Item.startswith(aName)):
                Result += 1
            else:
                Data[Item] = self.Data[Item]
        self.Data = Data
        return Result

    def AddModule(self, aName):
        self.Module = __import__(aName)

    def AddObj(self, aName, aObj):
        try:
            #globals()[aName]()
            aObj
            self.Data[aName] = aObj
        except NameError as E:
            Log.PrintDbg(1, 'x', E.message)

    def FindObj(self, aModule, aName, aGlobal = True):
        try:
            # search in module scope
            Result = getattr(aModule, aName)
        except:
            Result = None

            if (aGlobal):
                try:
                    # search in global scope
                    Result = globals()[aName]
                except:
                    Result = None
        return Result

    def GetObj(self, aName):
        #print("GetObj", aName)
        if (aName in self.Data):
            return self.Data[aName]

        self.LastError = ''
        Result = None
        Path   = ''
        Items  = aName.strip().split(self.Delim)
        Len    = len(Items)
        for i in range(Len):
            Item = Items[i]
            Char = ("" if (Path == "") else self.Delim)
            Path += Char + Item

            if (Path in self.Data):
                Result = self.Data[Path]
            else:
                # stand alone Method
                if (Len == 1):
                    Result = self.FindObj(self.Module, Item)
                else:
                    if (i == 0):
                        # create class instance
                        Result = self.FindObj(self.Module, Item)()

                        # Class constructor alwys in cache
                        self.Data[Path] = Result
                    else:
                        # class Method/Property
                        Result = self.FindObj(Result, Item, False)

                        if (self.CasheObj):
                            self.Data[Path] = Result
                if (not Result):
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

    def SplitFunc(self, aFuncStr):
        # recognize string "ClassName.FuncName('Param')"
        Match = re.match("(?P<Name>[\w\.]+)\((?P<Arg>.*)\)", aFuncStr)
        if (Match):
            return Match.groupdict()
        else:
            return {}

    def CallFunc(self, aFuncName, aArgs = []):
        Arr = self.SplitFunc(aFuncName)
        if (Arr):
            aFuncName = Arr["Name"]
            aArgs     = Arr["Arg"].replace("'", "").split(",")

        Obj = self.GetObj(aFuncName)
        if (Obj):
            ObjType = type(Obj).__name__
            if (ObjType in ["instancemethod", "function"]):
                Result = self.CallObj(Obj, aArgs)
            else:
                Result = Log.PrintDbg(1, 'e', 'Object %s is not callable type %s' % (aFuncName, ObjType))
        else:
            Result = self.LastError
        return Result

    def GetProp(self, aPropName):
        Obj = self.GetObj(aPropName)
        if (Obj):
          return Obj
        else:
          return self.LastError

    @staticmethod
    def CEncodeData(aData):
        return json.dumps({"Data": aData})

    def EncodeData(self, aData):
        return TSerialize.CEncodeData(aData)

    def EncodeFuncAuth(self, aUser, aPassw):
        return self.EncodeFunc("AuthUser", aUser, aPassw)

    def EncodeFunc(self, aFuncName, *aArgs):
        if (len(aArgs) == 0):
            Data = {"Type": "Func", "Name": aFuncName}
        else:
            Data = {"Type": "Func", "Name": aFuncName, "Arg": aArgs}
        return json.dumps(Data)

    def EncodeProp(self, aPropName):
        Data = {"Type": "Prop", "Name": aPropName}
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
                Type = Node.get("Type")
                Name = Node.get("Name")
                if (Type == "Func"):
                    if ("Arg" in Node):
                        Result = self.CallFunc(Name, Node.get("Arg"))
                    else:
                        Result = self.CallFunc(Name)
                elif (Type == "Prop"):
                    Result = self.GetObj(Name)
                else:
                    Result = Log.PrintDbg(1, 'e', 'Unknown type %s' % (Type))
        return Result

    def DecodeFuncName(self, aData):
        Result = ""

        Node = json.loads(aData)
        if (Node["Type"] == "Func"):
            Result = Node.get("Name")

        return Result

    def DecodeFuncArg(self, aData):
        Node = json.loads(aData)
        return Node.get("Arg")
