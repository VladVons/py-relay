#!/usr/bin/env python3

#from Plugin.Providers.Weather import TProviderWeatherToday
#WeatherToday = TProviderWeatherToday('380d2c36ad44e4e5', 'zbarazh')
#print(WeatherToday.Read(None))

import json 
#import urllib

try: from urllib2 import Request, urlopen
except: from urllib.request import Request, urlopen

#try: from urllib2 import Request, urlopen
#except: from urllib.request import Request, urlopen
#
#try: from urllib import urlencode
#except: from urllib.parse import urlencode


Url = 'http://192.168.2.202/dev/dht22'
aData = {'pin': 14}

Request = Request(Url)
Request.add_header('Content-Type', 'text/json')
#Data     = urlparse.urlencode(json.dumps(aData)).encode("utf-8")
Data     = json.dumps(aData).encode('ascii')
Response = urlopen(Request, Data)
Data     = Response.read()
Result   = json.loads(Data)
print(Result)

#import urllib.request

#data = urllib.parse.urlencode(aData)
#data = data.encode('ascii')
#req = urllib.request.Request(Url, data)
#with urllib.request.urlopen(req) as response:
#   the_page = response.read()
#   print(the_page)
