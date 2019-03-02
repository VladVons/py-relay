'''
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2018.04.06
License:     GNU, see LICENSE for more details
Description:

Help:
https://www.codementor.io/garethdwyer/building-a-telegram-bot-using-python-part-1-goi5fncay
https://legacy.gitbook.com/book/groosha/telegram-bot-lessons/details
'''

import json 
import datetime
#
from Inc.Util import Net

class TTelegram():
    def __init__(self, aToken):
        self.Url = None
        self.SetToken(aToken)

    def SetToken(self, aValue):
        self.Url = 'https://api.telegram.org/bot%s/' % (aValue)

    def PostUrl(self, aUrl, aData):
        #import requests # huge dependencies
        #Data = requests.post(aUrl, data = aData)
        #return Data.content.decode('utf8')

        Data = Net.urlopen(aUrl, Net.urlencode(aData), timeout = 1)
        return Data

    def GetData(self, aUrl, aParam):
        Data = self.PostUrl(aUrl, aParam)
        return json.loads(Data)

    def GetUpdates(self, aOffset = None, aTimeout = 100):
        Url   = self.Url + 'getUpdates'
        Param = {'offset': aOffset, 'timeout': aTimeout}
        return self.GetData(Url, Param)

    def GetLastUpdate(self, aUpdates, aIdx = 1):
        Updates = aUpdates['result']
        Len = len(aUpdates)
        if (Len > 0):
            aIdx   = min(Len, aIdx)
            Result = Updates[-aIdx]
        return Result

    def ParseUpdate(self, aUpdate):
        Message = aUpdate['message']
        ChatId = Message['chat'].get('id')
        FName  = Message['chat'].get('first_name')
        LName  = Message['chat'].get('last_name')
        Text   = Message.get('text')
        Date   = datetime.datetime.fromtimestamp(Message.get('date'))
        return {'Date': Date, 'ChatId': ChatId, 'FName': FName, 'LName': LName, 'Text': Text}

    def ParseUpdates(self, aUpdates):
        Result = []
        for Update in aUpdates['result']:
            Data = self.ParseUpdate(Update)
            Result.append(Data)
        return Result

    def SendMessage(self, aChatId, aText):
        Url   = self.Url + 'sendMessage'
        Param = {'text': aText, 'chat_id': aChatId}
        return self.PostUrl(Url, Param)

#---

from .Provider import TProvider

class TProviderTelegram(TProvider):
    def __init__(self, aToken, aChatIds):
        self.Telegram = TTelegram(aToken)
        self.ChatIds  = aChatIds

    def Write(self, aValue):
        for ChatId in self.ChatIds:
            self.Telegram.SendMessage(ChatId, aValue)

    def Set(self, aCaller, aValue):
        return self.WriteTry(aValue)
