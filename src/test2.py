#!/usr/bin/env python3

import ephem

def GetSunAngle(aLatitude, aLongitude):
    Observe = ephem.Observer()
    Observe.lat  = aLatitude
    Observe.long = aLongitude

    Sun = ephem.Sun()
    Sun.compute(Observe)
    Degrees = round(float(Sun.alt) * 57.2957795, 2)

    return Degrees


Angle = GetSunAngle(49.553516, 25.594767)
print('Sun degrees', Angle)
