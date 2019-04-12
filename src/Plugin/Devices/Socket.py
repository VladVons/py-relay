"""
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2017.11.10
License:     GNU, see LICENSE for more details
Description:
"""

from Inc.Log           import Log
from Inc.Param         import TDictParam
from Core.Device       import TSensor
from Core.DeviceThread import TSensorThreadRead
from Plugin.Providers.Socket import TProviderSocket_Echo, TProviderCheckHost, TProviderCheckInternet


class TSensorSocket_Echo(TSensorThreadRead):
    def __init__(self, aParent):
        TSensorThreadRead.__init__(self, aParent)

        Pattern = {'Host': TDictParam.Required, 'Port': TDictParam.Required, 'Data': 'MyData'}
        self.Param.AddDefPattern(Pattern)

    def DoParameter(self, aParam):
        self.Param.LoadPattern(aParam)
        self.Param.Round = None

        self.Provider = TProviderSocket_Echo(self.Param.Host, self.Param.Port, self.Param.Data)
        self.Provider.TimeOut = 1
        Data = self.Provider.Get()
        if (not Data):
            Msg = Log.PrintDbg(1, 'i', 'Connection error. Alias:%s, Host:%s, Port:%s' % (self.Alias, self.Param.Host, self.Param.Port))
            raise Exception(Msg)

        self.CreateThread()


class TSensorCheckHost(TSensor):
    def __init__(self, aParent):
        TSensor.__init__(self, aParent)

        Pattern = {'Host': TDictParam.Required, 'Port': TDictParam.Required}
        self.Param.AddDefPattern(Pattern)

    def DoParameter(self, aParam):
        self.Param.LoadPattern(aParam)
        self.Provider = TProviderCheckHost(self.Param.Host, self.Param.Port)


class TSensorCheckInternet(TSensor):
    def __init__(self, aParent):
        TSensor.__init__(self, aParent)
        self.Provider = TProviderCheckInternet()
