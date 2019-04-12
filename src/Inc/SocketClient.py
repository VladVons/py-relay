"""
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2017.03.25
License:     GNU, see LICENSE for more details
Description:
"""

import time
import socket
import json
#
#from Inc.Log         import Log

class TSockClient():
    def __init__(self, aHost, aPort):
        self.Host  = aHost
        self.Port  = aPort
        self.MaxTries = 3
        self.BufSize  = 1024

    def _Read(self, aData, aTimeOut):
        raise NotImplementedError('%s->%s method not Implemented' % (self.__class__.__name__, 'Exec()'))

    def SendTry(self, aData, aTimeOut):
        DataIn = None
        Tries  = self.MaxTries
        while (Tries > 0):
            Tries -= 1
            DataIn = self._Read(aData, aTimeOut)
            if (DataIn is None):
                time.sleep(0.2)
            else:
                break
        return DataIn


class TSockClientUDP(TSockClient):
    def _Read(self, aData, aTimeOut):
        sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
        sock.settimeout(aTimeOut)
        sock.sendto(aData, (self.Host, self.Port))
        try:
            Data = sock.recvfrom(self.BufSize)
            Result = Data[0]
        except:
            Result = None
        finally:
            sock.close()
        return Result


class TSockClientTCP(TSockClient):
    def _Read(self, aData, aTimeOut):
        sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
        sock.settimeout(aTimeOut)
        try:
            sock.connect( (self.Host, self.Port) )
            sock.sendall(aData)
            Result = sock.recv(self.BufSize)
        except:
            Result = None
        finally:
            sock.close()
        return Result


class TSockClientJson():
    def SendTry(self, aData, aTimeOut):
        raise NotImplementedError('%s->%s method not Implemented' % (self.__class__.__name__, 'SendTry()'))

    def Send(self, aData, aTimeOut = 0.2):
        DataOut = json.dumps(aData)
        DataIn  = self.SendTry(DataOut, aTimeOut)
        if (DataIn):
            Result = json.loads(DataIn)
        else:
            Result = {}
        return Result


class TSockClientTCPJson(TSockClientTCP, TSockClientJson):
    pass


class TSockClientUDPJson(TSockClientUDP, TSockClientJson):
    pass
