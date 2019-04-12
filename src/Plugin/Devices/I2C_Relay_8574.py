"""
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2017.11.10
License:     GNU, see LICENSE for more details

Description:
    Brightness 
"""

from Inc.Log          import Log
from Inc.Param            import TDictParam
from Core.Device          import TRelay
from Plugin.Providers.I2C_Relay_8574  import TProviderI2C_Relay_8574


PkgConf = {
    "Version": "1.01",
    "Author": "Vladvons"
}

class TRelayI2C_Relay_8574(TRelay):
    def __init__(self, aParent):
        TRelay.__init__(self, aParent)

        Pattern = {'Bus': 1, 'Address': TDictParam.Required, 'Command': TDictParam.Required, 'Mirror': False}
        self.Param.AddDefPattern(Pattern)

    def DoParameter(self, aParam):
        self.Param.LoadPattern(aParam)

        if (not 0 <= self.Param.Command <= 7):
            Msg = Log.PrintDbg(1, 'x', 'Value %s is out of range 0-7' % (self.Param.Command))
            raise ValueError(Msg)

        Command = self.Param.Command
        if (self.Param.Mirror):
            Command = 7 - self.Param.Command

        self.Provider = TProviderI2C_Relay_8574(self.Param.Bus, self.Param.Address, Command)
