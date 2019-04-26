"""
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2019.04.10
License:     GNU, see LICENSE for more details

Description:
Make classes visible for this directory
"""

from Core.Device          import TControl


class TRelay(TControl):
    def __init__(self, aParent):
        TControl.__init__(self, aParent)

        Pattern = {'State': False, 'Invert': False}
        self.Param.AddDefPattern(Pattern)

        self.Range.Set(None, [0, 1])

    def _Set(self, aCaller, aValue):
        Value = aValue ^ self.Param.Invert
        TControl._Set(self, aCaller, Value)

    def _Get(self):
        Value = TControl._Get(self)
        return bool(Value) ^ self.Param.Invert
