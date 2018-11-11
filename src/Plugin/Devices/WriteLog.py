'''
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2017.11.13
License:     GNU, see LICENSE for more details

Description:
    write Tag message to log

Example:
    Obj = TControlLog('MyControl')
'''

import datetime
#
from Inc.Param        import TDictParam
from Core.Device      import TControl
from Inc.Log          import Log


class TControlWrite(TControl):
    def __init__(self, aParent):
        TControl.__init__(self, aParent)
        self.Cnt = 0

        self.Range.Enable = False
        self.Avg.Enable   = False

        Pattern = {'Tag': 'MyTag'}
        self.Param.AddDefPattern(Pattern)

    def Format(self, aCaller):
        self.Cnt += 1

        if (aCaller):
            CallerAlias = aCaller.Alias
            CallerValue = aCaller.Value
        else:
            CallerAlias = ''
            CallerValue = ''

        Result = '{:5} {:5} Tag: {:10} Alias: {:15} Value: {:10}, CAlias:{:20} CValue:{:6}'.format(
            self.Cnt,
            datetime.datetime.now().strftime('%Y-%m-%d %H:%M:%S'),
            self.Param.Tag,
            self.Alias,
            self.Value,
            CallerAlias,
            CallerValue
        )
        return Result

    def DoParameter(self, aParam):
        self.Param.LoadPattern(aParam)


class TControlWriteLog(TControlWrite):
    def _Set(self, aCaller, aValue):
        Log.Print(1, 'i', self.__class__.__name__, '_Set()', self.Format(aCaller))


class TControlWriteConsole(TControlWrite):
    def _Set(self, aCaller, aValue):
        print(self.Format(aCaller))


class TControlWriteFile(TControlWrite):
    def __init__(self, aParent):
        TControlWrite.__init__(self, aParent)

        Pattern = {'File': TDictParam.Required}
        self.Param.AddDefPattern(Pattern)

    def _Set(self, aCaller, aValue):
        with open(self.Param.File, "a") as File:
            Data = self.Format(aCaller)
            File.write(Data)
