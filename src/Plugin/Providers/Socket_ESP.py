"""
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2017.03.25
License:     GNU, see LICENSE for more details
Description:
"""

from Inc.Log          import Log
from Inc.SocketClient import TSockClientTCPJson, TSockClientUDPJson
from ._Common         import TProvider


class TSerialize():
    def __init__(self):
        self.Clear()

    def Show(self):
        print(self.Data)

    def Clear(self):
        self.Data = {}
        self.AddKey('Data', [])

    def GetDic(self):
        return self.Data

    def AddData(self, aData):
        self.Data['Data'].append(aData)

    def AddKey(self, aKey, aValue):
        self.Data[aKey] = aValue

    def AddFunc(self, aName, aArgs = []):
        self.AddData( {"Func": aName, "Args": aArgs} )

    def Print(self, aValue):
        return
        self.AddFunc("Log", [1, aValue])

    def Exec(self, aValue):
        self.AddFunc("Exec", [aValue])

    def SetLogLevel(self, aValue):
        self.AddFunc("SetLogLevel", [aValue])

    #--- Pin functions
    def GetPin(self, aPin):
        self.AddFunc("GetPin", [aPin])

    def SetPin(self, aPin, aValue):
        self.AddFunc("SetPin", [aPin, aValue])

    def SetPinInv(self, aPin):
        self.AddFunc("SetPinInv", [aPin])

    def GetPwmDuty(self, aPin):
        self.AddFunc("GetPwmDuty", [aPin])

    def SetPwm(self, aPin, aFreq, aDuty):
        self.AddFunc("SetPwmFreq", [aPin, aFreq])
        self.AddFunc("SetPwmDuty", [aPin, aDuty])

    def SetPwmOff(self, aPin):
        self.AddFunc("SetPwmOff", [aPin])

    def GetAdc(self):
        self.AddFunc("GetAdc")

    def AddFuncArr(self, *aArgs):
        self.AddFunc('CallFuncArr', aArgs)

    def GetDS1820(self, aPin):
        self.AddFunc("GetDS1820", [aPin])

    def GetDHT22(self, aPin):
        self.AddFunc("GetDHT22", [aPin])


class TProviderSocket_ESP(TProvider):
    def __init__(self, aHost, aPort):
        self.Host = aHost
        self.Port = aPort

    def Read(self, aNotUsed):
        self.Serialize = TSerialize()
        self.Serialize.GetDHT22(13)
        #self.Serialize.Show()
        #print(self.Host, self.Port, self.Serialize.Data)

        self.Socket = TSockClientUDPJson(self.Host, self.Port)
        Result = self.Socket.Send(self.Serialize.Data, 1)
        if (Result):
            #print(Result)
            d1 = Result['Data'][0]
            d2 = d1['Result'][1]
            return d2
        else:    
            return None

    def Get(self):
        Result = self.ReadTry()
        print('---1', Result)
        return None
