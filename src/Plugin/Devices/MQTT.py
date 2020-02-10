"""
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2019.05.02
License:     GNU, see LICENSE for more details
Description:
"""

import json
import time
try:
    import paho.mqtt.client as mqtt
except Exception as E:
    print(__file__, E, 'apt-get install python-paho-mqtt', 'pip install paho-mqtt')
#
from Inc.Log          import Log
#from Inc.Util         import UNet
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

        #if (not UNet.CheckHostPort(self.Param.Host, self.Param.Port)):
        #    Msg = Log.PrintDbg(1, 'e', 'Cant connect to host %s:%s' % (self.Param.Host, self.Param.Port))

        self.Client = mqtt.Client(userdata = self)
        try:
            self.Client.connect(self.Param.Host, self.Param.Port)
        except Exception as E:
            Msg = Log.PrintDbg(1, 'e', 'Host %s:%s' % (self.Param.Host, self.Param.Port), E.strerror)
            raise Exception(Msg)

        Topic = self.Param.Topic + '/get/dev/values'
        self.Client.subscribe(Topic)

        self.Client.on_message = TControlMQTT.on_message
        self.Client.loop_start()

    def DoStartExit(self):
        #self.Pipe = self.Manager.SecRun.ThreadPipe
        #if (not self.Pipe):
        #    Msg = Log.PrintDbg(1, 'e', 'HttpServer not running. Check ApiPort option')
        #    raise Exception(Msg)
        pass

    def _Set(self, aCaller, aValue):
        self.Publish(aCaller.Alias, aValue)

    def _Get(self):
        pass

    def Publish(self, aAlias, aValue):
        Class = self.Manager.SecClass.GetClass(aAlias)
        if (Class.Public):
            Data = {'Alias': aAlias, 'Value': aValue}
            DataStr = json.dumps(Data)
            self.Client.publish(self.Param.Topic, DataStr)

            Topic = '%s/%s' % (self.Param.Topic, aAlias)
            self.Client.publish(Topic, aValue)

    @staticmethod
    def on_message(aClient, aSelf, aMessage):
        aSelf.OnMessage(aClient, aMessage)

    def OnMessage(self, aClient, aMessage):
        Path  = aMessage.topic.replace(self.Param.Topic, '')
        if (Path == '/get/dev/values'):
            aData = {'path': Path}
            Data = self.Pipe.ThreadSend(aData)
            for Idx, Item in enumerate(Data):
                self.Publish(Item, Data[Item])
                time.sleep(0.1)
