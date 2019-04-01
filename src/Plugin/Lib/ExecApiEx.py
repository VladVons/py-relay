'''.
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2018.03.20
License:     GNU, see LICENSE for more details
Description:
'''

import time
import datetime
#
from Inc.Util import Time
from Core.ExecApi import TExecApi


class TExecApiEx(TExecApi):
    ## --- inherited
    #def Break(self, aLabel = 'EXIT'):
    #def Class(self, aAlias):
    #def Api(self, aAlias):
    #def File(self, aName):
    #def Uptime(self):
    #def Direction(self):
    #def Error(self):
    #def Value(self):
    #def If(self):
    #def CountIf(self):
    #def SetParam(self, aKey, aValue):


    def ASetValue(self, aAlias, aValue = None):
        if (aValue is None):
            aValue = self.Value
        self.APost(aAlias, aValue)

    def ASetIf(self, aAlias, aInvert = False):
        self.APost(aAlias, self.If ^ aInvert)

    def Sleep(self, aValue):
        time.sleep(aValue)

    def Thermostat(self, aBase, aDif = 1, aValue = None):
        if (aValue is None):
            aValue = self.Value

        if (aDif > 0):
            Result = (aValue < aBase) or (self.Direction > 0 and aValue < aBase + aDif)
        else:
            Result = (aValue > aBase) or (self.Direction < 0 and aValue > aBase + aDif)
        return Result

    def InValue(self, aBegin, aEnd, aValue = None):
        if (aValue is None):
            aValue = self.Value
        return Time.CheckRange(aValue, aBegin, aEnd)

    def InUptime(self, aBegin = '0S', aEnd = '10y'):
        Sec1 = Time.StrToSec(aBegin)
        Sec2 = Time.StrToSec(aEnd)
        Now  = self.Uptime
        return Time.CheckRange(Now, Sec1, Sec2)

    def InHour(self, aBegin = '00:00:00', aEnd = '23:59:59'):
        Sec1 = Time.TimeToSec(aBegin)
        Sec2 = Time.TimeToSec(aEnd)
        Now  = Time.TimeToSec(datetime.datetime.now().strftime('%H:%M:%S'))
        return Time.CheckRange(Now, Sec1, Sec2)

    @Time.RangeDecorator
    def InValues(self, aRange):
        return self.InValue(aRange[0], aRange[1])

    @Time.RangeDecorator
    def InUptimes(self, aRange):
        return self.InUptime(aRange[0], aRange[1])

    @Time.RangeDecorator
    def InHours(self, aRange):
        return self.InHour(aRange[0], aRange[1])
