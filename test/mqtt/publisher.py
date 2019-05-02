#!/usr/bin/env python2

import time
import paho.mqtt.client as mqtt
import paho.mqtt.publish as pub

# This is the Publisher

client = mqtt.Client()
client.connect('localhost', 1883)
#client.subscribe('/topic/test') #?
m1 = client.publish('/topic/test2', 'Hello world 1!', 0);
print(m1)
client.disconnect();
#time.sleep(100)

#client = mqtt.Client()
#pub.single('/topic/test', 'Hello world 2!', hostname="localhost",  port=1883)
