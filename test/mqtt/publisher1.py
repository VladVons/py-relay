#!/usr/bin/env python

import os
import time
import json
import paho.mqtt.client as mqtt
import paho.mqtt.publish as pub


Host  = "vpn2.oster.com.ua"
Port  = 1883
Topic = 'DraganivkaSen'


client = mqtt.Client(client_id = "xx2")
client.connect(Host, Port)
#client.subscribe('Hust01') #?

Cnt = 0
while True:
    Cnt += 1
    Msg = {"Alias": "publisher1.py", "Value": Cnt}
    print(Msg)

    client.publish(Topic, json.dumps(Msg), 0);
    time.sleep(3)

client.disconnect()
#time.sleep(100)

#client = mqtt.Client()
#m1 = pub.single('Hust02', 'Hello world 2!', hostname="vpn2.oster.com.ua",  port=1883)
#print(m1)
