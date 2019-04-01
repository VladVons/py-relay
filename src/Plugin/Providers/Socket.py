'''
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2017.11.09
License:     GNU, see LICENSE for more details

Description:

Example:
'''

import socket
#
from Inc.Log   import Log
from Inc.Util  import Net
from .Provider import TProvider


class TProviderSocket(TProvider):
    def __init__(self, aHost, aPort):
        self.Host    = aHost
        self.Port    = aPort
        self.BufSize = 4096
        self.TimeOut = -1

    def Read(self, aData):
        Result = None

        Sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
        Sock.settimeout(self.TimeOut)
        Addr = (self.Host, self.Port)
        try:
            Sock.connect(Addr)
            Sock.sendall(aData)
            Result = Net.SockReceive(Sock, self.BufSize)
        except Exception as E:
            Log.PrintDbg(1, 'x', 'Socket error', E, Addr)
        finally:
            Sock.close()
        return Result


class TProviderSocket_Echo(TProviderSocket):
    def __init__(self, aHost, aPort, aData):
        TProviderSocket.__init__(self, aHost, aPort)
        self.Data = aData

    def Get(self):
        Result = self.ReadTry(self.Data)
        return Result


class TProviderCheckHost(TProvider):
    def __init__(self, aHost, aPort):
        self.Host = aHost
        self.Port = aPort

    def Read(self, aNotUsed):
        Result = Net.CheckHostPort(self.Host, self.Port)
        return int(Result)

    def Get(self):
        return self.ReadTry()


class TProviderCheckInternet(TProviderCheckHost):
    def __init__(self):
        TProviderCheckHost.__init__(self, '8.8.8.8', 53)
