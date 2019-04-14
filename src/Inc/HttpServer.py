"""
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2018.03.02
License:     GNU, see LICENSE for more details
Description:
"""


import socket
import mimetypes
import time
#
from Inc.Log    import Log
from Inc.Util   import Net
from Inc.Util   import FS

from Inc.Thread import CreateThread


class TConnSession():
    def __init__(self, aParent):
        self.Parent   = aParent
        self.BuffSize = 4096
        self.Data     = []
        self.Conn     = None

    def DoReceive(self):
        Msg = Log.PrintDbg(1, 'e', 'Not implemented')
        raise NotImplementedError(Msg)

    def Receive(self):
        Result = Net.SockReceive(self.Conn, self.BuffSize)
        return Result

    def Send(self, aData):
        return self.Conn.sendall(aData)

    def Handle(self, aConn):
        Log.PrintDbg(3, 'i', 'Start session')
        self.Conn = aConn
        try:
            self.Data = []
            Data = self.Receive()
            if (Data):
                Data = self.DoReceive(Data)
                self.Send(Data)
        except socket.timeout:
            self.Parent.DoTimeout()
        except Exception as E:
            Msg = Log.PrintDbg(1, 'x', '%s' % (E.message))
            self.Send(Msg)


class TConnSessionHttp(TConnSession):
    def __init__(self, aParent):
        TConnSession.__init__(self, aParent)
        self.RootDir  = 'Plugin/Web'

    def DoReceive(self, aData):
        Header  = self.GetHeader(aData)
        Path    = Header.get('Path')
        Command = Header.get('Command')
        if (Command == 'GET'):
            self.DoGet(Path)
        elif (Command == 'POST'):
            self.DoPost(Path, Header.get('Data'))
        elif (Command == 'HEAD'):
            self.DoHead(Path)
        else:
            #aData = "HTTP/1.1 404 Not Found\r\n"
            pass
        return self.GetData()

    def GetData(self):
        return '\r\n'.join(self.Data)

    def AddData(self, aData):
        self.Data.append(aData)

    def AddHead(self, aCode):
        self.AddData(self._Headers(aCode))

    def AddMime(self, aUrl, aDef = 'text/html'):
        MimeType = mimetypes.guess_type(aUrl)[0]
        if (not MimeType):
            MimeType = aDef
        self.AddData('Content-Type: ' + MimeType)

    def _Headers(self,  aCode):
        Codes = {
                200: 'OK',
                400: 'Bad Request',
                404: 'Not Found'
        }
        return 'HTTP/1.1 %d %s' % (aCode, Codes.get(aCode))

    def GetHeader(self, aData):
        Result = {}

        Lines = bytes.decode(aData).split('\r\n')
        Cnt   = len(Lines)
        if (Cnt > 0):
            Head = Lines[0].split(' ')
            Result['Command'] = Head[0]
            Result['Path']    = Head[1]
            for i in range(1, Cnt):
                Pair = Lines[i].split(':', 1)
                if (len(Pair) == 1):
                    Result['Data'] = Pair[0]
                elif (len(Pair) == 2):
                    Result[Pair[0]] = Pair[1]
        return Result

    def Head(self, aCode, aMime = '*.html'):
        self.AddHead(aCode)
        self.AddMime(aMime)
        self.AddData('Date: %s' % time.strftime("%a, %d %b %Y %H:%M:%S", time.localtime()))
        self.AddData('Server: Simple-Python-HTTP-Server')
        # self.AddData('Connection: close')
        self.AddData('')

    def GetFilePath(self, aPath):
        if (not FS.FileExists(aPath)):
            aPath = self.RootDir + aPath
            if (not FS.FileExists(aPath)):
                aPath = None
        return aPath

    def DoGet(self, aUrl):
        pass

    def DoPost(self, aUrl, aContent):
        pass

    def DoHead(self, aUrl):
        pass


class TSockServer():
    def __init__(self, aPort = 80):
        self.Port = aPort
        self.Bind = ''
        self.Timeout = None

    def DoAccept(self, aConn, aAddr):
        Msg = Log.PrintDbg(1, 'e', 'Not implemented')
        raise NotImplementedError(Msg)

    #def _ConnThread(self, aConn, aAddress):
    #    ConnSession = TConnSession(self, aConn, aAddress)
    #    ConnSession.Run()

    def Run(self):
        Log.PrintDbg(1, 'i', 'Connection on %s:%s' % (self.Bind, str(self.Port)))

        Sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
        Sock.setsockopt(socket.SOL_SOCKET, socket.SO_REUSEADDR, 1)
        Sock.settimeout(self.Timeout)
        Sock.bind((self.Bind, self.Port))
        Sock.listen(5)
        try:
            self.IsRun = True
            while (self.IsRun):
                Conn = None
                try:
                    Conn, Addr  = Sock.accept()
                    Conn.settimeout(self.Timeout)

                    #CreateThread(self._ConnThread, [Conn, Addr])

                    self.DoAccept(Conn, Addr)
                except socket.timeout:
                    self.DoTimeout()
                except Exception as E:
                    Log.PrintDbg(1, 'x', E)
                finally:
                    if (Conn):
                        Conn.close()
        finally:
            Sock.close()
            Log.PrintDbg(1, 'i', 'Finish')

    def DoTimeout(self):
        pass
