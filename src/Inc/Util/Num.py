"""
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2016.08.21
License:     GNU, see LICENSE for more details
Description:
"""

import math
import collections
import time
import random
#
from Inc.Log  import Log
from Inc.Util import Str, Arr



def CheckBit(aValue, aIdx):
    Mask = 1 << aIdx
    return aValue & Mask != 0

def SetBit(aValue, aIdx, aSet = True):
    Mask = 1 << aIdx
    if (aSet):
        aValue |= Mask
    else:
        aValue &= ~Mask
    return aValue

def MirrorBit(aValue, aWidth = 8):
    Value = int(aValue)
    Result = 0
    for i in range(aWidth):
        Result <<= 1
        Result |= Value & 1
        Value >>= 1
    return Result

def RoundPart(aValue, aPart = 0.25):
    if (aValue == 0):
        Result = 0.0
    else:
        Parted = float(aValue) / aPart
        Result = round(math.floor(Parted) * aPart, 3)
    return Result

def Clamp(aMin, aMax, aValue):
    return max(aMin, min(aValue, aMax))

def InDevation(aBase, aValue, aDevation):
    Devation = aBase * aDevation
    return (aValue >= aBase - Devation) and (aValue <= aBase + Devation)

def RandSum(aCnt, aSum = 1, aRound = 2):
    Numbers = []
    for i in range(aCnt):
        Num = random.randint(20, 100)
        Numbers.append(Num)
    Sum = float(sum(Numbers))

    Result = []
    for Number in Numbers:
        Num = round(Number / Sum * aSum, aRound)
        Result.append(Num)

    Result[0] += aSum - sum(Result)
    return Result


#--- Classes

class TAvg():
    def __init__(self, aSize = 3, aRound = 2):
        self.SetSize(aSize)
        self.Enable    = True
        self.Round     = aRound
        self.LastTime  = None
        self.Direction = 0

    def SetSize(self, aSize):
        self.Data = collections.deque([], aSize)

    def GetSize(self):
        return self.Data.maxlen

    def Validate(self, aValue):
        if (aValue is None):
            aValue = 0
        return float(aValue)

    def Add(self, aValue):
        if (not type(aValue).__name__ in ['int', 'float']):
            Log.PrintDbg(1, 'w', 'Value is not digital %s' % aValue)
            aValue = Str.ToFloat(aValue)

        self.Direction = aValue - self.GetAvg()
        self.LastTime = time.time()
        self.Data.append(self.Validate(aValue))

    def GetAvg(self):
        return Arr.Avg(self.Data)

    def GetAvgRound(self):
        return round(self.GetAvg(), self.Round)

    def Check(self, aValue, aDevation = 0.5):
        Result = True
        if (self.Data and self.Enable):
            Result = InDevation(self.GetAvg(), self.Validate(aValue), aDevation)
        return Result


class TUpdateDelay():
    def __init__(self):
        self.Data = {}
        self.Diff    = 0.01
        self.Refresh = 60

    def Update(self, aAlias):
        self.Data[aAlias]['Updated'] = time.time()

    def Get(self, aAlias):
        try:
            return self.Data[aAlias]['Avg'].GetAvg()
        except:
            return 0

    def Check(self, aAlias, aValue):
        Result = False
        if (aAlias not in self.Data):
            Item = {'Avg': TAvg(), 'Updated': 0}
            self.Data[aAlias] = Item
        else:
            Item = self.Data[aAlias]

        Item['Avg'].Add(aValue)
        if (time.time() - Item['Updated'] > self.Refresh) or (not Item['Avg'].Check(aValue, self.Diff)):
            Result = True

        return Result


# Dvornitsky V.
class TFadeWave():
    def __init__(self, aStarSec, aFinishSec, aStartVal, aPeakVal):
        self._offsetX = aStarSec
        self._scaleX  = aFinishSec - aStarSec
        self._offsetY = aStartVal
        self._scaleY  = math.fabs(aPeakVal - aStartVal)

        self.Night    = False

    def SetNight(self, aValue):
        self.Night = aValue

    def Get(self, aCurSec):
        x = aCurSec - self._offsetX
        rad = x * math.pi / self._scaleX
        if (self.Night):
            rad += math.pi
        Result = (math.sin(rad) * self._scaleY) + self._offsetY
        return Result
