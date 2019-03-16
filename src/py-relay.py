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
    #https://github.com/seveas/python-prctl/blob/master/test_prctl.py
    #print('Error: import prctl', 'pip install prctl')
    print('Error: import prctl', 'apt-get install python-prctl')

import signal
#
import time
import json
import os
import sys
import optparse
import random
import traceback

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

        self.Protect   = TProtect()
        self.Options   = self.ParseOptions()
        self.Init()

    def Init(self):
        if (not Log.SetFile(self.Options.FileLog)):
            Log.SetFile('%s.log' % self.AppName)
        Log.SetConsole()

        if (self.Options.GetAttr('Options')):
            print(self.Options.GetVars())
            sys.exit(1)

        if (self.Options.Serial):
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

        Log.SetLogLevel(self.Options.Verbose)

        DB = self.GetProfilePath(self.Options.FileDb)
        self.DbDict = TDbDictSQLite()
        self.DbDict.SetSource(DB)
        self.DbDict.Connect()
        self.DbDict.CreateTable()

        if (self.Options.ExceptionHook):
            sys.excepthook = self.GlobalUnhandledExceptionHook

        #signal.signal(signal.SIGINT, self.KeyboardSignalHook)

        # Add native python packages path
        if (self.Options.PkgPath):
            for Item in self.Options.PkgPath.split(','):
                Dir = Item.strip()
                if (os.path.isdir(Dir)):
                    sys.path.append(Dir)
                else:
                    Log.Print(1, 'w', self.__class__.__name__, 'Init()', 'PkgPath not found %s' % Dir)

    def ParseOptions(self):
        Usage = 'usage: %prog [options] arg'
        Parser = optparse.OptionParser(usage = Usage)
        Parser.add_option('-p', '--Profile',   help = 'profile directory')
        Parser.add_option('-d', '--Directory', help = 'root directory')
        Parser.add_option('-s', '--Serial',    help = 'get serial key', action = "store_true")
        Parser.add_option('-v', '--Verbose',   help = 'verbose level')
        Parser.add_option('-o', '--Options',   help = 'Options list')
        CmdParam, Args = Parser.parse_args()

        Pattern = {
            # command line
            'Verbose':       1,
            'Profile':       'Default',
            'Directory':     'Plugin/Profiles',
            'Serial':        False,
            # misc conf
            'ExceptionHook': False,
            'CheckUpdate':   False,
            'FileConf':      self.AppName + '.json',
            'FileMacros':    self.AppName + '.conf',
            'FileDb':        self.AppName + '.db',
            'FileLog':       '/var/log/%s/%s.log' % (self.AppName, self.AppName),
            'PkgPath':       ''
        }

        Result = TDictParam()
        ConfFile = self.AppName + '.conf'
        if (FS.FileExists(ConfFile)):
            Result.LoadFile(ConfFile, Pattern)
        else:
            Result.AddDefPattern(Pattern)
        Result.Load(vars(CmdParam), False)
        return Result

    def GetProfilePath(self, aName):
        return self.Options.Directory + '/' + self.Options.Profile + '/' + aName

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
        if (self.Options.CheckUpdate):
            self.CheckUpdate()

        self.IsRun = True
        self.Manager = TManager(self, self.GetProfilePath(''))
        self.Manager.OnClass = self._CallBack_OnClass
        self.Manager.SetStartTimeVirt(self.GetUptime())
        self.Manager.LoadConf.Macros(self.Options.FileMacros)
        self.Manager.LoadFile(self.Options.FileConf)

        if (self.Options.Verbose > 1):
            Params = self.Manager.SecClass.GetParams()
            Obj.Dump(Params)
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
        #prctl.prctl(prctl.NAME, 'py-relay')
        #prctl.prctl(prctl.PDEATHSIG, signal.SIGTERM)
        prctl.set_name('py-relay')
        prctl.set_pdeathsig(signal.SIGINT)

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
