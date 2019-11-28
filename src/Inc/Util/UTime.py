"""
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2016.08.21
License:     GNU, see LICENSE for more details
Description:
"""

import time
import re
#
from Inc.Log import Log


def DelayMiliSec(aTime):
    time.sleep(aTime / 1000.0)

def DelayMicroSec(aTime):
    time.sleep(aTime / 1000000.0)

def CharToSec(aChar, aValue):
    # 1H1M1S -> 3661
    Ratios = {'S':1, 'M':60, 'H':3600, 'd':86400, 'w':86400 * 7, 'm':86400 * 30, 'y':86400 * 365}
    Ratio  = Ratios.get(aChar)
    if (not Ratio):
        Msg = Log.PrintDbg(1, 'e', 'Unknown char %s' % aChar)
        raise ValueError(Msg)
    return Ratio * aValue

def StrToSec(aValue):
    Result = 0

    Items = re.split('([\D])', aValue)
    Items.append('')
    for i in range(0, len(Items) - 1, 2):
        Digit  = Items[i+0].strip()
        Letter = Items[i+1].strip()
        if (Digit and Letter == ''):
            Letter = 'S'

        if (Digit and Letter):
            if ( (not Letter in 'SMHdwmy') or (not Digit.isdigit()) ):
                Msg = Log.PrintDbg(1, 'e', 'Value error %s%s' % (Digit, Letter))
                raise ValueError(Msg)
            Result += CharToSec(Letter, int(Digit))
    return Result

def TimeToSec(aStr):
    # '01:01:01' -> 3661
    return sum(Ratio * int(Part) for Ratio, Part in zip([3600, 60, 1], aStr.split(":")))

def Uptime():
    with open('/proc/uptime', 'r') as File:
        Result = int(float(File.readline().split()[0]))
    return Result

def RangeDecorator(aFunc):
    # callsed from class
    def Wrapper(self, aRanges):
        Result = False
        for Range in aRanges:
            Result = aFunc(self, Range)
            if (Result):
                break
        return Result
    return Wrapper

def CheckRange(aValue, aMin, aMax):
    if (aMin > aMax):
        Msg = Log.PrintDbg(1, 'e', 'Min %s is greater than Max %s' % (aMin, aMax))
        raise ValueError(Msg)
    return (aValue >= aMin) and (aValue <= aMax)
 