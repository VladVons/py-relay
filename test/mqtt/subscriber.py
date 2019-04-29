
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
        self.Timeout   = 1
        self.Cnt       = 0
        self.Me        = 'It is me'

    def OnTimeout(self):
        self.Cnt += 1
        print('OnTimeout', self.Cnt)

    @staticmethod
    def on_connect(aClient, aUserData, aFlags, aRc):
        if (aRc == 0):
            aUserData.Connected = True
            #aClient.subscribe('/topic/test1')
            #aClient.subscribe('/topic/test2')
            print('Connection ok')
        else:
            print('Connection failed')

    @staticmethod
    def on_message_test2(aClient, aSelf, aMessage):
        print ('on_message_test2', 'topic', aMessage.topic, 'payload', aMessage.payload, 'Me', aSelf.Me)

    @staticmethod
    def on_message(aClient, aSelf, aMessage):
        print ('on_message', 'topic', aMessage.topic, 'payload', aMessage.payload, 'Me', aSelf.Me)

    @staticmethod
    def on_publish(aClient, aSelf, aMid):
        print("mid: " + str(aMid))

    @staticmethod
    def on_subscribe(aClient, aSelf, aMid, aGranted):
        print("Subscribed: " + str(aMid) + ' ' + str(aGranted))

    @staticmethod
    def on_log(aClient, aSelf, aLevel, aString):
        print(aString)

    def Connect(self, aHost, aPort = 1883, aSubscriber = 'test'):
        Client = mqtt.Client(userdata = self)
        Client.username_pw_set('username', 'password')

        Client.on_connect = TMqtt.on_connect
        Client.on_message = TMqtt.on_message
        Client.on_publish = TMqtt.on_publish
        Client.on_log     = TMqtt.on_log
        Client.on_subscribe = TMqtt.on_subscribe
        Client.message_callback_add("/topic/test2", TMqtt.on_message_test2)

        Client.connect(aHost, aPort)
        Client.subscribe(aSubscriber, 1)
        Client.publish(aSubscriber, 'Hello')
        Client.loop_start()
        while (not self.Connected):
            time.sleep(1)

        try:
            while True:
                #Client.loop()
                time.sleep(self.Timeout)
                self.OnTimeout()
        except KeyboardInterrupt:
            print('Ctrl-C')
        finally:
            Client.disconnect()
            Client.loop_stop()


Mqtt = TMqtt()
Mqtt.Connect('localhost', 1883, '/topic/test')
