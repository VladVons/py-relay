"""
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2018.03.22
License:     GNU, see LICENSE for more details
Description:
"""


from Inc.Param        import TDictParam
from Inc.Log          import Log
from Core.Device      import TControl
from Plugin.Providers.Modbus import TProviderModbusRTU


class TControlModbus(TControl):
    def __init__(self, aParent):
        super().__init__(aParent)

        Pattern = {'Port': TDictParam.Required, 'Address': TDictParam.Required, 'Register': TDictParam.Required}
        self.Param.AddDefPattern(Pattern)

    def DoParameter(self, aParam):
        self.Param.LoadPattern(aParam)

        self.Range.Set(None, [0, 170])
        self.Modbus = TProviderModbusRTU(self.Param.Port, self.Param.Address, self.Param.Register)

    def _Set(self, aCaller, aValue):
        self.Modbus.Set(aCaller, aValue)
