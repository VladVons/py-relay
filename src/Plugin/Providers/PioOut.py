"""
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2017.11.09
License:     GNU, see LICENSE for more details

Description:
Writes value to GPio

Example:
Pin = 4
Obj = TProviderPioOut(Pin)
Obj.Set(None, True)
"""

try:
    import RPi.GPIO as GPIO
except Exception as E:
    print(__file__, E)
#
from ._Common import TProvider


class TProviderPio(TProvider):
    def __init__(self, aPio):
        self.Pio = aPio
        GPIO.setmode(GPIO.BCM)

    def Write(self, aValue):
        GPIO.setup(self.Pio, GPIO.OUT)
        GPIO.output(self.Pio, int(not aValue))


class TProviderPioOut(TProviderPio):
    def Set(self, aCaller, aValue):
        return self.WriteTry(aValue)
