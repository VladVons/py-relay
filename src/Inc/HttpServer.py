'''
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2018.03.02
License:     GNU, see LICENSE for more details
Description:
'''


import socket
import mimetypes
#
from Inc.Log import Log


class THTTPServer(): 
    def __init__(self, aPort = 80):
        self.Port = aPort
        self.Bind = ''
        self.Buff = 4096
        self.Timeout = None
        self.Data    = []

    def __del__(self):
        self.Close()

    def Close(self):
        pass

    def Run(self):
        Log.Print(1, 'i', self.__class__.__name__, 'Run()', 'Listening %s:%s' % (self.Bind, str(self.Port)))

        Sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
        Sock.setsockopt(socket.SOL_SOCKET, socket.SO_REUSEADDR, 1)
        Sock.settimeout(self.Timeout)
        Sock.bind((self.Bind, self.Port))
        Sock.listen(5)
        try:
            self.IsRun = True
            while (self.IsRun):
                try:
                    Conn, Addr  = Sock.accept()
                    Conn.settimeout(self.Timeout)
                    DataIn = Conn.recv(self.Buff)
                    if (DataIn):
                        self.Data = []

                        Header  = self.GetHeader(DataIn)
                        Path    = Header.get('Path')
                        Command = Header.get('Command')
                        if (Command == 'GET'):
                            self.DoGet(Path)
                        elif (Command == 'POST'):
                            self.DoPost(Path, Header.get('Data'))
                        elif (Command == 'HEAD'):
                            self.DoHead(Path)
                        else:
                            pass
                        Conn.sendall(self.GetData())
                        #Conn.sendall("HTTP/1.1 404 Not Found\r\n")
                    Conn.close()
                except socket.timeout:
                    self.DoTimeout()
        finally:
            Sock.close()

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
                200:'OK', 
                400:'Bad Request',
                404:'Not Found'
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

    def DoTimeout(self):
        pass

    def DoGet(self, aUrl):
        pass

    def DoPost(self, aUrl, aContent):
        pass

    def DoHead(self, aUrl):
        pass
