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
from .Provider import TProvider
from Inc.Log   import Log
from Inc.Util  import Net


class TDeviceHive():
    def __init__(self, aHost):
        self.Host = aHost
        self.Timeout = 2.0

    def Send(self, aCommand, aData = {}, aTries = 1, aSleep = 0.25):
        Url  = self.Host + aCommand
        #print('---Send', Url, aData)

        Request = Net.Request(Url)
        Request.add_header('Content-Type', 'text/json')
        while (aTries > 0):
            aTries -= 1
            try:
                Response = Net.urlopen(Request, json.dumps(aData), timeout = self.Timeout)
                Data     = Response.read()
                Result   = json.loads(Data)
                break
            except Exception as E:
                time.sleep(aSleep)
                Result = None
        #print('Result', aTries, Url, aData, Result)
        if (Result is None):
            Log.PrintDbg(1, 'e', 'Url %s, Data %s' % (Url, aData))
        return Result


class TDeviceHiveOrig(TDeviceHive):
    def CmdReadDHT22(self, aPin):
        return self.Send('/api/devices/dht22/read', {'pin': aPin}, 1, 0.3)

    def CmdReadDS18B20(self, aPin):
        return self.Send('/api/devices/ds18b20/read', {'pin': aPin}, 1, 0.5)

    def CmdReadMHZ19(self):
        return self.Send('/api/devices/mhz19/read')

    def CmdWritePin(self, aPin, aValue):
        return self.Send('/api/gpio/write', {'%s' % (aPin): int(aValue)})

    def CmdReadPins(self):
        return self.Send('/api/gpio/read')

    def CmdReadPin(self, aPin):
        Data = self.CmdReadPins()
        return Data.get(str(aPin))

    def CmdUartRead(self, aSpeed, aData):
        Data64 = base64.b64encode(aData)
        Result = self.Send('/api/devices/uart/read', {'data': Data64, 'mode': aSpeed})
        if (Result):
            Result = base64.b64decode(Result.get('data'))
        return Result


class TDeviceHiveMy(TDeviceHive):
    def CmdReadDHT22(self, aPin):
        return self.Send('/dev/dht22', {'pin': aPin}, 3, 0.3)

    def CmdReadDS18B20(self, aPin):
        return self.Send('/dev/ds18b20', {'pin': aPin}, 3, 0.5)

    def CmdReadMHZ19(self):
        return self.Send('/dev/mhz19', 3, 0.5)

    def CmdWritePin(self, aPin, aValue):
        return self.Send('/gpio/write', {'%s' % (aPin): int(aValue)})

    def CmdReadPins(self):
        return self.Send('/gpio/read')

    def CmdReadPin(self, aPin):
        Data = self.CmdReadPins()
        return Data.get(str(aPin))


class TProviderDeviceHivePin(TProvider):
    def __init__(self, aHost, aPin):
        self.DH  = TDeviceHiveMy(aHost)
        self.Pin = aPin


# One wire humidity-temperature sensor
class TProviderDeviceHive_DHT22(TProviderDeviceHivePin):
    def Read(self, aNotUsed):
        Result = self.DH.CmdReadDHT22(self.Pin)
        #print(Result)
        #if (not Result):
        #    print('ERR')
        return Result

    def Get(self):
        Result = self.ReadTry()
        if (Result):
            Result = Result['humidity']
        return Result


# One wire water proof sensor
class TProviderDeviceHive_DS18B20(TProviderDeviceHivePin):
    def Read(self, aNotUsed):
        Result = self.DH.CmdReadDS18B20(self.Pin)
        return Result

    def Get(self):
        Result = self.ReadTry()
        if (Result and (len(Result) > 0)):
            print('---1', Result)
            Result = Result['temperature'][0]
        return Result


# Relay
class TProviderDeviceHive_PinOut(TProviderDeviceHivePin):
    def Read(self, aNotUsed):
        return self.DH.CmdReadPin(self.Pin)

    def Write(self, aValue):
        return self.DH.CmdWritePin(self.Pin, aValue)

    def Set(self, aCaller, aValue):
        return self.WriteTry(aValue)

    def Get(self):
        return self.ReadTry()


# CO2  0..5000 ppm (parts-per-million)
class TProviderDeviceHive_MHZ19(TProvider):
    def __init__(self, aHost):
        self.DH = TDeviceHiveMy(aHost)

    def Read(self, aNotUsed):
        Result = self.DH.CmdReadMHZ19()
        return Result

    def Get(self):
        Result = self.ReadTry()
        if (Result):
            Result = Result['co2']
        return Result
