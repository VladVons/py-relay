# -*- coding: utf-8 -*-
'''
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2018.03.20
License:     GNU, see LICENSE for more details
Description:
'''

import time
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
        self.Current = None
        self.Caller  = None
        self.BreakLabel = None

    @property
    def CurResult(self):
        return self.Current['Result']

    def Scrypt(self, aValue):
        #Log.Print(1, 'w', self.__class__.__name__, 'Exec()', 'aValue: %s' % aValue)

        Result = None
        Vars   = {}
        try:
            #Scope = globals().update(locals())
            #Scope = locals()
            Scope = {'self': locals()['self']}
            exec(aValue, Scope, Vars)
            Result = Vars.get('Result')
        except Exception as E:
            Msg = Log.Print(1, 'e', self.__class__.__name__, 'Scrypt()', E, aValue)
            #raise Exception(Msg)
        return Result

    def ExecKey(self, aKey):
        Result = None

        Data = self.Current.get(aKey)
        if (Data):
            if ('if ' in Data):
                Result = self.Scrypt(Data)
            else:
                Result = self.Scrypt('Result = %s' % Data)
            setattr(self.CurResult, aKey, Result)
        return Result

    def ExecSection(self, aData):
        Log.Print(3, 'i', self.__class__.__name__, 'ExecSection()', aData)


        self.Current = aData
        self.CurResult.Clear()

        Result = aData.get('Enable', True)
        if (Result):
            self.BreakLabel = None

            Keys = aData.keys()
            if (('Then' in Keys) or ('Else' in Keys)) and (not 'If' in Keys):
                Msg = Log.Print(1, 'e', self.__class__.__name__, 'ExecSection()', 'Then/Else without If', aData)
                raise ValueError(Msg)

            if (self.ExecKey('If') is True):
                self.CurResult.CountIf += 1
                self.ExecKey('Then')
            else:
                self.CurResult.CountIf = 0
                self.ExecKey('Else')

            self.ExecKey('Always')
        return Result
