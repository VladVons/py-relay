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
from Inc.Util         import UNet, UObj
from Core.Device      import TControl
from Api.ExternApi    import TExternApi


class TControlMQTT(TControl):
    def __init__(self, aParent):
        super().__init__(aParent)
        self.Pipe = None

        Pattern = {'Host': 'localhost', 'Port': 1883, 'Topic': 'py-relay'}
        self.Param.AddDefPattern(Pattern)

    def __del__(self):
        if (self.Client):
            self.Client.disconnect()

    def DoParameter(self, aParam):
        self.Param.LoadPattern(aParam)

        self.ExternApi = TExternApi(self.Manager)

        if (not UNet.CheckHostPort(self.Param.Host, self.Param.Port)):
            Log.PrintDbg(1, 'e', 'Cant connect to host %s:%s' % (self.Param.Host, self.Param.Port))

        self.Client = mqtt.Client(userdata = self)
        try:
            self.Client.connect(self.Param.Host, self.Param.Port)
        except Exception as E:
            Msg = Log.PrintDbg(1, 'x', 'Host %s:%s' % (self.Param.Host, self.Param.Port), E.strerror)
            raise Exception(Msg)

        self.Client.subscribe(self.Param.Topic + '/sub')

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
        if (Class.Param.Public):
            Data = {'Alias': aAlias, 'Value': aValue, 'Time': time.strftime('%Y-%m-%d %H.%M.%S')}
            DataStr = json.dumps(Data)
            self.Client.publish(self.Param.Topic, DataStr)

    @staticmethod
    def on_message(aClient, aSelf, aMessage: mqtt.MQTTMessage):
        try:
            Data = json.loads(aMessage.payload)
            aSelf.OnMessage(Data)
        except Exception as E:
            Log.PrintDbg(1, 'x', aMessage.payload, E.strerror)

    def OnMessage(self, aData):
        Path = aData.get('Path', '')
        Method = 'path' + Path.replace('/', '_')
        Obj = UObj.GetAttr(self.ExternApi, Method, True)
        if (Obj):
            Param = aData.get('Param', {})
            Data = Obj(Param)
            for Key, Val in Data.items():
                self.Publish(Key, Val)
                time.sleep(0.1)
