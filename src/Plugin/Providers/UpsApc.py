'''
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2018.10.28
License:     GNU, see LICENSE for more details

Description:
control APC UPS voltage
'''

try:
    from apcaccess import status
except Exception as E:
    print(__file__, E, 'pip install apcaccess')


from Inc.Log   import Log
from Inc.Util  import Str
from .Provider import TProvider


class TProviderUpsApc(TProvider):
    def __init__(self, aHost = 'localhost', aPort = 3551):
        self.Host = aHost
        self.Port = aPort

        # raise exception if error
        self.Get()

    def Read(self, aNotUsed):
        RowData = status.get(host = self.Host, port = self.Port)
        Data = status.parse(RowData, strip_units = True)
        Result = {}
        Result['Voltage'] = Str.ToFloat(Data['LINEV'])
        Result['Status']  = Data['STATUS']
        Result['default'] = Result['Voltage']
        return Result

    def Get(self, aKey = 'default'):
        return self.GetKey(aKey)
