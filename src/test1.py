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


def LCD(aText = 'Hello world !'):
    Bus     = 1
    Address = 0x26
    Cols    = 20
    Rows    = 4

    from Plugin.Providers.I2C_LCD_8574 import TProviderI2C_LCD_8574
    Obj     = TProviderI2C_LCD_8574(Bus, Address, Cols, Rows)
    Obj.CursorTo(0, 0)
    Obj.PrintLn(aText)


def Relay_One():
    import time
    from Plugin.Providers.I2C import TProviderI2C_Relay_8574

    Bus     = 1
    Address = 0x25
    Pin     = 0

    Cnt = 0
    while True:
        Cnt += 1 
        Value = bool(Cnt % 2)
        print('Pin:',  Pin, 'Value:', Value)
        Obj = TProviderI2C_Relay_8574(Bus, Address, Pin)
        Obj.Set(None, Value)
        time.sleep(5)


def Relay_LCD():
    import time
    from Plugin.Providers.I2C import TProviderI2C_Relay_8574

    LCD('Relay test ...')
    time.sleep(1)

    Bus     = 1
    Address = 0x25

    # Set all to ON
    Obj = TProviderI2C_Relay_8574(Bus, Address, 0)
    Obj.Write(0)

    Cnt = 0
    Len = 8
    while True:
        Cnt += 1 
        for Pin in range(Len):
            Obj = TProviderI2C_Relay_8574(Bus, Address, Pin)
            Value = bool(Cnt % 2)
            Obj.Set(None, Value)

            Value = Obj.Get()
            Mask  = "{0:b}".format(~Value & 0xFF).zfill(Len)
            print('Pins:', Pin, Mask)
            LCD(Mask)
            time.sleep(1)

def Telegram():
    from Plugin.Providers.Telegram import TProviderTelegram

    Token = '482131719:AAHRZnIq-RsfNyF2LvaSIm028vGHgSv60dI'
    # send message
    Chats = [571074640, 423099610]
    Obj = TProviderTelegram(Token, Chats)
    Obj.Set(None,'Hello')
    # read last message
    Updates = Obj.Telegram.GetUpdates()
    Last    = Obj.Telegram.GetLastUpdate(Updates)
    print('Last', Obj.Telegram.ParseUpdate(Last))



def TimerRange():
    from Plugin.Providers.Timer import TTimeRangeCycle, TTimeRangeDay, TTimeRangeDayFadeWave

    #Obj = TTimeRangeCycle()
    #Obj.SetRanges([{"On": "2", "Off": "3"},{"On": "4", "Off": "5"}])
    #Obj.SetRanges([{"On": "5M", "Off": "3M"}])

    #Obj = TTimeRangeDay()
    #Obj.SetRanges([{"On": "01:03:10", "Off": "01:03:20"}, {"On": "01:04:10", "Off": "01:04:20"}])

    Obj = TTimeRangeDayFadeWave(-10, 10)
    Obj.SetRanges([{"On": "2:00", "Off": "2:57"}, {"On": "8:00", "Off": "9:00"}])
    #Obj.SetRanges([{"On": "2:00", "Off": "2:55"}])

    while True:
        print('---1', Obj.Get())
        time.sleep(1)


#Relay_One()
#Relay_LCD()
#Telegram()
TimerRange()
