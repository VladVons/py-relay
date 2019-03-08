'''
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2017.11.10
License:     GNU, see LICENSE for more details
Description:

Reads brightness from I2C sensor BH1750

Example:
Bus     = 1
Address = 35
Obj     = TProviderI2C_BH1750(Bus, Address)
Value   = Obj.Get()
'''

import os

#
from .I2C import TProviderI2C

class TProviderI2C_BH1750(TProviderI2C):
    def Get(self):
        Result = self.ReadTry(self.Command)
        if (Result):
            Lux = 1.2
            Result = (Result[1] + (256 * Result[0])) / Lux
        return Result
