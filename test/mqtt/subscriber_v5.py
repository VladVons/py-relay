#!/usr/bin/env python

import os
import signal
import asyncio
from gmqtt import Client as MQTTClient


TOPIC = 'Hust06'
STOP = asyncio.Event()

def ask_exit(*args):
    STOP.set()

def on_connect(client, flags, rc, properties):
    client.subscribe(TOPIC, qos=1)
    print('on_connect()')

def on_message(client, topic, payload, qos, properties):
    print('on_message()', topic, payload.decode(), properties)

async def main(aHost, aToken):
    print('main()', aHost, aToken)

    client = MQTTClient('asdfghjk')
    client.on_message = on_message
    client.on_connect = on_connect
    #client.set_auth_credentials(aToken, None)
    await client.connect(aHost, 1883, keepalive=60)
    #client.publish(TOPIC, 'Message payload', response_topic='RESPONSE/TOPIC')
    #client.publish(TOPIC, 'Message payload', response_topic=TOPIC)

    await STOP.wait()
    await client.disconnect()


token = os.environ.get('FLESPI_TOKEN')
loop  = asyncio.get_event_loop()
Obj   = main('vpn2.oster.com.ua', token)

loop.add_signal_handler(signal.SIGINT, ask_exit)
loop.add_signal_handler(signal.SIGTERM, ask_exit)
loop.run_until_complete(Obj)
