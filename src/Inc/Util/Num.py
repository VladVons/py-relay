'''
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2016.08.21
License:     GNU, see LICENSE for more details
Description:
'''

import math
import collections
import time
import random


def SetBit(aValue, aIdx, aSet = True):
    Mask = 1 << aIdx
    if (aSet):
        aValue |= Mask
    else:
        aValue &= ~Mask
    return aValue

def MirrorBit(aValue, aWidth = 8):
    StrBin  = '{:0{width}b}'.format(aValue, width = aWidth)
    StrMir  = StrBin[::-1]
    return int(StrMir, 2)

def RoundPart(aValue, aPart = 0.25):
    return round(math.floor(float(aValue) / aPart) * aPart, 3)

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
        self.Arr = collections.deque([], aSize)

    def GetSize(self):
        return self.Arr.maxlen

    def Validate(self, aValue):
        if (aValue is None):
            aValue = 0
        return float(aValue)

    def Add(self, aValue):
        self.Direction = aValue - self.GetAvg()
        self.LastTime = time.time()
        self.Arr.append(self.Validate(aValue))

    def GetAvg(self):
        Result = sum(self.Arr)
        if (Result != 0):
            Result = Result / len(self.Arr)
        return Result

    def GetAvgRound(self):
        return round(self.GetAvg(), self.Round)

    def Check(self, aValue, aDevation = 0.5):
        Result = True
        if (self.Arr and self.Enable):
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
        self._offsetX = aStarSec;
        self._scaleX  = aFinishSec - aStarSec;
        self._offsetY = aStartVal;
        self._scaleY  = math.fabs(aPeakVal - aStartVal);

        self.Night    = False;

    def Get(self, aCurSec):
        x = aCurSec - self._offsetX;
        rad = x * math.pi / self._scaleX;
        if (self.Night):
            rad += math.pi
        return (math.sin(rad) * self._scaleY) + self._offsetY;
