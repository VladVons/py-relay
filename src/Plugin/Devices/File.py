'''
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2017.11.10
License:     GNU, see LICENSE for more details
Description:
'''

from Inc.Param        import TDictParam
from Core.Device      import TSensorThredRead
from Plugin.Providers.File import TProviderFile_CPUTemp, TProviderFile_W1DS


class TSensorFile_CPUTemp(TSensorThredRead):
    def __init__(self, aParent):
        TSensorThredRead.__init__(self, aParent)

        Pattern = {'File':'/sys/class/thermal/thermal_zone0/temp'}
        self.Param.AddDefPattern(Pattern)

    def DoDoParameter(self, aParam):
        self.Param.LoadPattern(aParam)
        self.Provider = TProviderFile_CPUTemp(self.Param.File)
        self.CreateThread()


class TSensorFile_W1DS(TSensorThredRead):
    def __init__(self, aParent):
        TSensorThredRead.__init__(self, aParent)

        Pattern = {'File':TDictParam.Required}
        self.Param.AddDefPattern(Pattern)

    def DoParameter(self, aParam):
        self.Param.LoadPattern(aParam)
        self.Provider = TProviderFile_W1DS(self.Param.File)
        self.CreateThread()
