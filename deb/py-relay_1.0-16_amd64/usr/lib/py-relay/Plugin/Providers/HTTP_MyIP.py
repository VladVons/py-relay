'''
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2017.11.09
License:     GNU, see LICENSE for more details

Description:

Example:
'''

from .Provider import TProviderHTTP


class TProviderHTTP_MyIP(TProviderHTTP):
    def __init__(self):
        self.Url = 'http://v4.ipv6-test.com/api/myip.php'

    def Get(self):
        Result = self.ReadTry(self.Url)
        return Result
