'''
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2018.03.06
License:     GNU, see LICENSE for more details

Description:
Main loop
'''

from Inc.Log            import Log
from Core.Device        import TControl
from Core.HttpServerApi import THTTPServerApi


class TControlLoop(TControl):
    def __init__(self, aParent):
        TControl.__init__(self, aParent)

        Pattern = {'Port': 8000, 'Timeout': 1, 'Dir': '/Plugin/Web'}
        self.Param.AddDefPattern(Pattern)

    def DoParameter(self, aParam):
        self.Param.LoadPattern(aParam)

    def _Set(self, aCaller, aValue):
        Log.Print(3, 'i', self.__class__.__name__, '_Set()', 'Alias %s' % (self.Alias))

        if (aValue == True):
            ServerApi = THTTPServerApi(self.Param.Port, self.Manager, aCaller)
            ServerApi.Timeout = self.Param.Timeout
            ServerApi.Dir     = self.Param.Dir
            ServerApi.Run()
