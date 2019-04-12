"""
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2017.11.10
License:     GNU, see LICENSE for more details
Description:

I2C atmosphere pressure sensor

Install:
#sudo pip install adafruit-bmp
sudo pip install Adafruit-BMP
"""

import os
#
try:
    import Adafruit_BMP.BMP085 as BMP085
except Exception as E:
    print(__file__, E, 'pip install Adafruit-BMP')
#
from .Provider import TProvider


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
