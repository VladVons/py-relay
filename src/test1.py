#!/usr/bin/python2
# -*- coding: utf-8 -*-

import time
import sys
import json
import base64

'''
from Inc.Import import TImport
Import = TImport()
Import.Load('Plugin/Devices')
#print('File', Import.Classes['TSensorRandom'])
TClass = Import.GetInstance('TSensorRandom')
Result = TClass(None)
Result.DoParameter({'Begin': 10, 'End': 30})
print (Result._Get())
#print(sys.path)
'''

#from Plugin.Providers.MHZ19 import TProviderMHZ19
#Pzem = TProviderMHZ19('/dev/ttyUSB0')

#from Plugin.Providers.DeviceHive import TDeviceHiveESP, TProviderDeviceHive_MHZ19
#Data = [0xB4, 0xC0, 0xA8, 0x01, 0x01, 0x00, 0x1E]
#DataStr = base64.encodestring(Data)

#DataStr = "\xB4\xC0\xA8\x01\x01\x00\x1E"
#DataStr = "\xB0\xC0\xA8\x01\x01\x00\x1A"

#DataStr = base64.b64encode(DataStr)
#DataStr = bytes(Data)
#DataStr = json.dumps(Data)
#print(DataStr)
#base64EncodedStr = base64.b64encode(DataStr)
#print(base64EncodedStr)

#DH = TDeviceHiveESP('dh9.local')
#Data = DH.CmdUartRead(9600, DataStr)
#print(Data)

#print('Data', Data)

#DH = TProviderDeviceHive_MHZ19('dh9.local')
#while(1):
#    Data = DH.Get()
#    print('Data', Data)
#    time.sleep(1)


#sys.path.append('/usr/lib/python2.7/dist-packages')
#for i in sys.path:
#    print(i)

#import MySQLdb
#import radiotray




def Pzem():
    from Plugin.Providers.Pzem import TProviderPzem
    Pzem = TProviderPzem('/dev/ttyUSB0')
    Data = Pzem.Get()
    print(Data)


def UPS():
    from Plugin.Providers.UpsApc import TProviderUpsApc
    APC = TProviderUpsApc()
    Data = APC.Read(None)
    print(APC.Get())


def LCD():
    Bus     = 1
    Address = 0x26
    Cols    = 20
    Rows    = 4

    from Plugin.Providers.I2C_LCD_8574 import TProviderI2C_LCD_8574
    Obj     = TProviderI2C_LCD_8574(Bus, Address, Cols, Rows)
    Obj.CursorTo(0,0)
    Obj.PrintLn('Hello world')


def Relay():
    Bus     = 1
    Address = 0x25
    Command = 3 - 1
    Value   = not True
    from Plugin.Providers.I2C import TProviderI2C_Relay_8574
    Obj = TProviderI2C_Relay_8574(Bus, Address, Command)
    Obj.Set(None, Value)

Relay()
