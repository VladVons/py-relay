'''
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2017.10.15
License:     GNU, see LICENSE for more details

Description:

Example:
Obj = TTimeRangeCycle()
Obj.SetRanges([ { "On":"5", "Off": "3"} ])
#Obj.SetRanges([ { "On":"5M", "Off": "3M"} ])
while True:
    print(Obj.Get())
    time.sleep(1)

'''

import datetime
import time
#
from Inc.Log   import Log
from Inc.Util  import Time
from Inc.Util  import Num


class TBaseRange():
    def __init__(self):
        self.Delim  = ''
        self.PadLen = 2
        self.Ranges = []


    def AddRange(self, aOn, aOff):
        self.Ranges.append([aOn, aOff])

    def SetRanges(self, aRanges):
        self.Ranges = []
        for Range in aRanges:
            On  = self._Adjust(Range.get('On'))
            Off = self._Adjust(Range.get('Off'))

            if (not On):
                Msg = Log.Print(1, 'e', self.__class__.__name__, 'init()', 'On is empty')
                raise ValueError(Msg)

            if (not Off):
                Msg = Log.Print(1, 'e', self.__class__.__name__, 'init()', 'Off is empty')
                raise ValueError(Msg)

            self._Load(On, Off)

    def GetUptime(self):
        return int(time.time())


# [ { "On":"5", "Off": "2"} ]
class TTimeRangeCycle(TBaseRange):
    def _Adjust(self, aValue):
        return Time.StrToSec(aValue)

    def _Load(self, aOn, aOff):
        self.AddRange(aOn, aOff)

    def Get(self):
        Result = 0

        Duration = self.GetDuration()
        Offset   = self.GetUptime() % Duration
        Idx      = 0
        for On, Off in self.Ranges:
            if ( (Offset >= Idx) and (Offset < Idx + On) ):
                Result = 1
                break
            Idx += On + Off
        return Result

    def GetDuration(self):
        return sum(On + Off for On, Off in self.Ranges)


class TTimeRange(TBaseRange):
    def _Adjust(self, aValue):
        # 7 to 07:00:00, 07:5 to 07:05:00, etc
        Result = self.Mask

        if (self.Delim == ''):
            Items = [aValue]
        else:
            Items = aValue.split(self.Delim)

        Idx = 0
        for Item in Items:
            Replace =  Item.zfill(self.PadLen)
            Result = Result[:Idx] + Replace + Result[Idx + len(Replace):]
            Idx += self.PadLen + len(self.Delim)
        return Result

    def _Load(self, aOn, aOff):
        if (aOn >= aOff):
            Msg = Log.Print(1, 'e', self.__class__.__name__, '_Load()', '(On %s) is greater then (Off %s)' % (aOn, aOff))
            raise ValueError(Msg)

        if (self.Ranges):
            LastOff = self.Ranges[-1][1]
            if (aOn < LastOff):
                Msg = Log.Print(1, 'e', self.__class__.__name__, '_Load()', '(On %s) is less then last (Off %s)' % (aOn, LastOff))
                raise ValueError(Msg)

        self.AddRange(aOn, aOff)

    def Get(self):
        Result = 0
        Now = datetime.datetime.now().strftime(self.Format)

        for On, Off in self.Ranges:
            if ( (Now >= On) and (Now < Off) ):
                Result = 1
                break
        return Result


# [{ "On":"7", "Off": "09:19:30"}, { "On":"21:00:03", "Off": "22:00"}, { "On":"23:45", "Off": "23:46"} ]
class TTimeRangeDay(TTimeRange):
    def __init__(self):
        #super().__init__() # __need v3.5
        TTimeRange.__init__(self)

        self.Delim  = ':'
        self.Mask   = '00:00:00'
        self.Format = '%H:%M:%S'


# [ { "On":"0", "Off": "2"} ]
class TTimeRangeWeek(TTimeRange):
    # 0 is Sunday 
    def __init__(self):
        #super().__init__() # __need v3.5
        TTimeRange.__init__(self)

        self.Mask   = '0'
        self.Format = '%w'
        self.PadLen = 1


# [ { "On":"2", "Off": "03"}, { "On":"10", "Off": "11"} ]
class TTimeRangeMonth(TTimeRange):
    def __init__(self):
        #super().__init__() # __need v3.5
        TTimeRange.__init__(self)

        self.Mask   = '00'
        self.Format = '%m'


# [ { "On":"8", "Off": "08.12"}, { "On":"10.16", "Off": "10.17"} ]
class TTimeRangeYear(TTimeRange):
    def __init__(self):
        #super().__init__() # __need v3.5
        TTimeRange.__init__(self)

        self.Delim  = '.'
        self.Mask   = '00.01'
        self.Format = '%m.%d'


class TTimeRangeDayFadeWave(TTimeRangeDay):
    def __init__(self, aMin = -10, aMax = 10):
        TTimeRangeDay.__init__(self)
        self.Min = aMin
        self.Max = aMax
        self.Mid = (aMin + aMax) / 2

    def SetRanges(self, aRanges):
        TTimeRangeDay.SetRanges(self, aRanges)

        self.RangesSec = []
        for i in range(len(self.Ranges)):
            On, Off = self.Ranges[i]
            self.RangesSec.append([Time.TimeToSec(On), Time.TimeToSec(Off)])
            On, Off = self._GetHoleRange(i)
            self.RangesSec.append([Time.TimeToSec(On) + 1, Time.TimeToSec(Off)])

    def _GetHoleRange(self, aIdx):
        Len = len(self.Ranges)
        if (aIdx == Len - 1):
            Result = [self.Ranges[aIdx][1], '23:59:59']
        else:
            Result = [self.Ranges[aIdx][1], self.Ranges[aIdx+1][0]]
        return Result

    def Get(self):
        StrNow = datetime.datetime.now().strftime(self.Format)
        Now    = Time.TimeToSec(StrNow)

        Len = len(self.RangesSec)
        for i in range(Len):
            On, Off = self.RangesSec[i]
            if ((Now >= On) and (Now < Off)):
                if (i % 2 == 0):
                    self.FadeW = Num.TFadeWave(On, Off, self.Mid, self.Max)
                else:
                    self.FadeW = Num.TFadeWave(On, Off, self.Mid, self.Min)
                    self.FadeW.Night = True
                return round(self.FadeW.Get(Now), 2)
        return self.Mid


#---
from .Provider import TProvider

class TProviderTimeRangeBase(TProvider):
    def __init__(self, aRanges):
        self.Obj = self.SetObj()
        self.Obj.SetRanges(aRanges)

    def Read(self, aNotUsed):
        Result = self.Obj.Get()
        return Result

    def Get(self):
        return self.ReadTry()


class TProviderTimeRangeCycle(TProviderTimeRangeBase):
    def SetObj(self):
        return TTimeRangeCycle()


class TProviderTimeRangeDay(TProviderTimeRangeBase):
    def SetObj(self):
        return TTimeRangeDay()


class TProviderTimeRangeDayFadeWave(TProviderTimeRangeBase):
    def __init__(self, aRanges, aMin, aMax):
        self.Min = aMin
        self.Max = aMax
        TProviderTimeRangeBase.__init__(self, aRanges)

    def SetObj(self):
        return TTimeRangeDayFadeWave(self.Min, self.Max)