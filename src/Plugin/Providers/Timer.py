"""
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

"""

import time
#
from Inc.Log   import Log
from Inc.Util  import UTime, UNum, UArr


class TRangeBase():
    def __init__(self):
        self.Delim  = ''
        self.PadLen = 2
        self.Times  = []
        self.Values = []

    def GetValue(self, aIdx):
        if (aIdx >= len(self.Values)):
            Result = self.Values[-1]
        else:
            Result = self.Values[aIdx]
        return Result

    def CheckOnOff(self, aList):
        Keys  = ['On', 'Off']

        Result = []
        for Item in aList:
            UArr.CheckDif(Item.keys(), Keys)
            Range = [0, 0]
            for Idx, Key in enumerate(Keys):
                Value = Item.get(Key)
                if (Value is None):
                    Msg = Log.PrintDbg(1, 'e', 'Key %s is empty' % Key, aList)
                    raise ValueError(Msg)
                Range[Idx] = Value
            Result.append(Range)
        return Result

    def SetRanges(self, aTime, aValue):
        Items = self.CheckOnOff(aTime)
        for Item in Items:
            On  = self._Adjust(Item[0])
            Off = self._Adjust(Item[1])
            self._Load(On, Off)

        self.Values = self.CheckOnOff(aValue)
        if (not self.Values):
            self.Values.append([1, 0])

    def GetUptime(self):
        return int(time.time())


# [ { "On":"5", "Off": "2"} ]
class TTimeRangeCycle(TRangeBase):
    def _Adjust(self, aValue):
        return UTime.StrToSec(aValue)

    def _Load(self, aOn, aOff):
        self.Times.append([aOn, aOff])

    def Get(self):
        Duration = self.GetDuration()
        Offset   = self.GetUptime() % Duration
        Sum = 0
        for Idx, (On, Off) in enumerate(self.Times):
            SumOn = Sum + On
            if ((Offset >= Sum) and (Offset < SumOn)):
                return self.GetValue(Idx)[0]
            elif ((Offset >= SumOn) and (Offset < SumOn + Off)):
                return self.GetValue(Idx)[1]
            Sum += On + Off
        return self.GetValue(Idx)[1]

    def GetDuration(self):
        return sum(On + Off for On, Off in self.Times)


class TTimeRange(TRangeBase):
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
            Msg = Log.PrintDbg(1, 'e', '(On %s) is greater then (Off %s)' % (aOn, aOff))
            raise ValueError(Msg)

        if (self.Times):
            LastOff = self.Times[-1][1]
            if (aOn < LastOff):
                Msg = Log.PrintDbg(1, 'e', '(On %s) is less then last (Off %s)' % (aOn, LastOff))
                raise ValueError(Msg)

        self.Times.append([aOn, aOff])

    def Get(self):
        Now = time.strftime(self.Format)

        for Idx, (On, Off) in enumerate(self.Times):
            if ((Now >= On) and (Now < Off)):
                return self.GetValue(Idx)[0]
        return self.GetValue(Idx)[1]


# [{ "On":"7", "Off": "09:19:30"}, { "On":"21:00:03", "Off": "22:00"}, { "On":"23:45", "Off": "23:46"} ]
class TTimeRangeDay(TTimeRange):
    def __init__(self):
        super().__init__()

        self.Delim  = ':'
        self.Mask   = '00:00:00'
        self.Format = '%H:%M:%S'


# [ { "On":"0", "Off": "2"} ]
class TTimeRangeWeek(TTimeRange):
    # 0 is Sunday 
    def __init__(self):
        super().__init__()

        self.Mask   = '0'
        self.Format = '%w'
        self.PadLen = 1


# [ { "On":"2", "Off": "03"}, { "On":"10", "Off": "11"} ]
class TTimeRangeMonth(TTimeRange):
    def __init__(self):
        super().__init__()

        self.Mask   = '00'
        self.Format = '%m'


# [ { "On":"8", "Off": "08.12"}, { "On":"10.16", "Off": "10.17"} ]
class TTimeRangeYear(TTimeRange):
    def __init__(self):
        super().__init__()

        self.Delim  = '.'
        self.Mask   = '00.01'
        self.Format = '%m.%d'


class TTimeRangeDayFade(TTimeRangeDay):
    def _GetHoleRange(self, aIdx):
        if (aIdx == len(self.Times) - 1):
            Result = [self.Times[aIdx][1], '23:59:59']
        else:
            Result = [self.Times[aIdx][1], self.Times[aIdx + 1][0]]
        return Result

    def SetRanges(self, aTime, aValue):
        TTimeRangeDay.SetRanges(self, aTime, aValue)

        Times = []
        for Idx, (On, Off) in enumerate(self.Times):
            Times.append([UTime.TimeToSec(On), UTime.TimeToSec(Off)])
            On, Off = self._GetHoleRange(Idx)
            Times.append([UTime.TimeToSec(On) + 1, UTime.TimeToSec(Off)])
        self.Times = Times

        Values = []
        for Idx, (On, Off) in enumerate(self.Values):
            Values.append([On, Off])
            if (Idx == len(self.Values) - 1):
                NextOff = self.Values[0][0]
            else:
                NextOff = self.Values[Idx + 1][0]
            Values.append([Off, NextOff])
        self.Values = Values

    def GetSecNow(self):
        Now = time.strftime(self.Format)
        #Sec = int(time.strftime('%S')) % 24
        #Now = '%s:00:00' % Sec
        #print(Now)
        return UTime.TimeToSec(Now)


class TTimeRangeDayFadeWave(TTimeRangeDayFade):
    def __init__(self, aInvert = False):
        super().__init__()
        self.Invert = aInvert

    def Get(self):
        Now = self.GetSecNow()

        for Idx, (On, Off) in enumerate(self.Times):
            Value = self.GetValue(Idx)
            Mid   = UArr.Avg(Value)
            if ((Now >= On) and (Now < Off)):
                if (Idx % 2 == 0) ^ self.Invert:
                    FadeW = UNum.TFadeWave(On, Off, Mid, Value[1])
                else:
                    FadeW = UNum.TFadeWave(On, Off, Mid, Value[0])
                    FadeW.SetNight(True)
                Result = round(FadeW.Get(Now), 2)
                return Result
            else:
                return Mid
        return 0


class TTimeRangeDayFadeLine(TTimeRangeDayFade):
    def Get(self):
        Now = self.GetSecNow()

        for Idx, (On, Off) in enumerate(self.Times):
            Value = self.GetValue(Idx)
            Ratio = (Value[1] - Value[0]) / float(Off - On)
            if ((Now >= On) and (Now < Off)):
                Result = Value[0] + round((Now - On) * Ratio, 2)
                return Result
            else:
                return UArr.Avg(Value)
        return 0


#---
from ._Common import TProvider

class TProviderTimeRangeBase(TProvider):
    def __init__(self, aTime, aValue):
        self.Obj = self.SetObj()
        self.Obj.SetRanges(aTime, aValue)

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


class TProviderTimeRangeMonth(TProviderTimeRangeBase):
    def SetObj(self):
        return TTimeRangeMonth()


class TProviderTimeRangeDayFadeWave(TProviderTimeRangeBase):
    def __init__(self, aTime, aValue, aInvert):
        self.Invert = aInvert
        super().__init__(aTime, aValue)

    def SetObj(self):
        return TTimeRangeDayFadeWave(self.Invert)

class TProviderTimeRangeDayFadeLine(TProviderTimeRangeBase):
    def SetObj(self):
        return TTimeRangeDayFadeLine()
