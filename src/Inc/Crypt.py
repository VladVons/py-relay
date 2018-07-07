'''
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2018.04.19
License:     GNU, see LICENSE for more details
Description:

pip install pycrypto
'''

from Crypto.Cipher import AES
import base64


class TCrypt():
    def __init__(self):
        self.SetKey('123456789012345678901234')

    def SetKey(self, aValue):
        Just = aValue.rjust(24, 'x')
        self.Cipher = AES.new(Just, AES.MODE_ECB)

    def Encode(self, aValue):
        Ratio = int(len(aValue) / (16 + 1)) + 1
        Just = aValue.rjust(Ratio * 16)
        Data = self.Cipher.encrypt(Just)
        return base64.b64encode(Data)

    def Decode(self, aValue):
        Data = base64.b64decode(aValue)
        return self.Cipher.decrypt(Data).strip()
