"""
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2019.05.02
License:     GNU, see LICENSE for more details
Description:
"""

import json
try:
    import paho.mqtt.client as mqtt
except Exception as E:
    print(__file__, E, 'apt-get install python-paho-mqtt')
#
from Inc.Util         import Net
from Inc.Log          import Log
from Core.Device      import TControl
#from Plugin.Providers.Modbus import TProviderModbusRTU


class TControlMQTT(TControl):
    def __init__(self, aParent):
        TControl.__init__(self, aParent)
        self.Pipe = None

        Pattern = {'Host': 'localhost', 'Port': 1883, 'Topic': 'py-relay'}
        self.Param.AddDefPattern(Pattern)

    def __del__(self):
        if (self.Client):
            self.Client.disconnect()

    def DoParameter(self, aParam):
        self.Param.LoadPattern(aParam)

        #if (not Net.CheckHostPort(self.Param.Host, self.Param.Port)):
        #    Msg = Log.PrintDbg(1, 'e', 'Cant connect to host %s:%s' % (self.Param.Host, self.Param.Port))

        self.Client = mqtt.Client(userdata = self)
        try:
            self.Client.connect(self.Param.Host, self.Param.Port)
        except Exception as E:
            Msg = Log.PrintDbg(1, 'e', 'Host %s:%s' % (self.Param.Host, self.Param.Port), E.strerror)
            raise Exception(Msg)

        self.Client.subscribe('py-relay2')
        self.Client.on_message = TControlMQTT.on_message
        self.Client.loop_start()

    def DoStartExit(self):
        self.Pipe = self.Manager.SecRun.ThreadPipe
        if (not self.Pipe):
            Msg = Log.PrintDbg(1, 'e', 'HttpServer not running. Check ApiPort option')
            raise Exception(Msg)

    def _Set(self, aCaller, aValue):
        Data = {'Caller': aCaller.Alias, 'Value': aValue}
        DataStr = json.dumps(Data)
        self.Client.publish(self.Param.Topic, DataStr)

    def _Get(self):
        pass

    @staticmethod
    def on_message(aClient, aSelf, aMessage):
        aSelf.OnMessage(aClient, aMessage)

    def OnMessage(self, aClient, aMessage):
        aData = {'path': '/get/dev/values'}
        Data = self.Pipe.ThreadSend(aData)
        print ('on_message', aMessage.topic, aMessage.payload, Data)

        DataStr = json.dumps(Data)
        self.Client.publish(self.Param.Topic, DataStr)
