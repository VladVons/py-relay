'''
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2019.01.03
License:     GNU, see LICENSE for more details

Description:
control NUT UPS voltage
'''

try:
    from nut2 import PyNUTClient
except Exception as E:
    print(__file__, E, 'pip install nut2')


from Inc.Log   import Log
from .Provider import TProvider


class TProviderUpsNut(TProvider):
    def __init__(self, aName = 'MyUPS'):
        self.Name = aName

    def Read(self, aNotUsed):
        Client = PyNUTClient()
        #Client.help()
        #Client.list_ups()
        Data = Client.list_vars(self.Name)

        Result = {}
        Result['Voltage'] = Data['LINEV']
        Result['Status']  = Data['STATUS']
        Result['default'] = Result['Voltage']
        return Result

    def Get(self, aKey = 'default'):
        return self.GetKey(aKey)
