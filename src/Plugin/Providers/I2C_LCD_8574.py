"""
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2017.11.04
License:     GNU, see LICENSE for more details
Description:

Handling I2C LCD display based on 8574 chip

Example:
Bus     = 1
Address = 0x27
Cols    = 20
Rows    = 4
Obj     = TProviderI2C_LCD_8574(Bus, Address, Cols, Rows)
Obj.CursorTo(0,0)
Obj.PrintLn('Hello world')
"""

from Inc.Util        import Time
from .I2C            import TProviderI2C

class TProviderI2C_LCD_8574(TProviderI2C):
    MaskData      = 0x00
    MaskRS        = 1 << 0
    MaskRW        = 1 << 1
    MaskEnable    = 1 << 2
    MaskBacklight = 1 << 3

    def __init__(self, aBus, aAddress, aCols, aRows):
        TProviderI2C.__init__(self, aBus, aAddress)
        self.Cols    = aCols
        self.Rows    = aRows

        self.InitDisplay()
        self.EnableBacklight(True)

    def EnableBacklight(self, aMode):
        if (aMode):
            self.MaskData = self.MaskData | self.MaskBacklight
        else:
            self.MaskData = self.MaskData & ~self.MaskBacklight
 
    def InitDisplay(self):
        Time.DelayMiliSec(1.0)
        self.Write4Bits(0x30)
        Time.DelayMiliSec(4.5)
        self.Write4Bits(0x30)
        Time.DelayMiliSec(4.5)
        self.Write4Bits(0x30)
        Time.DelayMiliSec(0.15)
        self.Write4Bits(0x20)
        self.SendCommand(0x20 | 0x08)
        self.SendCommand(0x04 | 0x08, aDelay = 80.0)
        self.Clear()
        self.SendCommand(0x04 | 0x02)
        Time.DelayMiliSec(3)

    def SendCommand(self, aValue, aDelay = 50.0):
        self.Send(aValue, 0)
        Time.DelayMicroSec(aDelay)

    def Send(self, aData, aMode):
        self.Write4Bits( (aData & 0xF0) | aMode)
        self.Write4Bits( (aData << 4) | aMode)

    def Write4Bits(self, aValue):
        aValue = aValue & ~self.MaskEnable
        self.WriteBus(aValue)
        self.WriteBus(aValue | self.MaskEnable)
        self.WriteBus(aValue)

    def WriteBus(self, aData):
        return self.WriteTry(aData | self.MaskData)

    def CursorTo(self, aRow, aCol):
        Offsets = [0x00, 0x40, 0x14, 0x54]
        self.SendCommand(0x80 | (Offsets[aRow] + aCol))

    def Clear(self):
        self.SendCommand(0x10)

    def PrintLn(self, aLine):
        for Char in aLine:
            self.PrintChar(Char)

    def PrintChar(self, aChar):
        Code = ord(aChar)
        self.Send(Code, self.MaskRS)
