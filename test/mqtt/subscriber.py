#!/usr/bin/env python2


"""
on server side:
apt install mosquitto
service mosquitto start

https://mntolia.com/mqtt-python-with-paho-mqtt-client
"""

try:
    import paho.mqtt.client as mqtt
except:
    print('apt install python-paho-mqtt')

import time


class TMqtt():
    def __init__(self):
        self.Connected = False
        self.Timeout   = 5
        self.Cnt       = 0
        self.Me        = 'It is me'

    def OnTimeout(self):
        self.Cnt += 1
        print('OnTimeout', self.Cnt)
        self.Client.publish('py-relay2', 'Hello')

    @staticmethod
    def on_connect(aClient, aUserData, aFlags, aRc):
        if (aRc == 0):
            aUserData.Connected = True
            #aClient.subscribe('/topic/test1', 0)
            #aClient.subscribe('/topic/test2', 1)
            #aClient.subscribe('/topic/test3', 2)
            #aClient.subscribe('/topic/test4', 1)
            print('Connection ok')
        else:
            print('Connection failed')

    @staticmethod
    def on_message_test2(aClient, aSelf, aMessage):
        print ('on_message_test2', aMessage.topic, aMessage.payload, aSelf.Me)

    @staticmethod
    def on_message(aClient, aSelf, aMessage):
        print ('on_message', aMessage.topic, aMessage.payload, aSelf.Me)

    @staticmethod
    def on_publish(aClient, aSelf, aMid):
        print('on_publish', str(aMid))

    @staticmethod
    def on_subscribe(aClient, aSelf, aMid, aGranted):
        print('on_subscribe', str(aMid), str(aGranted))

    @staticmethod
    def on_log(aClient, aSelf, aLevel, aString):
        print(aString)

    def Subscribe(self, aClient, aTopic):
        for Topic in aTopic:
            aClient.subscribe(Topic)

    def Connect(self, aHost, aPort = 1883, aSubscriber = 'test'):
        self.Client = mqtt.Client(userdata = self)
        self.Client.username_pw_set('username', 'password')

        self.Client.on_connect = TMqtt.on_connect
        self.Client.on_message = TMqtt.on_message
        self.Client.on_publish = TMqtt.on_publish
        #self.Client.on_log     = TMqtt.on_log
        self.Client.on_subscribe = TMqtt.on_subscribe
        #self.Client.message_callback_add("/topic/test2", TMqtt.on_message_test2)

        self.Client.connect(aHost, aPort)
        self.Client.subscribe(aSubscriber)
        #self.Client.publish('py-relay2', 'Hello')
        #self.Subscribe(self.Client, ['/topic/test1', '/topic/test2', '/topic/test3', '/topic/test4'])
        self.Client.loop_start()
        while (not self.Connected):
            time.sleep(1)

        try:
            while True:
                #self.Client.loop()
                time.sleep(self.Timeout)
                self.OnTimeout()
        except KeyboardInterrupt:
            print('Ctrl-C')
        finally:
            self.Client.disconnect()
            self.Client.loop_stop()


Mqtt = TMqtt()
Mqtt.Connect('localhost', 1883, 'py-relay')
