        
'''
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2018.04.19
License:     GNU, see LICENSE for more details
Description:
'''

import json
#
from Inc.Log          import Log
from Inc.Util         import FS, Net
from Inc.Crypt        import TCrypt


class TProtect():
    def __init__(self):
        self.Crypt = TCrypt()
        self.Info  = {}

    def GetSerial(self):
        return Net.GetMac()

    def GetSerialCrypted(self):
        Data = {'Hard': self.GetSerial()}
        return self.Crypt.Encode(json.dumps(Data))

    def LoadKeyStr(self, aData):
        self.Info = {}
        try:
            StrInfo = self.Crypt.Decode(aData)
            self.Info = json.loads(StrInfo)
        except:
            Log.Print(1, 'x', self.__class__.__name__, 'Error parsing license data')

    def LoadKeyFile(self, aFile):
        Result = FS.FileExists(aFile)
        if (Result):
            Data = FS.LoadFromFileToStr(aFile)
            self.LoadKeyStr(Data)
        else:
            Log.Print(1, 'e', self.__class__.__name__, 'License file not exists %s' % (KeyFile))
        return Result

    def Check(self):
        Result = (self.GetSerial() == self.Info.get('Hard'))
        if (not Result):
            Log.Print(1, 'e', self.__class__.__name__, 'Hardware key mismatch')
        return Result
