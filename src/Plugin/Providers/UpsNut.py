# -*- coding: utf-8 -*-

'''
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2019.01.03
License:     GNU, see LICENSE for more details

Description:
control NUT UPS voltage

Example:
Obj = TProviderUpsNut('MyUPS')
Data = Obj.Read(None)
print(Data.get('Voltage'))
'''

try:
    from nut2 import PyNUTClient
except Exception as E:
    print(__file__, E, 'pip install nut2')


from Inc.Log   import Log
from .Provider import TProvider


class TProviderUpsNut(TProvider):
    def __init__(self, aName):
        self.Name = aName.encode("utf8")

    def Read(self, aNotUsed = None):
        Client = PyNUTClient()
        #Client.help()
        #Client.list_ups()
        Data = Client.list_vars(self.Name)

        Result = {}
        Result['Voltage'] = float(Data['input.voltage'])
        Result['Status']  = Data['ups.status']
        Result['default'] = Result['Voltage']
        return Result

    def Get(self, aKey = 'default'):
        return self.GetKey(aKey)
