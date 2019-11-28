#!/usr/bin/env python2

from Plugin.Providers.Weather import TProviderWeatherToday
WeatherToday = TProviderWeatherToday('380d2c36ad44e4e5', 'zbarazh')
print(WeatherToday.Read(None))
