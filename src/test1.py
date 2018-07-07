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

#from Inc.Crypt import TCrypt
#Crypt = TCrypt()
#Str = json.dumps({'Items' :20, 'Owner':'Pink', 'Expired_':2019})
#D1  = Crypt.Encode(Str)
#D2  = Crypt.Decode(D1)
#print(D1, D2)

#from Plugin.Providers.Pzem import TProviderPzem
#Pzem = TProviderPzem('/dev/ttyUSB0')
#Pzem.Get()


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


sys.path.append('/usr/lib/python2.7/dist-packages')
for i in sys.path:
    print(i)

import MySQLdb
#import radiotray