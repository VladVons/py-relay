"""
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2016.08.21
License:     GNU, see LICENSE for more details
Description:
"""

import re
#
from .Obj    import GetTreeAsStr
from Inc.Log import Log


def FindNode(aNode, aPath):
    for Item in aPath.strip("/").split("/"):
        if (Item != ""):
            try:
                Value = aNode.get(Item)
            # ToDo type
            except:
                Value = None

            if (Value is None):
                return None
            else:
                aNode = Value
    return aNode

def FindNodeDef(aNode, aPath, aDef):
    Node = FindNode(aNode, aPath)
    if (Node is None):
        return aDef
    else:
        return Node

def Filter(aNode, aRegEx):
    Result = []
    if (aNode):
        for Item in aNode:
            if (Item != '' and re.match(aRegEx, Item)):
                Result.append(Item)

    return Result

def Find(aList, aData):
    if (aData in aList):
        return aList.index(aData)
    return -1

def Diff(aData1, aData2):
    return set(aData1) - set(aData2)

def Combine(aList1, aList2):
    return list(set(aList1) | set(aList2))

def CheckDif(aValue1, aValue2):
    if (type(aValue1).__name__ == 'dict'):
        aValue1  = aValue1.keys()

    if (type(aValue2).__name__ == 'dict'):
        aValue2  = aValue2.keys()

    Diff = set(aValue1) - set(aValue2)
    if (Diff):
        print(aValue2)
        Msg = Log.PrintDbg(1, 'e', 'Unknown key %s in %s' % (str(Diff), GetTreeAsStr(aValue1, 2)))
        raise Exception(Msg)
