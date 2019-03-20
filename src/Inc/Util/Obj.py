'''
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2016.08.21
License:     GNU, see LICENSE for more details
Description:
'''

def GetName(aObj):
    return aObj.__class__.__name__

def GetClassInstancePath(aInstance, aPath = '', aDepth = 99):
    Instance = aInstance.__bases__
    if ( (Instance) and (aDepth > 0) ):
        aPath = GetClassInstancePath(Instance[0], aPath, aDepth - 1)
    return aPath + '/' + aInstance.__name__

def GetClassPath(aClass):
    return GetClassInstancePath(aClass.__class__)

def GetAttr(aClass, aName):
    try:
        Result = getattr(aClass, aName)
    # ToDo type
    except:
        Result = None
    return Result

def GetTree(aValue, aPrefix = '', aDepth = 99):
    Result = []

    if (aDepth > 0): 
        Type = type(aValue).__name__
        if (Type == 'instance'):
            for Key in dir(aValue):
                Result.extend(GetTree(getattr(aValue, Key), aPrefix + '/' + Key, aDepth - 1))

            for Key in vars(aValue):
                Result.extend(GetTree(getattr(aValue, Key), aPrefix + '/' + Key, aDepth - 1))
        elif (Type in ['instancemethod', 'function']):
            Result.append( {'Key':aPrefix, 'Value':'()'} )
        elif (Type == 'dict'):
            for Key in aValue:
                Result.extend(GetTree(aValue[Key], aPrefix + '/' + Key, aDepth - 1))
        elif (Type == 'list'):
            for Value in aValue:
                Result.extend(GetTree(Value, aPrefix, aDepth - 1))
        else:
            Result.append( {'Key':aPrefix, 'Value': aValue} )
    return Result

def GetTreeAsStr(aValue, aDepth = 99):
    Result = ''
    Items  = GetTree(aValue, '', aDepth)
    if (Items):
        for Item in Items:
            Result += '{}={}; '.format(Item['Key'], Item['Value'])
    return Result

def Dump(aValue, aDepth = 99):
    Items = GetTree(aValue, '', aDepth)
    if (Items):
        # ToDo: py3 
        #for Item in sorted(Items):
        for Item in Items:
            print('{:25} = {}'.format(Item['Key'], Item['Value']))
