"""
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2016.08.21
License:     GNU, see LICENSE for more details
Description:
"""

#import types
#import inspect


def GetName(aObj):
    return aObj.__class__.__name__

# ?
def IsClass(aObj):
    Result = hasattr(aObj, '__dict__')
    if (Result):
        try:
            aObj.__class__.__name__
        except AttributeError:
            Result = False
    return Result

def GetClassInstancePath(aInstance, aPath = '', aDepth = 99):
    Instance = aInstance.__bases__
    if ( (Instance) and (aDepth > 0) ):
        aPath = GetClassInstancePath(Instance[0], aPath, aDepth - 1)
    return aPath + '/' + aInstance.__name__

def GetClassPath(aClass):
    return GetClassInstancePath(aClass.__class__)

def GetAttrPath(aObj, aVarPath: str, aDelim: str = '.'):
    for Name in aVarPath.split(aDelim):
        if (hasattr(aObj, Name)):
            aObj = getattr(aObj, Name)
        else:
            return None
        return aObj

def SetAttrPath(aObj, aVarPath: str, aValue, aDelim: str = '.'):
    for VarName in aVarPath.split(aDelim):
        if (hasattr(aObj, VarName)):
            LastObj = aObj
            aObj = getattr(aObj, VarName)
        else:
            return None
    setattr(LastObj, VarName, aValue)
    return aObj


def GetAttr(aClass, aName: str, aCallable: bool = False):
    Result = None
    if (hasattr(aClass, aName)):
        Result = getattr(aClass, aName)
        if (aCallable and (not callable(Result))):
            Result = None
    return Result

def TupleToStr(aValue):
    Result = []

    Type = type(aValue)
    if (Type is tuple):
        for Value in aValue:
            Data = TupleToStr(Value)
            Result.extend(Data)
    else:
        Result.append('%s' % aValue)
    return Result

def GetTree(aObj, aPrefix = '', aDepth = 99):
    Result = []

    if (aDepth > 0):
        Type = type(aObj).__name__
        if (Type == 'instance'):
            for Key in dir(aObj):
                Data = GetTree(getattr(aObj, Key), aPrefix + '/' + Key, aDepth - 1)
                Result.extend(Data)

            for Key in vars(aObj):
                Data = GetTree(getattr(aObj, Key), aPrefix + '/' + Key, aDepth - 1)
                Result.extend(Data)
        elif (Type in ['instancemethod', 'function']):
            Result.append({'Key': aPrefix, 'Value': '()'})
        elif (Type == 'dict'):
            for Key in aObj:
                Data = GetTree(aObj[Key], aPrefix + '/' + Key, aDepth - 1)
                Result.extend(Data)
        elif (Type == 'list'):
            for Obj in aObj:
                Data = GetTree(Obj, aPrefix, aDepth - 1)
                Result.extend(Data)
        else:
            Data = {'Key': aPrefix, 'Value': aObj}
            Result.append(Data)
    return Result


def GetTreeAsList(aObj):
    Result = []
    Items  = GetTree(aObj)
    if (Items):
        for Item in Items:
            Result.append('{}={}; '.format(Item['Key'], Item['Value']))
    return Result


def GetTreeAsStr(aObj):
    Data = GetTreeAsList(aObj)
    return '\r\n'.join(Data)


def Dump(aValue, aDepth = 99):
    Items = GetTree(aValue, '', aDepth)
    if (Items):
        # ToDo: py3 
        #for Item in sorted(Items):
        for Item in Items:
            print('{:25} = {}'.format(Item['Key'], Item['Value']))
