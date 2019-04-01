'''
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2017.11.10
License:     GNU, see LICENSE for more details
Description:

Writes value to GPio

Example:
Bus     = 1
Address = 0x27
Pin     = 3
Value   = True
Obj = TProviderI2CPioOut(Bus, Address, Pin)
Obj.Set(None, Value)
'''

import os
#
from Inc.Log  import Log
from Inc.Util import Num, Time
from .I2C     import TProviderI2C

class TProviderI2C_Relay_8574(TProviderI2C):
    def __init__(self, aBus, aAddress, aCommand, aMirror = False):
        TProviderI2C.__init__(self, aBus, aAddress, aCommand)
        self.Delay  = 50
        self.Mirror = aMirror
        #self.ReadConfirm = True

    def WriteCheck(self, aValue):
        MaxCnt = 3
        for Cnt in range(MaxCnt):
            Time.DelayMiliSec(self.Delay)
            Result = self.WriteTry(aValue)
            Time.DelayMiliSec(self.Delay)
            Check  = self.ReadByte()
            if (aValue == Check):
                break
            Log.PrintDbg(1, 'w', 'Error writing Valee: %s, Check: %s' % (aValue, Check))
        return Result

    def Set(self, aCaller, aValue):
        PrevValue = self.Get()
        Value     = Num.SetBit(PrevValue, self.Command, bool(aValue))
        if (self.Mirror):
            Value = Num.MirrorBit(Value)
        #print('--1', self.Address, self.Command, "{0:b}".format(PrevValue), "{0:b}".format(Value), aValue)
        return self.WriteCheck(Value)

    def Get(self):
        Time.DelayMiliSec(self.Delay)
        Result = self.ReadByte()
        if (self.Mirror):
            Result = Num.MirrorBit(Result)
        return Result
