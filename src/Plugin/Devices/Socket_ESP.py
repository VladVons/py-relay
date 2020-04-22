"""
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2017.11.10
License:     GNU, see LICENSE for more details
Description:
"""


from Inc.Log            import Log
from Inc.Param          import TDictParam
from Core.DeviceThread  import TSensorThreadRead
from Plugin.Providers.Socket_ESP import TProviderSocket_ESP


class TSensorSocket_ESP_DHT(TSensorThreadRead):
    def __init__(self, aParent):
        super().__init__(aParent)

        Pattern = {'Host': TDictParam.Required, 'Port': TDictParam.Required}
        self.Param.AddDefPattern(Pattern)

    def DoParameter(self, aParam):
        self.Param.LoadPattern(aParam)
        self.Param.Round = None

        self.Provider = TProviderSocket_ESP(self.Param.Host, self.Param.Port)
        self.CreateThread()
