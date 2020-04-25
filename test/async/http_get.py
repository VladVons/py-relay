#!/usr/bin/env python3

import aiohttp
import asyncio


async def fetch(aSession, aUrl: str):
    try:
        async with aSession.get(aUrl) as Response:
            R = await Response.text()
    except Exception as E: 
        print('Err', E)
        R = None
    return R


async def main():
    async with aiohttp.ClientSession() as session:
        html = await fetch(session, 'http://oster.com.ua')
        print(html)


loop = asyncio.get_event_loop()
loop.run_until_complete(main())
