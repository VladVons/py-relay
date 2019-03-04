'''
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2017.11.09
License:     GNU, see LICENSE for more details

Description:
Reads humidity from a sensor DHT_22
Sensor has a temperature too

Install:
? sudo pip install adafruit-dht 

needs root to access gpio
#sudo pip install Adafruit_Python_DHT

git clone https://github.com/adafruit/Adafruit_Python_DHT.git
cd Adafruit_Python_DHT
sudo python setup.py install 
'''

try:
    import Adafruit_DHT as dht
except Exception as E:
    print(__file__, E, 'pip install Adafruit_Python_DHT')
#
from .Provider import TProvider


class TProviderDHT(TProvider):
    def __init__(self, aObj, aAddress):
        self.Obj     = aObj
        self.Address = aAddress

    def Read(self, aNotUsed):
        return dht.read(self.Obj, self.Address)


class TProviderDHT_22(TProviderDHT):
    def __init__(self, aAddress):
        TProviderDHT.__init__(self, dht.DHT22, aAddress)

    def Read(self, aNotUsed):
        Data = TProviderDHT.Read(self, None)

        Result = {}
        Result['default']     = Data[0]
        Result['humidity']    = Data[0]
        Result['temperature'] = Data[1]

        # print('---1 TProviderDHT_22', Result)
        return Result

    def Get(self, aKey = 'default'):
        return self.GetKey(aKey)

