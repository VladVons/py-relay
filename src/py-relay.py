
# -*- coding: utf-8 -*-

"""
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2017.10.20
License:     GNU, see LICENSE for more details
Description:
"""


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
import asyncio

#
#sys.path.insert(0, './Plugin/Providers')
#sys.path.insert(0, 'Plugin/Controls')
#
from Inc.Log          import Log, TLogFile, TLogConsole
from Inc.DB           import TDbDictSQLite
from Inc.Util         import UObj, UFS, UNet, UStr
from Inc.Param        import TDictParam
#from Inc.Protect      import TProtect
from Api              import Misc
from Core.Manager     import TManager
from Core.HttpApi     import THttpApiWebServer



FInfo = UFS.SplitName(__file__)
cDirName = FInfo.Root
cAppName = FInfo.Base
#cAppName = 'py-relay'
#cDirName = ''
#print('---1', cDirName, cAppName)


class TMain():
    def __init__(self):
        self.Manager   = None
        self.DbDict    = None

        self.TimeStart = int(time.time())

        #self.Protect   = TProtect()
        self.Options   = self.ParseOptions()
        self.Init()

    def Init(self):
        Info = Misc.Version()
        Info['AppName'] = cAppName
        Info['Profile'] = self.Options.Profile   
        UObj.Dump(Info)
        print('')

        FileLog = self.Options.FileLog
        if (not UFS.IsFileWrite(FileLog)):
            FileLog = '%s.log' % cAppName
        Log.AddEcho(TLogFile(FileLog))
        Log.SetTail('PID:%s' % os.getpid())

        if (self.Options.GetAttr('Options')):
            print(self.Options.GetVars())
            sys.exit(1)

        if (self.Options.Serial):
            #print('Serial', self.Protect.GetSerial())
            sys.exit(1)

        KeyFile = cAppName + '.key'
        #if (not self.Protect.LoadKeyFile(KeyFile)):
        #    sys.exit(1)
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
                    if (not Dir in sys.path):
                        sys.path.append(Dir)
                else:
                    Log.PrintDbg(1, 'w', 'PkgPath not found %s' % Dir)

    def ParseOptions(self):
        Usage = 'usage: %prog [options] arg'
        Parser = optparse.OptionParser(usage = Usage)
        Parser.add_option('-p', '--Profile',   help = 'profile directory')
        Parser.add_option('-d', '--Directory', help = 'root directory')
        Parser.add_option('-s', '--Serial',    help = 'get serial key', action = "store_true")
        Parser.add_option('-v', '--Verbose',   help = 'verbose level')
        Parser.add_option('-o', '--Options',   help = 'options list')
        Parser.add_option('-i', '--Info',      help = 'information',    action = "store_true")
        CmdParam, Args = Parser.parse_args()

        Pattern = {
            # command line
            'Verbose':       1,
            'Profile':       'Default',
            'Directory':     'Plugin/Profiles',
            'Serial':        False,
            'Info':          False,

            # misc conf
            'ExceptionHook': False,
            'ApiPort':       None,
            'CheckUpdate':   False,
            'DebugAlias':    False,
            'FileConf':      cAppName + '.json',
            'FileMacros':    'macros.conf',
            'FileDb':        cAppName + '.db',
            'FileLog':       '/var/log/%s/%s.log' % (cAppName, cAppName),
            'PkgPath':       ''
        }

        Result = TDictParam()
        ConfFile = cAppName + '.conf'
        if (UFS.FileExists(ConfFile)):
            Result.LoadFile(ConfFile, Pattern)
        else:
            Result.AddDefPattern(Pattern)
        Result.Load(vars(CmdParam), False)
        return Result

    def Info(self):
        self.Manager.Info('Attrs')

        for Item in sys.path:
            print('path', Item)

    def GetProfilePath(self, aName: str) -> str:
        return self.Options.Directory + '/' + self.Options.Profile + '/' + aName

    def GlobalUnhandledExceptionHook(self, aType, aValue, aTraceback):
        Msg = traceback.format_exception(aType, aValue, aTraceback)
        Log.PrintDbg(1, 'x', 'Unhandled error %s' % Msg)

    def KeyboardSignalHook(self, aSignal, aFrame):
        # multiThread calls ???
        sys.exit(0)

    def CheckRegistration(self, aObj, aValue):
        return aValue

        Probability = int(random.randint(0, 10)) == 10
        if (Probability):
            aValue *= round(0.5 + random.random(), 1)
        return aValue

    def GetUptime(self) -> int:
        StartTime = self.DbDict.Get('StartTime')
        if (StartTime):
            Result = UStr.ConvertTo(StartTime)
            Log.PrintDbg(1, 'i', 'StartTime restored to %s' % time.strftime('%Y-%m-%d %H:%M:%S', time.localtime(Result)))
        else:
            Result = int(time.time())
            self.DbDict.Set('StartTime', Result)
        return Result

    def CheckUpdate(self):
        #DivisionZerro = 2/0

        InfoLoc = Version()
        #self.LCD.Print('App', cAppName)
        #self.LCD.Print('Software', InfoLoc['Software'])
        #self.LCD.Print('Hardware', InfoLoc['Hardware'])

        if (UNet.CheckInterface('eth0')):
            Url  = InfoLoc.get('Homepage') + '/' + cAppName + '/version.json'
            Data = UNet.GetHttpData(Url.lower())
            if (Data):
                try:
                    InfoWeb = json.loads(Data)
                # ToDo type
                except:
                    InfoWeb = None
                    Log.PrintDbg(1, 'x', 'Parse error %s', Url.lower())

                if (InfoWeb):
                    if (InfoWeb['Software'] > InfoLoc['Software']):
                        Log.PrintDbg(1, 'i', 'New software version is available %s' % InfoWeb['Software'])
                        #self.LCD.Print('New software', InfoWeb['Software'])

                    if (InfoWeb['Hardware'] > InfoLoc['Hardware']):
                        Log.PrintDbg(1, 'i', 'New hardware version is available %s' %  InfoWeb['Hardware'])
                        #self.LCD.Print('New hardware', InfoWeb['Software'])

    def _CallBack_OnValue(self, aObj, aValue):
        return self.CheckRegistration(aObj, aValue)

    def _CallBack_OnClass(self, aObj):
        ObjPath = UObj.GetClassPath(aObj)
        if ('TSensor' in ObjPath):
            aObj.OnValue = self._CallBack_OnValue
        return aObj

    def Run(self):
        if (self.Options.CheckUpdate):
            self.CheckUpdate()

        self.IsRun = True
        self.Manager = TManager(self, self.GetProfilePath(''))
        self.Manager.SecClass.OnClass = self._CallBack_OnClass
        self.Manager.SetStartTimeVirt(self.GetUptime())
        self.Manager.LoadConf.Macros(self.Options.FileMacros)
        self.Manager.LoadFile(self.Options.FileConf)

        if (self.Options.Info):
            self.Info()
            sys.exit()

        Loop = asyncio.get_event_loop()
        Loop.create_task(self.Manager.Run())

        if (self.Options.ApiPort):
            HttpApiWebServer = THttpApiWebServer()
            HttpApiWebServer.ExternApi.Manager = self.Manager
            Loop.create_task(HttpApiWebServer.Run(self.Options.ApiPort))

        #Loop.add_signal_handler(signal.SIGTERM, self.AskExit)
        #Loop.add_signal_handler(signal.SIGINT, self.AskExit)

        #global AStop
        #AStop = asyncio.Event()
        Loop.run_forever()
        Loop.close()

    def Stop(self, aReason):
        Log.PrintDbg(1, 'i', 'Reason %s' % aReason)
        #self.LCD.Print('Stop', aReason)

        if (self.Manager):
            self.Manager.Stop()

    #@staticmethod
    #def AskExit(*args):
    #    AStop.set()


if (__name__ == '__main__'):
    # kill all threads on SIGTERM via 'service relay stop'
    def SetExitHandler(aFunc):
        #prctl.prctl(prctl.NAME, cAppName)
        #prctl.prctl(prctl.PDEATHSIG, signal.SIGTERM)
        prctl.set_name(cAppName)
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
        Log.Print(1, 'i', __name__, 'Ctrl-C')
    finally:
        Main.Stop('Finally')
        Log.Print(1, 'i', __name__, 'Finish')
