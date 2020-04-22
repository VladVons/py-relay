"""
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2017.11.10
License:     GNU, see LICENSE for more details
Description:
"""

from Inc.Param        import TDictParam
from Core.Device      import TSensor
from Plugin.Providers.ShellExec import TProviderShellExec, TProviderShellExec_CPULoad


class TSensorShellExec(TSensor):
    def __init__(self, aParent):
        super().__init__(aParent)

        Pattern = {'Command': TDictParam.Required}
        self.Param.AddDefPattern(Pattern)

    def DoParameter(self, aParam):
        self.Param.LoadPattern(aParam)
        self.Provider = TProviderShellExec(self.Param.Command)


class TSensorShellExec_CPULoad(TSensor):
    def DoParameter(self, aParam):
        self.Param.LoadPattern(aParam, {})
        self.Provider = TProviderShellExec_CPULoad()
