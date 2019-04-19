"""
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2018.03.12
License:     GNU, see LICENSE for more details
Description:
"""


try:
    import minimalmodbus
except Exception as E:
    print(__file__, E, 'pip install minimalmodbus')
#
from Inc.Log   import Log
from ._Common  import TProvider


class TProviderModbusRTU(TProvider):
    def __init__(self, aPort, aAddress, aRegister):
        self.Address  = aAddress
        self.Register = aRegister

        try:
            self.Obj = minimalmodbus.Instrument(aPort, self.Address)
        except Exception as E:
            Msg = Log.PrintDbg(1, 'x', E)
            raise Exception(Msg)

    def Read(self, aNotUsed):
        self.Obj.address = self.Address
        return self.Obj.read_register(self.Register)

    def Write(self, aValue):
        self.Obj.address = self.Address
        self.Obj.write_register(self.Register, aValue, functioncode = 6)

    def Get(self):
        return self.ReadTry()

    def Set(self, aCaller, aValue):
        return self.WriteTry(aValue)
