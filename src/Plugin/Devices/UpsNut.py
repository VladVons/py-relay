'''
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2019.01.03
License:     GNU, see LICENSE for more details
Description:
'''

from Inc.Param    import TDictParam
from Core.Device  import TSensor
from Plugin.Providers.UpsNut import TProviderUpsNut


class TSensorUpsNut(TSensor):
    def __init__(self, aParent):
        TSensor.__init__(self, aParent)

        Pattern = {'Name': TDictParam.Required}
        self.Param.AddDefPattern(Pattern)

    def DoParameter(self, aParam):
        self.Param.LoadPattern(aParam)
        self.Provider = TProviderUpsNut(self.Param.Name)