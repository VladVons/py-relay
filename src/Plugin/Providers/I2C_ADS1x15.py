"""
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2017.11.10
License:     GNU, see LICENSE for more details
Description:

I2C analog digital converter ads1115

Install:
#sudo pip install adafruit-ads1x15
sudo pip install Adafruit-ADS1x15

Example:
https://learn.adafruit.com/raspberry-pi-analog-to-digital-converters/ads1015-slash-ads1115
"""


try:
    import Adafruit_ADS1x15
except Exception as E:
    print(__file__, E, 'pip install wheel', 'pip install Adafruit-ADS1x15')
#
from .Provider      import TProvider


class TProviderI2C_ADS1x15(TProvider):
    def __init__(self, aAddress, aIdx):
        self.Address = aAddress
        self.Obj = Adafruit_ADS1x15.ADS1015(address=self.Address, bus=1)

    def Read(self):
        return self.Obj.read_adc(self.Address, gain=GAIN)

    def Get(self):
        Result = self.ReadTry()
        return Result
