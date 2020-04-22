#!/usr/bin/env python

import paho.mqtt.client as mqtt
import paho.mqtt.publish as pub

Topic = 'MyTopic'


# The callback for when the client receives a CONNACK response from the server.
def on_connect(aClient, aUserData, flags, aRC):
    print("on_connect", 'aRC', aRC, 'aUserData', aUserData)

    # Subscribing in on_connect() means that if we lose the connection and
    # reconnect then subscriptions will be renewed.

    #client.subscribe("#")
    #client.subscribe("$SYS/#")
    aClient.subscribe(Topic)


# The callback for when a PUBLISH message is received from the server.
def on_message(client, userdata, msg):
    print('on_message', msg.topic, msg.payload, userdata)

    #Res = client.publish(msg.topic)
    #print(Res)

    #client.publish(msg.topic, 'Hello', 0, True)
    #pub.single(msg.topic, 'Hello world 3', hostname="vpn2.oster.com.ua",  port=1883)

#client = mqtt.Client(client_id="xx1", protocol=3, userdata = 'self')
client = mqtt.Client()
client.on_connect = on_connect
client.on_message = on_message

client.connect("vpn2.oster.com.ua", 1883, 60)
#client.publish("Hust02", 'Hello2')
client.loop_forever()
#client.loop_start()
