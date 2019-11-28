"""
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2018.04.12
License:     GNU, see LICENSE for more details

Description:
    call one time per minute to avoid bahn from weather.com server 
    WeatherForecast = TProviderWeatherForecast('380d2c36ad44e4e5', 'zbarazh', 1)
    print(WeatherForecast.Read(None))

Help:
https://www.wunderground.com/weather/api/d/docs
https://www.wunderground.com/weather/api/d/docs?d=resources/code-samples
http://api.wunderground.com/api/380d2c36ad44e4e5/conditions/q/CA/San_Francisco.json
"""

import json 
import datetime
#
from Inc.Util import UNet
from ._Common import TProvider


class TProviderWeatherToday(TProvider):
    def __init__(self, aToken, aCity):
        self.Url = 'http://api.wunderground.com/api/%s/conditions/q/CA/%s.json' % (aToken, aCity)

    def Read(self, aNotUsed):
        Result = {}
        PostData = UNet.PostRequest(self.Url, None)
        if (PostData):
            Data = json.loads(PostData)['current_observation']
            Result['date']       = datetime.datetime.fromtimestamp(float(Data['observation_epoch']))
            Result['weather']    = Data['weather']
            Result['temper']     = float(Data['temp_c'])
            Result['humidity']   = float(Data['relative_humidity'].replace('%', ''))
            Result['wind_kph']   = float(Data['wind_kph'])
            Result['wind_dir']   = Data['wind_dir']
            Result['visibility_km']  = float(Data['visibility_km'])
            Result['pressure_trend'] = Data['pressure_trend']
            Result['pressure_mmh']   = int(float(Data['pressure_mb']) / 1000 * 750)
        return Result

    def Get(self, aCaller, aValue):
        return self.ReadTry()


class TProviderWeatherForecast(TProvider):
    def __init__(self, aToken, aCity, aDays = 1):
        self.Url  = 'http://api.wunderground.com/api/%s/forecast/q/CA/%s.json' % (aToken, aCity)
        self.Days = aDays

    def Read(self, aNotUsed):
        Result = {}
        PostData = UNet.PostRequest(self.Url, None)
        if (PostData):
            Data = json.loads(PostData)['forecast']['simpleforecast']['forecastday'][self.Days]
            Result['date']     = datetime.datetime.fromtimestamp(float(Data['date']['epoch']))
            Result['weather']  = Data['conditions']
            Result['humidity'] = float(Data['avehumidity'])
            Result['wind_kph'] = float(Data['avewind']['kph'])
            Result['wind_dir'] = Data['avewind']['dir']
            Result['temper_min'] = float(Data['low']['celsius'])
            Result['temper_max'] = float(Data['high']['celsius'])
            Result['snow']       = float(Data['snow_day']['cm'])
        return Result

    def Get(self, aCaller, aValue):
        return self.ReadTry()
