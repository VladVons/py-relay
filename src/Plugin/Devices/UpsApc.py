"""
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2018.10.28
License:     GNU, see LICENSE for more details
Description:
"""

from Inc.Param    import TDictParam
from Core.Device  import TSensor
from Plugin.Providers.UpsApc import TProviderUpsApc

PkgConf = {
    "Version": "1.01",
    "Author": "Vladvons"
}

class TSensorUpsApc(TSensor):
    def __init__(self, aParent):
        super().__init__(aParent)

        Pattern = {'Host': 'localhost', 'Port': 3551, "Round": 1}
        self.Param.AddDefPattern(Pattern)

    def DoParameter(self, aParam):
        self.Param.LoadPattern(aParam)
        self.Provider = TProviderUpsApc(self.Param.Host, self.Param.Port)
