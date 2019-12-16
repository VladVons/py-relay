#!/usr/bin/env python

import os
import paho.mqtt.client as mqtt
import paho.mqtt.publish as pub


def LoadFromFile(aFileName: str, aMode = 'r') -> bytes:
    Result = None
    if (os.path.isfile(aFileName)):
        with open(aFileName, aMode) as File:
            Result = File.read()
    return Result

Topic = 'Hust02'
#Str   = LoadFromFile('subscriber1.py')
Str= 'Hello world 1'

client = mqtt.Client(client_id="xx2")
client.connect('vpn2.oster.com.ua', 1883)
#client.subscribe('Hust01') #?
m1 = client.publish(Topic, Str, 0);
print(m1)
client.disconnect();
#time.sleep(100)

#client = mqtt.Client()
#m1 = pub.single('Hust02', 'Hello world 2!', hostname="vpn2.oster.com.ua",  port=1883)
#print(m1)
