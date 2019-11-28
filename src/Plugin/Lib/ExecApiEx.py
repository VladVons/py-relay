""".
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2018.03.20
License:     GNU, see LICENSE for more details
Description:
"""


import time
import datetime
#
from Inc.Util import UTime
from Core.ExecApi import TExecApi


class TExecApiEx(TExecApi):
    ## --- inherited
    #def xBreak(self, aLabel = 'EXIT'):
    #def xAClass(self, aAlias):
    #def xApi(self, aAlias):
    #def xAPost(self, aAlias, aValue = 0):
    #def xFile(self, aName):
    #def xUptime(self):
    #def xDirection(self):
    #def xError(self):
    #def xValue(self):
    #def xIf(self):
    #def xCntIf(self):
    #def xCntPost(self):
    #def xSetParam(self, aKey, aValue):


    def xAGetValue(self, aAlias, aDef):
        Result = self.xApi(aAlias).xValue
        if (Result is None):
            Result = aDef
        return Result

    def xASetValue(self, aAlias, aValue = None):
        if (aValue is None):
            aValue = self.xValue
        self.xAPost(aAlias, aValue)

    def xASetIf(self, aAlias, aInvert = False):
        self.xAPost(aAlias, self.xIf ^ aInvert)

    def xSleep(self, aValue):
        time.sleep(aValue)

    def xThermostat(self, aBase, aDif = 1, aValue = None):
        if (aValue is None):
            aValue = self.xValue

        if (aDif > 0):
            Result = (aValue < aBase) or (self.xDirection > 0 and aValue < aBase + aDif)
        else:
            Result = (aValue > aBase) or (self.xDirection < 0 and aValue > aBase + aDif)
        return Result

    def xInValue(self, aBegin, aEnd, aValue = None):
        if (aValue is None):
            aValue = self.xValue
        return UTime.CheckRange(aValue, aBegin, aEnd)

    def xInUptime(self, aBegin = '0S', aEnd = '10y'):
        Sec1 = UTime.StrToSec(aBegin)
        Sec2 = UTime.StrToSec(aEnd)
        Now  = self.xUptime
        return UTime.CheckRange(Now, Sec1, Sec2)

    def xInHour(self, aBegin = '00:00:00', aEnd = '23:59:59'):
        Sec1 = UTime.TimeToSec(aBegin)
        Sec2 = UTime.TimeToSec(aEnd)
        Now  = UTime.TimeToSec(datetime.datetime.now().strftime('%H:%M:%S'))
        return UTime.CheckRange(Now, Sec1, Sec2)

    @UTime.RangeDecorator
    def xInValues(self, aRange):
        return self.xInValue(aRange[0], aRange[1])

    @UTime.RangeDecorator
    def xInUptimes(self, aRange):
        return self.xInUptime(aRange[0], aRange[1])

    @UTime.RangeDecorator
    def xInHours(self, aRange):
        return self.xInHour(aRange[0], aRange[1])
