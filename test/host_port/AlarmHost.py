#!/usr/bin/env python3

import socket
import time

class TAlarmHost():
    def __init__(self, aHost, aPort):
        self.Host = aHost
        self.Port = aPort

    def Send(self, aData):
        print('Send()', self.Host, self.Port, aData)

        Sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
        Sock.connect((self.Host, self.Port))
        Sock.sendall(aData)
        Data = Sock.recv(128)
        Sock.close()
        return Data

    def SendPacket(self, aIMEI, aEvent, aLatitude, aLongitude, aAkuLevel, aGsmLevel):
        Event  = {'alarm': 100, 'aku': 302, 'test': 602}.get(aEvent, 0) 
        Packet = ('$%s&%d&%2.5f&%2.5f&%02d&%02d#' % (aIMEI, Event, aLatitude, aLongitude, aAkuLevel, aGsmLevel)).encode()
        return self.Send(Packet)


#AHost = TAlarmPort('78.136.192.206', 8899)
AHost = TAlarmHost('osguard.ddns.net', 8899)
Data = AHost.SendPacket('123456789012345', 'test', 12.12345, 13.456, 88, 9)
print('Result', Data)
