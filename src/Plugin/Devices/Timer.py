'''
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2017.10.15
License:     GNU, see LICENSE for more details
Description:
'''

import datetime
#
from Inc.Util     import Time
from Inc.Param    import TDictParam
from Core.Device  import TSensor

#__all__ = ['TTimeRangeCycle', 'TTimeRangeDay', 'TTimeRangeWeek', 'TTimeRangeMonth', 'TTimeRangeYear', "TTimeCount"]


class TSensorBaseRange(TSensor):
    def __init__(self, aParent):
        #super().__init__(aParent) # __need v3.5
        TSensor.__init__(self, aParent)

        self.Delim   = ''
        self.PadLen  = 2

        #Pattern = {'Ranges': []}
        #self.Param.AddDefPattern(Pattern)

    def DoParameter(self, aParam):
        self.Range = []

        Pattern = {'Ranges': []}
        self.Param.LoadPattern(aParam, Pattern)

        #self.Param.LoadPattern(aParam)

        Range = []
        for Range in self.Param.Ranges:
            On  = self._Adjust(Range.get('On'))
            Off = self._Adjust(Range.get('Off'))

            if (not On):
                Msg = Log.Print(1, 'e', self.__class__.__name__, 'DoParameter()', 'On is empty')
                raise ValueError(Msg)

            if (not Off):
                Msg = Log.Print(1, 'e', self.__class__.__name__, 'DoParameter()', 'Off is empty')
                raise ValueError(Msg)

            self._Load(On, Off)


class TSensorTimeRangeCycle(TSensorBaseRange):
    def __init__(self, aParent):
        #super().__init__(aParent) # __need v3.5
        TSensorBaseRange.__init__(self, aParent)

    def _Adjust(self, aValue):
        return Time.StrToSec(aValue)

    def _Load(self, aOn, aOff):
        self.Range.append(aOn)
        self.Range.append(aOff)

    def _Get(self):
        Duration = self.GetDuration()
        Offset   = self.GetUptime() % Duration
        Idx      = 0
        for i in range(0, len(self.Range), 2):
            if ( (Offset >= Idx) and (Offset < Idx + self.Range[i]) ):
                return 1
            Idx += self.Range[i] + self.Range[i + 1]

        return 0

    def GetDuration(self):
        Result = 0
        for Item in self.Range:
            Result += Item
        return Result


class TSensorTimeRange(TSensorBaseRange):
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

        self.Range.append(aOn)
        self.Range.append(aOff)

    def _Get(self):
        Now = datetime.datetime.now().strftime(self.Format)

        for i in range(0, len(self.Range), 2):
            if ( (Now >= self.Range[i]) and (Now < self.Range[i + 1]) ):
                return 1

        return 0

#Data = '{"Timer_Day":{ "Ranges":[ { "On":"7", "Off": "09:19:30"}, { "On":"21:00:03", "Off": "22:00"}, { "On":"23:45", "Off": "23:46"} ]}}'
class TSensorTimeRangeDay(TSensorTimeRange):
    def __init__(self, aParent):
        #super().__init__(aParent) # __need v3.5
        TSensorTimeRange.__init__(self, aParent)

        self.Delim  = ':'
        self.Mask   = '00:00:00'
        self.Format = '%H:%M:%S'

#Data = '{"Timer_Week":{ "Ranges":[ { "On":"0", "Off": "2"}] }}'
class TSensorTimeRangeWeek(TSensorTimeRange):
    # 0 is Sunday 
    def __init__(self, aParent):
        #super().__init__(aParent) # __need v3.5
        TSensorTimeRange.__init__(self, aParent)

        self.Mask   = '0'
        self.Format = '%w'
        self.PadLen = 1

#Data = '{"Timer_Month":{ "Ranges":[ { "On":"2", "Off": "03"}, { "On":"10", "Off": "11"}] }}'
class TSensorTimeRangeMonth(TSensorTimeRange):
    def __init__(self, aParent):
        #super().__init__(aParent) # __need v3.5
        TSensorTimeRange.__init__(self, aParent)

        self.Mask   = '00'
        self.Format = '%m'

#Data = '{"Timer_Year":{ "Ranges":[ { "On":"8", "Off": "08.12"}, { "On":"10.16", "Off": "10.17"}] }}'
class TSensorTimeRangeYear(TSensorTimeRange):
    def __init__(self, aParent):
        #super().__init__(aParent) # __need v3.5
        TSensorTimeRange.__init__(self, aParent)

        self.Delim  = '.'
        self.Mask   = '00.01'
        self.Format = '%m.%d'
