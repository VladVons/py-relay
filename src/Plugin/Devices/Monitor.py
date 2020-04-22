"""
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2017.11.13
License:     GNU, see LICENSE for more details

Description:
    write Tag message to log

Example:
    Obj = TControlLog('MyControl')
"""


from Inc.Param        import TDictParam
from Inc.ScreenTxt    import TScreenTxt
from Core.Device      import TControl
from Plugin.Providers.I2C_LCD_8574 import TProviderI2C_LCD_8574


class TLCD():
    def __init__(self, aAddress):
        LCD_8574 = TProviderI2C_LCD_8574(1, aAddress, 20, 4)
        self.Screen = TScreenTxt()
        self.Screen.SetProvider(LCD_8574)

    def Print(self, aKey, aValue):
        self.Screen.Print('{:14}{:6}'.format(aKey, aValue))


class TControlMonitorLCD(TControl):
    def __init__(self, aParent):
        super().__init__(aParent)

        Pattern = {'Address': TDictParam.Required}
        self.Param.AddDefPattern(Pattern)

    def DoParameter(self, aParam):
        self.Param.LoadPattern(aParam)
        self.LCD = TLCD(self.Param.Address)

    def _Set(self, aCaller, aValue):
        self.LCD.Print(aCaller.Alias, aCaller.Value)
