'''
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2018.04.26
License:     GNU, see LICENSE for more details
'''

try:
    import serial
except Exception as E:
    print(__file__, E, 'pip install serial')
#
import time
#
from Inc.Log    import Log


class TSerial:
    def __init__(self, aPort = "/dev/ttyAMA0", aSpeed = 9600, aTimeout = 1.0):
        self.Open(aPort, aSpeed, aTimeout)

    def __del__(self):
        self.Close()

    def IsCheckSum(self, aData):
        pass

    def Open(self, aPort, aSpeed, aTimeout):
        self.ser = serial.Serial(
            port     = aPort,
            baudrate = aSpeed,
            parity   = serial.PARITY_NONE,
            stopbits = serial.STOPBITS_ONE,
            bytesize = serial.EIGHTBITS,
            timeout  = aTimeout
        )

        self.Close()
        self.ser.open()

    def Close(self):
        if (self.ser.isOpen()):
            self.ser.close()

    def Send(self, aData, aRcvLen):
        self.ser.write(serial.to_bytes(aData))
        time.sleep(0.1)
        Data = self.ser.read(aRcvLen)
        if (Data and len(Data) == aRcvLen):
            Unpacked = bytearray(Data)
            if (self.IsCheckSum(Unpacked)):
                Result = Unpacked
            else:
                Result = None
            return Result
        else:
            Msg = Log.PrintDbg(1, 'x', 'Err')
            raise Exception(Msg)


