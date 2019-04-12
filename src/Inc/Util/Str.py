"""
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2016.08.21
License:     GNU, see LICENSE for more details
Description:
"""

import re
import json


def ActionDelim(self, aStr, aFunc, aDelim = ","):
    Result = ''
    Items = aStr.split(aDelim)
    for Item in Items:
        Item = Item.strip()
        if (Item != ''):
            Result += aFunc(Item)
    return Result

def ConvertTo(aData):
    if ( (aData) and (type(aData).__name__ in ['str', 'unicode']) ):
        if (aData.lower() in ['true', 'false']):
            aData = bool(aData)
        elif (aData.isdigit()):
            aData = int(aData)
        elif (IsFloat(aData)):
            aData = ToFloat(aData)
        elif (IsArr(aData)):
            aData = json.loads(aData)
    return aData

def GetPart(aStr, aIdx, aDelim = ','):
    Items = aStr.split(aDelim)
    if (aIdx < len(Items)):
        return Items[aIdx]
    else:
        return ''

def IsFloat(aStr):
    return re.match("^\d+?[\.\,]\d+?$", aStr) != None

def IsArr(aStr):
    return (aStr[0] in ['{', '[']) and ((aStr[-1:] in ['}', ']']))

def ToFloat(aStr):
    if (IsFloat(aStr)):
        aStr = aStr.replace(',', '.')
        Result = float(aStr)
    else:
        Result = 0.0
    return Result

def MultiRepl(aStr, aFindRepl):
    for Find, Repl in aFindRepl.iteritems():
        aStr = aStr.replace(Find, Repl)
    return aStr

def ReplaceIdx(aStr, aIdx, aReplace):
    return aStr[:aIdx] + aReplace + aStr[aIdx + len(aReplace):]
