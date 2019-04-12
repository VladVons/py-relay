'''
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2016.08.21
License:     GNU, see LICENSE for more details
Description:
'''

import subprocess
import hashlib
import sys
import os
#
from Inc.Util import FS, Net

def ExecM(aCmd, aMsg = ""):
    print("Exec in:", aCmd, aMsg)

    # return os.system(aCmd)
    Pipe = subprocess.Popen(aCmd, shell=True, stdout=subprocess.PIPE)
    Result = Pipe.communicate()[0]

    print("Exec out: " + Result)
    return Result

def GetMachineId():
    MachineId = FS.LoadFromFileToStr('/etc/machine-id')
    if (not MachineId):
        MachineId = 'Unknown'

    MacId = Net.GetMac()
    if (not MacId):
        MacId = 'Unknown'

    if (sys.version_info[0] < 3):
        Str1 = MachineId  + MacId
    else:
        Str1 = (MachineId  + MacId).encode('utf-8')
    return hashlib.md5(Str1).hexdigest()

def GetVersion():
    return '{}.{}.{}'.format(sys.version_info.major, sys.version_info.minor, sys.version_info.micro)

def GetDiskInfo(aName):
    Disk = os.statvfs(aName)
    return [Disk.f_bsize * Disk.f_blocks, Disk.f_bsize * Disk.f_bfree]
