"""
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2017.02.16
License:     GNU, see LICENSE for more details
Description:
"""

from Inc.Log     import Log
from Inc.Param   import TDictParam
from Inc.Util    import Net
from Plugin.Devices._Common import TRelay


from Core.DeviceThread import (
    TSensorThreadRead, 
    TProviderThreadRead,
)

from Plugin.Providers.DeviceHive import (
    TProviderDeviceHive_DHT22, 
    TProviderDeviceHive_DS18B20, 
    TProviderDeviceHive_PinOut,
    TProviderDeviceHive_MHZ19
)


PkgConf = {
    "Version": "1.01",
    "Author": "Vladvons"
}

def CheckHostPort(aHost):
    Arr = Net.UrlParse(aHost)
    Host = Arr.netloc
    if (not Host):
        Host = Arr.path
    Port = 80
    if (not Net.CheckHostPort(Host, Port)):
        Msg = Log.PrintDbg(1, 'e', 'Cant connect to host %s:%s' % (Host, Port))
        #raise Exception(Msg)


class TSensorDeviceHiveThread(TSensorThreadRead):
    def __init__(self, aParent):
        TSensorThreadRead.__init__(self, aParent)

        Pattern = {'Host': TDictParam.Required, 'Avg': 3, 'Round': 0.25}
        self.Param.AddDefPattern(Pattern)

    def DoParameter(self, aParam):
        self.Param.LoadPattern(aParam)

        CheckHostPort(self.Param.Host)
        self.Avg.SetSize(self.Param.Avg)

        self.SetProvider()
        self.CreateThread()


#--- SensorDeviceHivePinThread Begin
class TSensorDeviceHivePinThread(TSensorDeviceHiveThread):
    def __init__(self, aParent):
        TSensorDeviceHiveThread.__init__(self, aParent)

        Pattern = {'Pin': TDictParam.Required}
        self.Param.AddDefPattern(Pattern)


class TSensorDeviceHive_DHT22(TSensorDeviceHivePinThread):
    def SetProvider(self):
        self.Range.Set('temperature', [-40, 80])
        self.Range.Set('humidity',    [0, 100])
        self.Provider = TProviderDeviceHive_DHT22(self.Param.Host, self.Param.Pin)


class TSensorDeviceHive_DS18B20(TSensorDeviceHivePinThread):
    def SetProvider(self):
        self.Range.Set(None, [-55, 125])
        self.Provider = TProviderDeviceHive_DS18B20(self.Param.Host, self.Param.Pin)
#--- SensorDeviceHivePinThread End


#--- ProviderDeviceHivePinThread Begin
class TProviderDeviceHivePinThread(TProviderThreadRead):
    def __init__(self, aParent):
        TProviderThreadRead.__init__(self, aParent)

        Pattern = {'Host': TDictParam.Required, 'Pin': TDictParam.Required}
        self.Param.AddDefPattern(Pattern)

    def DoParameter(self, aParam):
        self.Param.LoadPattern(aParam)
        CheckHostPort(self.Param.Host)

        self.SetProvider()
        self.CreateThread()


class TProviderDeviceHivePinThread_DHT22(TProviderDeviceHivePinThread):
    def SetProvider(self):
        self.Provider = TProviderDeviceHive_DHT22(self.Param.Host, self.Param.Pin)
#--- ProviderDeviceHivePinThread End


class TSensorDeviceHiveMHZ19(TSensorDeviceHiveThread):
    def SetProvider(self):
        self.Range.Set(None, [0, 5000])
        self.Provider = TProviderDeviceHive_MHZ19(self.Param.Host)


class TRelayDeviceHive_PinOut(TRelay):
    def __init__(self, aParent):
        TRelay.__init__(self, aParent)

        Pattern = {'Host': TDictParam.Required, 'Pin': TDictParam.Required}
        self.Param.AddDefPattern(Pattern)

    def DoParameter(self, aParam):
        self.Param.LoadPattern(aParam)
        CheckHostPort(self.Param.Host)

        self.Provider = TProviderDeviceHive_PinOut(self.Param.Host, self.Param.Pin)

