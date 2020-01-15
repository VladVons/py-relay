#!/usr/bin/env python3

# https://www.youtube.com/watch?v=LO61F07s7gw
# VladVons@gmail.com

import os
import sys
import time
import random
import requests
from mimetypes import MimeTypes
#
import asyncio
import aiohttp # pip3 install aiohttp


class TFetch():
    def __init__(self, aDir = 'pic'):
        self.Cnt = 0
        self.Stamp = time.strftime("%Y%m%d-%H%M%S")
        self.Dir = aDir
        if (not os.path.exists(aDir)):
            os.makedirs(aDir)

    def WriteImage(self, aData):
        mime = MimeTypes()

        self.Cnt += 1
        FileName = '%s/%s-%s.jpg' % (self.Dir, self.Stamp, str(self.Cnt).zfill(3))
        print(FileName)
        with open(FileName, 'wb') as File:
            File.write(aData)


class TFetchSync(TFetch):
    def Get(self, aUrl, aCount):
        for i in range(aCount):
            request = requests.get(aUrl)
            self.WriteImage(request.content)


class TFetchAsync(TFetch):
    async def FetchContent(self, aUrl, aSession):
        async with aSession.get(aUrl) as Responce:
            Data = await Responce.read()
            self.WriteImage(Data)

    async def Get(self, aUrl, aCount, aLoop = None):
        print('Creating tasks...')

        Tasks = []
        async with aiohttp.ClientSession() as Session:
            for i in range(aCount):
                Idx = random.randint(0, len(aUrl))
                Url = aUrl[Idx - 1]
                if (aLoop): # python < 3.7
                    Task = aLoop.create_task(self.FetchContent(Url, Session))
                else:
                    Task = asyncio.create_task(self.FetchContent(Url, Session))
                Tasks.append(Task)
            print('Gathering tasks begin ...')
            await asyncio.gather(*Tasks)
            print('Gathering tasks end ...')



"""
Url = [
    'https://loremflickr.com/800/600/dog',
    'https://loremflickr.com/800/600/cat',
    'https://loremflickr.com/800/600/girl',
    'http://oster.com.ua'
]
"""

Host='http://localhost:8888'
Query='?style=json'
Url = [
    '%s/get/app/version%s' % (Host, Query),
    '%s/get/app/api%s'     % (Host, Query),
    '%s/get/app/classes%s' % (Host, Query),
    '%s/get/app/devices%s' % (Host, Query),
    '%s/get/dev/value?alias=WriteLog%s' % (Host, Query)
]


Cnt = 1000

TimeStart = time.time()
FetchAsync = TFetchAsync()
if (sys.version_info >= (3, 7)):
    Obj = FetchAsync.Get(Url, Cnt)
    asyncio.run(Obj)
else:
    loop = asyncio.get_event_loop()
    Obj = FetchAsync.Get(Url, Cnt, loop)
    loop.run_until_complete(Obj)
    loop.close()

TimeSec = round(time.time() - TimeStart, 2)
print('FetchAsync sec:', TimeSec, 'per/sec:', round(Cnt / TimeSec, 2))
print()

#TimeStart = time.time()
#FetchSync = TFetchSync()
##FetchSync.Get(Url, Cnt)
#print('FetchSync Time', time.time() - TimeStart)
#print()
