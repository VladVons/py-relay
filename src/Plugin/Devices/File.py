'''
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2017.11.10
License:     GNU, see LICENSE for more details
Description:
'''

from Inc.Param             import TDictParam
from Core.DeviceThread     import TSensorThreadRead
from Core.Device           import TSensor
from Plugin.Providers.File import TProviderFile_CPUTemp, TProviderFile_W1DS, TProviderFileSize


class TSensorThreadFile(TSensorThreadRead):
    # ensure to run self.CreateThread() if no parameters
    def DoStartExit(self):
        if (not self.HasParam):
            self.DoParameter({})

    def DoParameter(self, aParam):
        self.Param.LoadPattern(aParam)
        self.SetProvider()
        self.CreateThread()


class TSensorFile_CPUTemp(TSensorThreadFile):
    def __init__(self, aParent):
        TSensorThreadFile.__init__(self, aParent)

        Pattern = {'File': '/sys/class/thermal/thermal_zone0/temp'}
        self.Param.AddDefPattern(Pattern)

    def SetProvider(self):
        self.Provider = TProviderFile_CPUTemp(self.Param.File)


class TSensorFile_W1DS(TSensorThreadFile):
    def __init__(self, aParent):
        TSensorThreadFile.__init__(self, aParent)

        Pattern = {'File': TDictParam.Required}
        self.Param.AddDefPattern(Pattern)

    def SetProvider(self):
        self.Provider = TProviderFile_W1DS(self.Param.File)


class TSensorFile_Size(TSensor):
    def __init__(self, aParent):
        TSensor.__init__(self, aParent)

        Pattern = {'File': TDictParam.Required}
        self.Param.AddDefPattern(Pattern)

    def DoParameter(self, aParam):
        self.Param.LoadPattern(aParam)
        self.Provider = TProviderFileSize(self.Param.File)
