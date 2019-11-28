"""
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2018.04.19
License:     GNU, see LICENSE for more details
Description:
"""


import json
#
from Inc.Log          import Log
from Inc.Util         import UFS, UNet
from Inc.Crypt        import TCrypt


class TProtect():
    def __init__(self):
        self.Crypt = TCrypt()
        self.Info  = {}

    def GetSerial(self):
        return UNet.GetMac()

    def GetSerialCrypted(self):
        Data = {'Hard': self.GetSerial()}
        return self.Crypt.Encode(json.dumps(Data))

    def LoadKeyStr(self, aData: str):
        self.Info = {}
        try:
            StrInfo = self.Crypt.Decode(aData)
            self.Info = json.loads(StrInfo)
        except:
            Log.PrintDbg(1, 'x', 'Error parsing license data')

    def LoadKeyFile(self, aFile: str):
        Result = UFS.FileExists(aFile)
        if (Result):
            Data = UFS.LoadFromFileToStr(aFile)
            self.LoadKeyStr(Data)
        else:
            Log.PrintDbg(1, 'e', 'License file not exists %s' % (aFile))
        return Result

    def Check(self):
        Result = (self.GetSerial() == self.Info.get('Hard'))
        if (not Result):
            Log.PrintDbg(1, 'e', 'Hardware key mismatch')
        return Result
