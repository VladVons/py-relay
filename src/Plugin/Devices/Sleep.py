'''
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2018.03.03
License:     GNU, see LICENSE for more details

Description:
Sleep process for timeout in seconds 
'''

import time
#
from Inc.Param        import TDictParam
from Inc.Log          import Log
from Core.Device      import TControl


class TControlSleep(TControl):
    def __init__(self, aParent):
        TControl.__init__(self, aParent)

        Pattern = {'Time': 1, 'OnStart': True}
        self.Param.AddDefPattern(Pattern)

    def DoParameter(self, aParam):
        self.Param.LoadPattern(aParam)

        if (self.Param.OnStart):
            time.sleep(self.Param.Time)

    def _Set(self, aCaller, aValue):
        #Log.Print(1, 'i', self.__class__.__name__, '_Set()', 'Alias %s' % (self.Alias))
        time.sleep(self.Param.Time)
