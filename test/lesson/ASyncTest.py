#!/usr/bin/env python3
# 2020.03.31

import asyncio
import time


# Old style
@asyncio.coroutine
def SleepA(aTime):
    print('---- SleepA. Wait', aTime)
    yield from asyncio.sleep(aTime)


# New style
async def SleepB(aTime):
    print('---- SleepB. Wait', aTime)
    await asyncio.sleep(aTime)


async def Func1(aCnt):
    print('--- Func1. Begin')
    for i in range(1, aCnt):
        if (i % 5 == 0):
            print('Func2 loop. Freeze', i)
            time.sleep(5)
        else:
            print('Func2 loop. Await', i)
            await asyncio.sleep(1)


async def Func2(aCnt):
    print('--- Func2. Begin')
    for i in range(aCnt):
        await SleepA(5)
        await SleepB(5)


Cnt = 100
loop1 = asyncio.get_event_loop()
loop1.create_task(Func1(Cnt))
loop1.create_task(Func2(Cnt))
loop1.run_forever()
