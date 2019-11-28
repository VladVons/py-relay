"""
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2017.11.09
License:     GNU, see LICENSE for more details

Description:
Reads random digits in range Min and Max

Example:
Command = 'ls /tmp'
Obj     = TProviderShellExec(Command)
Value   = Obj.Set()
"""

import subprocess
#
from  Inc.Util import UStr
from ._Common  import TProvider


class TProviderShellExec(TProvider):
    def __init__(self, aCommand):
        self.Command = aCommand

    def Read(self, aCommand):
        Pipe = subprocess.Popen(aCommand, shell = True, stdout = subprocess.PIPE)
        Result = Pipe.communicate()[0]
        return Result.decode("utf-8")

    def Get(self):
        return self.ReadTry(self.Command)


class TProviderShellExec_CPULoad(TProviderShellExec):
    def __init__(self):
        TProviderShellExec.__init__(self)

        # Get Last element. It has 15 minutes average load
        self.Command = "uptime |  awk '{ print $NF }'"

    def Get(self):
        Result = self.ReadTry(self.Command)
        if (Result):
            Result = UStr.ConvertTo(Result.strip())
        return Result
