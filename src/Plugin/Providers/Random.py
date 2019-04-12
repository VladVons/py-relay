"""
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2017.11.09
License:     GNU, see LICENSE for more details

Description:
Reads random digits in range Min and Max

Example:
Min     = 100
Max     = 200
Obj     = TProviderRandom(Min, Max)
Value   = Obj.Get()
"""

import random
#
from .Provider import TProvider


class TProviderRandom(TProvider):
    def __init__(self, aMin, aMax):
        self.Min = aMin
        self.Max = aMax

    def Read(self, aNotUsed):
        Result = random.randint(self.Min, self.Max)
        #Result = 26
        return Result

    def Get(self):
        return self.ReadTry()
