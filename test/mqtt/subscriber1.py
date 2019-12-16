#!/usr/bin/env python

"""
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2019.05.02
License:     GNU, see LICENSE for more details


on server side:
apt install mosquitto
service mosquitto start

https://mntolia.com/mqtt-python-with-paho-mqtt-client
"""

try:
    import paho.mqtt.client  as mqtt
    import paho.mqtt.publish as pub
except:
    print('sudo apt install python-paho-mqtt')

import time


class TMqttSub():
    def __init__(self):
        self.Connected = False
        self.Timeout   = 5
        self.Cnt = 0

    def OnTimeout(self):
        #self.Cnt += 1
        #print('OnTimeout', self.Cnt)
        #self.Client.publish('py-relay2', 'Hello')
        pass

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
        aSelf.Cnt += 1
        #pub.single('Hust01', 'Hello world 3', hostname="vpn2.oster.com.ua",  port=1883)
        print ('on_message', aSelf.Cnt, aMessage.topic, aMessage.payload)
        #return 'Hello'

    @staticmethod
    def on_publish(aClient, aSelf, aMid):
        print('on_publish', str(aMid))

    @staticmethod
    def on_subscribe(aClient, aSelf, aMid, aGranted):
        print('on_subscribe', str(aMid), str(aGranted))

    @staticmethod
    def on_log(aClient, aSelf, aLevel, aString):
        print(aString)

    @staticmethod
    def on_disconnect(aClient, aSelf, aMid):
      aClient.reconnect()

    def Subscribe(self, aClient, aTopic):
        for Topic in aTopic:
            aClient.subscribe(Topic)

    def Connect(self, aHost, aPort = 1883, aSubscriber = 'test'):
        print('Subscriber', aSubscriber)
        self.Client = mqtt.Client(userdata = self)
        #self.Client.username_pw_set('username', 'password')

        self.Client.on_connect = TMqttSub.on_connect
        self.Client.on_message = TMqttSub.on_message
        self.Client.on_publish = TMqttSub.on_publish
        #self.Client.on_log     = TMqttSub.on_log
        self.Client.on_subscribe  = TMqttSub.on_subscribe
        self.Client.on_disconnect = TMqttSub.on_disconnect
        #self.Client.message_callback_add("/topic/test2", TMqttSub.on_message_test2)

        self.Client.connect(aHost, aPort)
        self.Client.subscribe(aSubscriber)
        #self.Client.subscribe('Hust02')
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




#Topic = 'Hust01'
Topic = 'Hust02'
#
#Topic = 'Noviki01'
#
#Topic = 'Mishk01'
#Topic = 'Mishk01/DH2_Sensor_Humid'
#
#Topic = 'tr24'
#Topic = 'Mishk01/DH2_Sensor_Humid'

#Topic = 'Watch01'
#
MqttSub = TMqttSub()
MqttSub.Connect('vpn2.oster.com.ua', 1883, Topic)
#MqttSub.Connect('localhost', 1883, Topic)
#---end
