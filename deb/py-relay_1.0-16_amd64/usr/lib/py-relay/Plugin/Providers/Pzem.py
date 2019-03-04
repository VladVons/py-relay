'''
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

Help:
http://www.instructables.com/id/Read-and-write-from-serial-port-with-Raspberry-Pi/

Example:
sensor = TPzem_004('/dev/serial0')
if (sensor.IsReady()):
    print("Reading voltage")
    print(sensor.GetVoltage())
'''

from Inc.Log   import Log
from .Provider import TProvider
from .Serial   import TSerial


class TPzem_004(TSerial):
    SetAddrBytes      = [0xB4, 0xC0, 0xA8, 0x01, 0x01, 0x00, 0x1E]
    ReadVoltageBytes  = [0xB0, 0xC0, 0xA8, 0x01, 0x01, 0x00, 0x1A]
    ReadCurrentBytes  = [0XB1, 0xC0, 0xA8, 0x01, 0x01, 0x00, 0x1B]
    ReadPowerBytes    = [0XB2, 0xC0, 0xA8, 0x01, 0x01, 0x00, 0x1C]
    ReadRegPowerBytes = [0XB3, 0xC0, 0xA8, 0x01, 0x01, 0x00, 0x1D]

    def IsCheckSum(self, aData):
        List     = list(aData)
        CheckSum = List[-1]
        List.pop()
        Sum = sum(List)
        return (CheckSum == Sum % 256)

    def IsReady(self):
        Data = self.Send(self.SetAddrBytes, 7)
        return Data != None

    def GetVoltage(self):
        Data = self.Send(self.ReadVoltageBytes, 7)
        return Data[2] + (Data[3] / 10.0) 

    def GetCurrent(self):
        Data = self.Send(self.ReadCurrentBytes, 7)
        return Data[2] + (Data[3] / 100.0)

    def GetPower(self):
        Data = self.Send(self.ReadPowerBytes, 7)
        return (Data[1] * 256) + Data[2]

    def GetRegPower(self):
        Data = self.Send(self.ReadRegPowerBytes, 7)
        return (Data[1] * 256 * 256) + (Data[2] * 256) + Data[3]


#---
class TProviderPzem(TProvider):
    def __init__(self, aPort):
        self.Obj = TPzem_004(aPort, 9600)
        if (not self.Obj.IsReady()):
            Log.Print(1, 'w', self.__class__.__name__, '__init__()', 'Device not detected')

    def Read(self, aNotUsed):
        Result = {}
        Result['Voltage'] = self.Obj.GetVoltage()
        Result['Current'] = self.Obj.GetCurrent()
        Result['Power']   = self.Obj.GetPower()
        Result['Consum']  = self.Obj.GetRegPower()

        Result['default'] = Result['Voltage']
        return Result

    def Get(self, aKey = 'default'):
        return self.GetKey(aKey)
