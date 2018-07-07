'''
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2016.08.21
License:     GNU, see LICENSE for more details
Description:
'''

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
            if (Item != "" and re.match(aRegEx, Item)):
                Result.append(Item)

    return Result

def Find(aList, aData):
    if (aData in aList):
        return aList.index(aData)
    return -1

def Diff(aData1, aData2):
    return set(aData1) - set(aData2)

