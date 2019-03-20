'''
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2018.03.02
License:     GNU, see LICENSE for more details
Description:
'''

import sys
import time
#
from Inc.Util       import Obj, Time, Net, OS


def Version():
    Disk = OS.GetDiskInfo('/')

    Result = {
        "Now":       time.strftime("%Y-%m-%d %H:%M:%S"),
        "vDate":     "2019.03.18",
        "vSoftware": "1.0.19",
        "Hardware":  "1.0.2",
        "Author":    "Volodymyr Vons, VladVons@gmail.com, UA",
        "Homepage":  "http://oster.com.ua/software",
        "Platform":  sys.platform,
        "Python":    OS.GetVersion(),
        "Uptime":    Time.Uptime(),
        "Mac":       Net.GetMac(),
        "IP":        Net.GetLocalIP(),
        "DiskSize": '%d (M)' % (Disk[0] / (1024*1024)),
        "DiskFree": '%d (M)' % (Disk[1] / (1024*1024))
    }
    return Result


class Test1():
    def Print(self):
        print('Test1->Print')
