'''
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2018.04.04
License:     GNU, see LICENSE for more details
Description:
    Sollar util
    Sunrise, Sunset, Angle
    https://planetcalc.ru/320/

Sun = TSun('49.553516', '25.594767')
print Sun.Angle()
print Sun.Visible()

'''


try:
    import ephem
except Exception as E:
    print(__file__, E, 'pip install ephem')
#
import datetime



class TSolar():
    def __init__(self, aLatitude, aLongitude):
        self.SetGPS(aLatitude, aLongitude)

    def SetGPS(self, aLatitude, aLongitude):
        self.Latitude  = str(aLatitude)
        self.Longitude = str(aLongitude)

    def Update(self):
        self.Observe = ephem.Observer()
        self.Observe.lat  = self.Latitude
        self.Observe.long = self.Longitude

        self.Obj.compute(self.Observe)

    def NextDay(self):  
        self.Update()
        Dawn = ephem.localtime(self.Observe.next_rising(self.Obj)).time().replace(microsecond = 0)
        Dask = ephem.localtime(self.Observe.next_setting(self.Obj)).time().replace(microsecond = 0)
        return [Dawn, Dask]

    def Visible(self):  
        Dawn, Dask = self.NextDay()
        Now = datetime.datetime.today().time().replace(microsecond = 0)
        return (Now > Dawn) and (Now < Dask) 

    def Angle(self):
        self.Update()
        Degrees = float(self.Obj.alt) * 57.2957795
        return round(Degrees, 3)


class TSun(TSolar):
    def __init__(self, aLatitude, aLongitude):
        TSolar.__init__(self, aLatitude, aLongitude)
        self.Obj = ephem.Sun()


class TMoon(TSolar):
    def __init__(self, aLatitude, aLongitude):
        TSolar.__init__(self, aLatitude, aLongitude)
        self.Obj = ephem.Moon()



#---
from .Provider import TProvider


class TProviderSolar(TProvider):
    def Read(self, aNotUsed):
        Result = {}
        Result['Visible'] = self.SolarObj.Visible()
        Result['Angle']   = self.SolarObj.Angle()
        Result['default'] = Result['Angle']
        return Result

    def Get(self, aKey = 'default'):
        return self.GetKey(aKey)


class TProviderSun(TProviderSolar):
    def __init__(self, aLatitude, aLongitude):
        self.SolarObj = TSun(aLatitude, aLongitude)


class TProviderMoon(TProviderSolar):
    def __init__(self, aLatitude, aLongitude):
        self.SolarObj = TMoon(aLatitude, aLongitude)

