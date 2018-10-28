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


#sys.path.append('/usr/lib/python2.7/dist-packages')
#for i in sys.path:
#    print(i)

#import MySQLdb
#import radiotray



#try:
#    from urllib2 import Request, urlopen
#except:
#    from urllib.request import Request, urlopen

#req = urllib2.Request('http://www.voidspace.org.uk')

#import urlparse

#from urllib.parse import urlencode
#from urllib import urlencode


#from Inc.Util.Net import PostRequest
#R = PostRequest('http://192.168.2.131/dev/dht22', b'{"pin":14}')
#print(R)

#from Plugin.Providers.UpsApc import TProviderUpsApc
#APC = TProviderUpsApc()
#APC = TProviderAPC('localhost', 11222)

#Data = APC.Read(None)
#print(Data)
#print(APC.Get())


#from Plugin.Devices.UpsApc import TSensorUps
#S = TSensorUps(None)
#S.DoParameter({})
#print(S._Get())

