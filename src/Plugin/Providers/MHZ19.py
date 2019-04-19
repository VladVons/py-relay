"""
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2018.04.25
License:     GNU, see LICENSE for more details

Description:
PZEM-004T Energy consumpton module
Tx->Rx
Rx->Tx

Init:
dmesg | egrep --color 'serial|tty'
usermod -a -G dialout pi
"""

from Inc.Log   import Log
from .Serial   import TSerial
from ._Common  import TProvider


class TMHZ19(TSerial):
    SetAddrBytes = [0xff, 0x01, 0x86, 0x00, 0x00, 0x00, 0x00, 0x00, 0x79]

    def IsCheckSum(self, aData):
        Sum = 0
        for i in range(1, 7):
            Sum += aData[i]
        Sum = ~Sum & 0xFF
        Sum += 1

        CheckSum = aData[-1]
        return (CheckSum == Sum)

    def IsReady(self):
        Data = self.Send(self.SetAddrBytes, 9)
        return Data != None

    def Get(self):
        Data = self.Send(self.SetAddrBytes, 9)
        if (Data):
            Result = (Data[2] * 256) + Data[3]
        else:
            Result = 0
        return Result


#---
class TProviderMHZ19(TProvider):
    def __init__(self, aPort):
        self.Obj = TMHZ19(aPort, 9600)
        if (not self.Obj.IsReady()):
            Log.PrintDbg(1, 'w', 'Device not detected')

    def Read(self, aNotUsed):
        return self.Obj.Get()

    def Get(self):
        return self.Read(None)
