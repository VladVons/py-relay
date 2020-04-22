"""
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2017.11.10
License:     GNU, see LICENSE for more details
Description:
"""

from Inc.Param import TDictParam
from Plugin.Providers.PioOut import TProviderPioOut
from Plugin.Devices._Common import TRelay


class TRelayPioOut(TRelay):
    def __init__(self, aParent):
        super().__init__(aParent)

        Pattern = {'Pin': TDictParam.Required}
        self.Param.AddDefPattern(Pattern)

    def DoParameter(self, aParam):
        self.Param.LoadPattern(aParam)
        self.Provider = TProviderPioOut(self.Param.Pin)
