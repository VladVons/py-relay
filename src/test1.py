#!/usr/bin/env python2
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


def Relay_One(aBus, aAddress, aPin):
    import time
    from Plugin.Providers.I2C_Relay_8574 import TProviderI2C_Relay_8574

    Cnt = 0
    while True:
        Cnt += 1 
        Value = bool(Cnt % 2)
        print('Pin:',  aPin, 'Value:', Value)
        Obj = TProviderI2C_Relay_8574(aBus, aAddress, aPin)
        Obj.Set(None, Value)
        time.sleep(3)


def Relay_LCD():
    import time
    from Plugin.Providers.I2C import TProviderI2C_Relay_8574

    LCD('Relay test ...')
    time.sleep(1)

    Bus     = 1
    Address = 0x25

    # Set all to ON
    Obj = TProviderI2C_Relay_8574(Bus, Address, 0, True)
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


def MemRecurs(aDepth, aStr):
    print(aDepth, aStr)
    time.sleep(0.1)
    MemRecurs(aDepth + 1, aDepth * "x")


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

def RegExp():
    import re
    Prefix  = 'self.'
    Item    = 'xValue'
    StrIn   = 'xValue and xValue and (My().xValue) and (xValue) and (xValue2)'
    StrOut = re.sub(r'\bxValue\b|\bxValue2\b', Prefix + Item, StrIn)
    print(StrIn)
    print(StrOut)


def NitifyFS():
    import pyinotify

    def onChange(ev):
        #if (ev.maskname == 'IN_CLOSE_WRITE'):
        print(ev.pathname, ev.maskname)


    wm = pyinotify.WatchManager()
    #wm.add_watch('/mnt/hdd/data1/temp', pyinotify.ALL_EVENTS, rec=True)
    wm.add_watch('/mnt/hdd/data1/temp', pyinotify.IN_MODIFY, onChange)
    notifier = pyinotify.Notifier(wm, timeout = 1)
    notifier.loop()


def HTTP():
    from Core.HttpServerApi import THttpServerApi
    ServerApi = THTTPServerApi(8888, self.Manager, None)
    ServerApi.Timeout = self.Param.Timeout
    ServerApi.Dir     = self.Param.Dir
    ServerApi.Run()


class TClassB():
    def MethodA(self):
        print('TClassB-MethodA')


class TClassA():
    TClassB = TClassB()

    def __init__(self):
        self.Var1 = 'Hello'
        self.ClassC = self.TClassC()

    class TClassC():
        def MethodA(self):
            print('TClassC-MethodA')
            #rint('Var1', self.Var1)

    def MethodA(self):
        print('TClassA-MethodA')
        self.TClassB.MethodA()
        self.ClassC.MethodA()

ClassA = TClassA()
#ClassA.MethodA()
#ClassA.TClassB.MethodA()

from Inc.Util import Obj
Obj.Dump(ClassA)
Obj.GetAttr(ClassA, '123')


#print(0, Obj.IsClass(TClassA))
#print(1, Obj.IsClass(ClassA))
#print(2, Obj.IsClass(1))
#print(3, Obj.IsClass('str'))
#print(4, Obj.IsClass([1,2,3]))
#print(5, Obj.IsClass([1,2,3]))
#print(6, Obj.IsClass({'1':'one'}))
#print(7, Obj.IsClass((1,2,3)))

