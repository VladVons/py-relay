'''
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2018.03.02
License:     GNU, see LICENSE for more details
Description:
'''

import sys
#
from Inc.Util       import Obj, Time, Net, OS


def Version():
    Disk = OS.GetDiskInfo('/')

    Result = {
        "Date":     "2019.03.01",
        "Software": "1.0.17",
        "Hardware": "1.0.2",
        "Author":   "Volodymyr Vons",
        "EMail":    "VladVons@gmail.com",
        "Homepage": "http://oster.com.ua/software",
        "Platform": sys.platform,
        "Python":   OS.GetVersion(),
        "Uptime":   Time.Uptime(),
        "Mac":      Net.GetMac(),
        "DiskSize": '%d (M)' % (Disk[0] / (1024*1024)),
        "DiskFree": '%d (M)' % (Disk[1] / (1024*1024))
    }
    return Result


class Test1():
    def Print(self):
        print('Test1->Print')
