'''
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2017.11.10
License:     GNU, see LICENSE for more details
Description:
'''

from Inc.Param        import TDictParam
from Core.Device      import TRelay
from Plugin.Providers.PioOut import TProviderPioOut


class TRelayPioOut(TRelay):
    def __init__(self, aParent):
        TRelay.__init__(self, aParent)

        Pattern = {'Pin': TDictParam.Required}
        self.Param.AddDefPattern(Pattern)

    def DoParameter(self, aParam):
        self.Param.LoadPattern(aParam)
        self.Provider = TProviderPioOut(self.Param.Pin)
