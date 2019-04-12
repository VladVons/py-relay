"""
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2018.03.06
License:     GNU, see LICENSE for more details

Description:
Main loop
"""


from Inc.Log            import Log
from Core.Device        import TControl
from Core.HttpServerApi import THttpServerApi


class TControlLoop(TControl):
    def __init__(self, aParent):
        TControl.__init__(self, aParent)

        Pattern = {'Port': 8000, 'Timeout': 1, 'Dir': '/Plugin/Web'}
        self.Param.AddDefPattern(Pattern)

    def DoParameter(self, aParam):
        self.Param.LoadPattern(aParam)

    def _Set(self, aCaller, aValue):
        Log.PrintDbg(3, 'i', 'Alias %s' % (self.Alias))

        if (aValue is True):
            ServerApi = THttpServerApi(self.Param.Port, self.Manager, aCaller)
            ServerApi.Timeout = self.Param.Timeout
            ServerApi.Dir     = self.Param.Dir
            ServerApi.Run()
