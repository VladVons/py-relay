'''
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2017.11.10
License:     GNU, see LICENSE for more details
Description:
'''

import os

try:
    import smbus
except Exception as E:
    print(__file__, E, 'apt-get install python-smbus')
#
try:
    import Adafruit_ADS1x15
except Exception as E:
    print(__file__, E, 'pip install wheel', 'pip install Adafruit-ADS1x15')
#
try:
    import Adafruit_BMP.BMP085 as BMP085
except Exception as E:
    print(__file__, E, 'pip install Adafruit-BMP')

#
from Inc.Log         import Log
from Inc.Util        import Num, Time
from .Provider import TProvider


class TProviderI2C(TProvider):
    def __init__(self, aBus, aAddress, aCommand = 0):
        self.Bus     = smbus.SMBus(aBus)
        self.Address = aAddress
        self.Command = aCommand

    def Read(self, aCommand):
        return self.Bus.read_i2c_block_data(self.Address, aCommand)

    def ReadByte(self):
        return self.Bus.read_byte(self.Address)

    def Write(self, aCommand):
        self.Bus.write_byte_data(self.Address, 0, aCommand)


"""
I2C analog digital converter ads1115

Install:
#sudo pip install adafruit-ads1x15
sudo pip install Adafruit-ADS1x15

Example:
https://learn.adafruit.com/raspberry-pi-analog-to-digital-converters/ads1015-slash-ads1115
"""
class TProviderI2C_ADS1x15(TProvider):
    def __init__(self, aAddress, aIdx):
        self.Address = aAddress
        self.Obj = Adafruit_ADS1x15.ADS1015(address=self.Address, bus=1)

    def Read(self):
        return self.Obj.read_adc(self.Address, gain=GAIN)

    def Get(self):
        Result = self.ReadTry()
        return Result


"""
Reads brightness from I2C sensor BH1750

Example:
Bus     = 1
Address = 35
Obj     = TProviderI2C_BH1750(Bus, Address)
Value   = Obj.Get()
"""
class TProviderI2C_BH1750(TProviderI2C):
    def Get(self):
        Result = self.ReadTry(self.Command)
        if (Result):
            Lux = 1.2
            Result = (Result[1] + (256 * Result[0])) / Lux
        return Result


"""
I2C atmosphere pressure sensor

Install:
#sudo pip install adafruit-bmp
sudo pip install Adafruit-BMP
"""
class TProviderI2C_BMP280(TProvider):
    def __init__(self, aAddress):
        self.Address = aAddress
        self.Obj = BMP085.BMP085(address=self.Address)

    def Read(self, aNotUsed):
        Result = {}
        Result['preasure']    = self.Obj.read_pressure()
        Result['temperature'] = self.Obj.read_temperature()
        Result['altitude']    = self.Obj.read_altitude()
        Result['def']         = Result['preasure']
        return Result

    def Get(self, aKey = 'def'):
        return self.GetKey(aKey)


"""
Writes value to GPio

Example:
Bus     = 1
Address = 27
Command = 0x08
Obj = TProviderI2CPioOut(Bus, Address, Command)
Obj.Set(None, True)
"""
class TProviderI2C_Relay_8574(TProviderI2C):
    def __init__(self, aBus, aAddress, aCommand):
        TProviderI2C.__init__(self, aBus, aAddress, aCommand)
        self.Bits = 4

        if ((aCommand == 0) or (aCommand > self.Bits)):
            Msg = Log.Print(1, 'i', self.__class__.__name__, '__init__()', 'Command %s out of Bits %s' % (aCommand, self.Bits))
            raise Exception(Msg)

    def Set(self, aCaller, aValue):
        PrevValue = self.Get()
        Value     = Num.SetBit(PrevValue, 8 - self.Command, bool(aValue))
        #print('--1', self.Address, PrevValue, "{0:b}".format(Value))
        return self.WriteTry(Value)

    def Get(self):
        return self.ReadByte()
