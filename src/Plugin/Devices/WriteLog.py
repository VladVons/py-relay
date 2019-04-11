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
from Inc.Param    import TDictParam
from Core.Device  import TControl
from Inc.Log      import Log
from Inc.Util     import FS, Time


PkgConf = {
    "Version": "1.01",
    "Author": "Vladvons"
}


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

        Result = '{:5}, {:5}, Alias:{:15}, Value:{:10}, CAlias:{:25}, CValue:{:6}'.format(
            self.Cnt,
            datetime.datetime.now().strftime('%Y-%m-%d %H-%M-%S'),
            self.Alias,
            self.Value,
            CallerAlias,
            CallerValue
        )
        return Result

    def DoParameter(self, aParam):
        self.Param.LoadPattern(aParam)


class TControlWriteConsole(TControlWrite):
    def _Set(self, aCaller, aValue):
        print(self.Format(aCaller))


class TControlWriteLog(TControlWrite):
    def _Set(self, aCaller, aValue):
        Log.PrintDbg(1, 'i', self.Format(aCaller))


class TControlWriteFile(TControlWrite):
    def __init__(self, aParent):
        TControlWrite.__init__(self, aParent)

        Pattern = {'File': TDictParam.Required, 'Mode': 'a+'}
        self.Param.AddDefPattern(Pattern)

    def DoParameter(self, aParam):
        self.Param.LoadPattern(aParam)

        if (not FS.IsFileWrite(self.Param.File)):
            Msg = Log.PrintDbg(1, 'e', 'Cant write file %s' % self.Param.File)
            raise Exception(Msg)

    def _Set(self, aCaller, aValue):
        with open(self.Param.File, self.Param.Mode) as File:
            Data = self.Format(aCaller)
            File.write(Data + '\n')


class TControl_WatchDog(TControlWriteFile):
    def __init__(self, aParent):
        TControlWriteFile.__init__(self, aParent)

        Pattern = {'File': '/var/log/py-relay/py-relay.wd.log', 'Mode':'w+', 'Periodic': 60, 'Refresh': 60}
        self.Param.AddDefPattern(Pattern)

    def Format(self, aNotUsed):
        self.Cnt += 1

        Result = '{}, {}, UTSys {}, UTApp {}, Alias: {}'.format(
            self.Cnt,
            datetime.datetime.now().strftime('%Y-%m-%d %H:%M:%S'),
            Time.Uptime(),
            self.GetUptimeReal(),
            self.Alias
        )
        return Result
