"""
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2018.02.16
License:     GNU, see LICENSE for more details

Help:
https://github.com/devicehive/esp8266-firmware/blob/develop/DeviceHiveESP8266.md

Description:
"""


import json
import time
import base64

#
from ._Common  import TProvider
from Inc.Log   import Log
from Inc.Util  import UNet


class TDevMpyRequest():
    def __init__(self, aHost: str):
        self.Host = aHost
        self.Timeout = 2.0

    def Send(self, aCommand, aData: dict = {}, aTries: int = 1, aSleep: float = 0.25):
        Url  = self.Host + aCommand
        #print('---Send', Url, aData)

        Request = UNet.Request(Url)
        Request.add_header('Content-Type', 'text/json')
        while (aTries > 0):
            aTries -= 1
            try:
                Data     = json.dumps(aData).encode('ascii')
                Response = UNet.urlopen(Request, Data, timeout = self.Timeout)
                Data     = Response.read()
                Result   = json.loads(Data)
                break
            except Exception as E: 
                time.sleep(aSleep)
                Result = None
                Log.PrintDbg(1, 'e', 'Url %s, Data %s' % (Url, aData))
        return Result


class TDevMpyCmd(TDevMpyRequest):
    def CmdReadDHT22(self, aPin: int):
        return self.Send('/dev_dht22.py', {'pin': aPin}, 3, 0.3)

    def CmdReadDS18B20(self, aPin: int, aID: str):
        return self.Send('/dev_ds18b20.py', {'pin': aPin, 'id': aID}, 3, 0.5)


class TProviderDevMpy_DHT22(TProviderDevMpyPin):
    def __init__(self, aHost: str, aPin: int):
        self.DH  = TDevMpyCmd(aHost)
        self.Pin = aPin

    def Read(self, aNotUsed):
        Result = self.DH.CmdReadDHT22(self.Pin)
        return Result

    def Get(self):
        Result = self.ReadTry()
        if (Result):
            Result = Result['humidity']
        return Result


class TProviderDevMpy_DS18B20(TProvider):
    def __init__(self, aHost: str, aPin: int, aID: str):
        self.DH  = TDevMpyCmd(aHost)
        self.Pin = aPin
        self.ID  = aID

    def Read(self, aNotUsed):
        Result = self.DH.CmdReadDS18B20(self.Pin, self.ID)
        return Result

    def Get(self):
        Data = self.ReadTry()
        if (Data):
            Result = Data[0].get('value')
        else:
            Result = None
        return Result
