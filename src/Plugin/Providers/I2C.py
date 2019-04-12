"""
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2017.11.10
License:     GNU, see LICENSE for more details
Description:
"""


import os

try:
    import smbus
except Exception as E:
    print(__file__, E, 'apt-get install python-smbus')
#
from .Provider import TProvider


class TProviderI2C(TProvider):
    def __init__(self, aBus, aAddress, aCommand = 0):
        self.Bus     = smbus.SMBus(aBus)
        self.Address = aAddress
        self.Command = aCommand

    def Read(self, aCommand):
        return self.Bus.read_i2c_block_data(self.Address, aCommand)

    def Write(self, aCommand):
        #print('--- WriteByte()', aCommand)
        self.Bus.write_byte_data(self.Address, 0, aCommand)

    def ReadByte(self):
        Result = self.Bus.read_byte(self.Address)
        return Result

    def WriteByte(self, aCommand):
        self.Bus.write_byte(self.Address, aCommand)
