# -*- coding: utf-8 -*-

'''
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2017.10.20
License:     GNU, see LICENSE for more details
Description:
'''

try:
    import prctl
except:
    print('Error: import prctl', 'pip install prctl')

import signal
#
import time
import json
import os
import sys
import optparse
import random
import traceback

sys.path.append('/usr/lib/python2.7/dist-packages')

#
#sys.path.insert(0, './Plugin/Providers')
#sys.path.insert(0, 'Plugin/Controls')
#
from Inc.Log          import Log
from Inc.DB           import TDbDictSQLite
from Inc.Util         import Obj, FS, Net, Str
from Inc.Param        import TDictParam, TDictReplace
from Inc.Protect      import TProtect
from Core.Manager     import TManager, Version, TLoadConf


class TMain():
    def __init__(self):
        self.Manager   = None
        self.Values    = {}
        self.DbDict    = None

        self.TimeStart = int(time.time())
        self.AppName   = FS.GetCoreName(__file__)

        if (not Log.SetFile('/var/log/%s.log' % self.AppName), True):
            Log.SetFile('%s.log' % self.AppName)
        Log.SetConsole()

        self.Protect = TProtect()
        self.Options = self.GetCommandLine()
        if (self.Options.serial):
            print('Serial', self.Protect.GetSerial())
            sys.exit(1)

        KeyFile = self.AppName + '.key'
        if (not self.Protect.LoadKeyFile(KeyFile)):
            sys.exit(1)
        #if (not self.Protect.Check()):
        #    sys.exit(1)

        ProfileDir = self.GetProfilePath('')
        if (not os.path.exists(ProfileDir)):
            os.makedirs(ProfileDir)
        #Log.Tail  = ProfileDir

        self.Param = TDictParam()
        Pattern = { 
            'CheckUpdate':   False,
            'DebugLevel':    1,
            'ExceptionHook': False,
            'FileConf':      self.AppName + '.json',
            'FileMacros':    self.AppName + '.conf',
            'FileDb':        self.AppName + '.db',
            'FileLog':       self.AppName + '.log'
        }

        ConfFile = self.AppName + '.conf'
        if (FS.FileExists(ConfFile)):
            self.Param.LoadFile(ConfFile, Pattern)
        else:
            self.Param.AddDefPattern(Pattern)

        Log.LogLevel = self.Param.DebugLevel

        DB = self.GetProfilePath(self.Param.FileDb)
        self.DbDict = TDbDictSQLite()
        self.DbDict.SetSource(DB)
        self.DbDict.Connect()
        self.DbDict.CreateTable()

        if (self.Param.ExceptionHook):
            sys.excepthook = self.GlobalUnhandledExceptionHook

        #signal.signal(signal.SIGINT, self.KeyboardSignalHook)

    def GetCommandLine(self):
        Usage = 'usage: %prog [options] arg'
        Parser = optparse.OptionParser(usage = Usage)
        Parser.add_option('-p', '--profile',   default = 'Default',         help = 'profile directory')
        Parser.add_option('-d', '--directory', default = 'Plugin/Profiles', help = 'root directory')
        Parser.add_option('-s', '--serial',    default = False,             help = 'get serial key', action = "store_true")
        Result, Args = Parser.parse_args()
        return Result

    def GetProfilePath(self, aName):
        return self.Options.directory + '/' + self.Options.profile + '/' + aName

    def GlobalUnhandledExceptionHook(self, aType, aValue, aTraceback):
        Msg = traceback.format_exception(aType, aValue, aTraceback)
        Log.Print(1, 'x', self.__class__.__name__, 'GlobalUnhandledExceptionHook()', 'Unhandled error %s' % Msg)

    def KeyboardSignalHook(self, aSignal, aFrame):
        # multiThread calls ???
        sys.exit(0)

    def CheckRegistration(self, aObj, aValue):
        return aValue

        Probability = int(random.randint(0, 10)) == 10
        if (Probability):
            aValue *= round(0.5 + random.random(), 1)
        return aValue

    def GetUptime(self):
        StartTime = self.DbDict.Get('StartTime')
        if (StartTime):
            Result = Str.ConvertTo(StartTime)
            Log.Print(1, 'i', self.__class__.__name__, 'Run()', 'StartTime restored to %s' % time.strftime('%Y-%m-%d %H:%M:%S', time.localtime(Result)))
        else:
            Result = int(time.time())
            self.DbDict.Set('StartTime', Result)
        return Result

    def CheckUpdate(self):
        #DivisionZerro = 2/0

        InfoLoc = Version()
        #self.LCD.Print('App', self.AppName)
        #self.LCD.Print('Software', InfoLoc['Software'])
        #self.LCD.Print('Hardware', InfoLoc['Hardware'])

        if (Net.CheckInterface('eth0')):
            Url  = InfoLoc.get('Homepage') + '/' + self.AppName + '/version.json' 
            Data = Net.GetHttpData(Url.lower())
            if (Data):
                try:
                    InfoWeb = json.loads(Data)
                # ToDo type
                except:
                    InfoWeb = None
                    Log.Print(1, 'x', self.__class__.__name__, 'CheckUpdate()', 'Parse error %s', Url.lower())

                if (InfoWeb):
                    if (InfoWeb['Software'] > InfoLoc['Software']):
                        Log.Print(1, 'i', self.__class__.__name__, 'CheckUpdate()', 'New software version is available %s' % InfoWeb['Software'])
                        #self.LCD.Print('New software', InfoWeb['Software'])

                    if (InfoWeb['Hardware'] > InfoLoc['Hardware']):
                        Log.Print(1, 'i', self.__class__.__name__, 'CheckUpdate()', 'New hardware version is available %s' %  InfoWeb['Hardware'])
                        #self.LCD.Print('New hardware', InfoWeb['Software'])

    def _CallBack_OnValue(self, aObj, aValue):
        return self.CheckRegistration(aObj, aValue)

    def _CallBack_OnClass(self, aObj):
        ObjPath = Obj.GetClassPath(aObj)
        if ('TSensor' in ObjPath):
            aObj.OnValue = self._CallBack_OnValue
        return aObj

    def Run(self):
        if (self.Param.CheckUpdate):
            self.CheckUpdate()

        self.IsRun = True
        self.Manager = TManager(self, self.GetProfilePath(''))
        self.Manager.OnClass = self._CallBack_OnClass
        self.Manager.SetStartTimeVirt(self.GetUptime())
        self.Manager.LoadConf.Macros(self.Param.FileMacros)
        self.Manager.LoadFile(self.Param.FileConf, 'Gpio')
        self.Manager.Run()

    '''
    def Stop(self, aReason):
        Log.Print(1, 'i', self.__class__.__name__, 'Stop()', aReason)
        #self.LCD.Print('Stop', aReason)

        if (self.Manager):
            self.Manager.Stop()
    '''

if (__name__ == '__main__'):
    # kill all threads on SIGTERM via 'service relay stop'
    def SetExitHandler(aFunc):
        prctl.prctl(prctl.NAME, 'relay')
        prctl.prctl(prctl.PDEATHSIG, signal.SIGTERM)

        signal.signal(signal.SIGTERM, aFunc)

    def OnExit(aSignal, func=None):
        Log.Print(1, 'i', __name__, 'OnExit()')
        sys.exit(1)

    Main = TMain()
    try:
        SetExitHandler(OnExit)
        Main.Run()
    except KeyboardInterrupt:
        #Main.Stop('Ctrl-C')
        pass
    finally:
        Log.Print(1, 'i', __name__, 'Finish')
