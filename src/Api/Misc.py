"""
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2018.03.02
License:     GNU, see LICENSE for more details
Description:
"""

import sys
import time
import os
#
from Inc.Util       import Time, Net, OS


def Version():
    Disk = OS.GetDiskInfo('/')

    Result = {
        "Now":       time.strftime('%Y-%m-%d %H:%M:%S'),
        "vDate":     '2019.11.28',
        "vSoftware": '1.0.43',
        "Hardware":  '1.0.2',
        "Author":    'Volodymyr Vons, VladVons@gmail.com, UA',
        "Homepage":  'http://oster.com.ua/software',
        "Platform":  sys.platform,
        "Python":    OS.GetVersion(),
        "UptimeSys": Time.Uptime(),
        "Mac":       Net.GetMac(),
        "IP":        Net.GetLocalIP(),
        "DiskSize":  '%d (M)' % (Disk[0] / (1024*1024)),
        "DiskFree":  '%d (M)' % (Disk[1] / (1024*1024)),
        "CurDir":    os.getcwd()
    }
    return Result
