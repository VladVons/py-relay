# -*- coding: utf-8 -*-

"""
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2018.03.20
License:     GNU, see LICENSE for more details
Description:
"""

import re
#
from Inc.Log import Log


class TExecResult():
    def __init__(self):
        self.CountIf = 0
        self.Clear()

    def Clear(self):
        self.If     = None
        self.Then   = None
        self.Else   = None
        self.Always = None

class TExec():
    def __init__(self, aParent):
        self.Parent = aParent
        #
        self.apix    = None
        self.Current = None
        self.Caller  = None
        self.BreakLabel = None

    def SetApi(self, aClass):
        self.apix = aClass

    def Pad(self, aScrypt):
        if (self.apix):
            Prefix = 'self.apix.'
            Items  = dir(self.apix)
            for Item in Items:
                if (Item in aScrypt):
                    aScrypt = re.sub(r'\b%s\b' % Item, Prefix + Item, aScrypt)
            # ToDo problem with MyFunc().xFunc
            aScrypt = aScrypt.replace('.' + Prefix, '.')
        return aScrypt

    @property
    def CurResult(self):
        return self.Current['Result']

    def Scrypt(self, aValue):
        Log.PrintDbg(3, 'w', 'aValue: %s' % aValue)

        Result = None
        Vars   = {}
        try:
            #Scope = globals().update(locals())
            #Scope = locals()
            Scope = {'self': locals()['self']}
            exec(aValue, Scope, Vars)
            Result = Vars.get('Result')
        except Exception as E:
            Msg = Log.PrintDbg(1, 'e', E, aValue)
            #raise Exception(Msg)
        return Result

    def ExecKey(self, aKey):
        Result = None

        Data = self.Current.get(aKey)
        if (Data):
            Data = self.Pad(Data)

            if ('if ' in Data):
                Result = self.Scrypt(Data)
            else:
                Result = self.Scrypt('Result = %s' % Data)
            setattr(self.CurResult, aKey, Result)
        return Result

    def ExecSection(self, aData):
        Log.PrintDbg(3, 'i', aData)

        self.Current = aData
        self.CurResult.Clear()

        if (not aData.get('Enable', True)):
            return False

        self.BreakLabel = None
        Keys = aData.keys()
        if ('If' in Keys):
            if (self.ExecKey('If') is True):
                self.CurResult.CountIf += 1
                self.ExecKey('Then')
            else:
                self.CurResult.CountIf = 0
                self.ExecKey('Else')
        else:
            if (('Then' in Keys) or ('Else' in Keys)):
                Msg = Log.PrintDbg(1, 'e', 'Then/Else without If', aData)
                raise ValueError(Msg)

        self.ExecKey('Always')
        return True
