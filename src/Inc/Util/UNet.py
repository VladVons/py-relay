"""
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2016.08.21
License:     GNU, see LICENSE for more details
Description:
"""


import uuid
import sys
import socket
#
try: import urlparse
except: import urllib.parse as urlparse
#
try: from urllib2 import Request, urlopen
except: from urllib.request import Request, urlopen
#
try: from urllib import urlencode
except: from urllib.parse import urlencode
#
from Inc.Util import UFS


def SockReceive(aConn, aBufSize):
    Result = ''
    while True:
        Data = aConn.recv(aBufSize)
        if (Data):
            Result += Data
            if (len(Data) < aBufSize):
                break
        else:
            break
    return Result

def GetLocalIP():
    Socket = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
    try:
        # doesn't even have to be reachable
        Socket.connect(('10.255.255.255', 0))
        Result = Socket.getsockname()[0]
    # ToDo type
    except:
        Result = '127.0.0.1'
    finally:
        Socket.close()
    return Result

   
def GetMac(aSplit = True):
    Mac = hex(uuid.getnode())[2:]
    if (aSplit):
        Result = ':'.join(Mac[i : i+2] for i in range(0, 12, 2))
    else:
        Result = Mac
    return Result

def CheckInterface(aName = 'eth0'):
    Data = UFS.LoadFromFileToStr('/sys/class/net/%s/operstate' % aName)
    return ('up' in Data)

def GetHttpData(aUrl):
    if (sys.version_info[0] < 3):
        import urllib2
        Obj = urllib2
    else:
        import urllib.request
        Obj = urllib.request

    try:
        Result = Obj.urlopen(aUrl).read()
    except:
        Result = None
    return Result

def CheckHostPort(aHost, aPort, aTimeOut = 1):
    Sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    Sock.setsockopt(socket.SOL_SOCKET, socket.SO_REUSEADDR, 1)
    Sock.settimeout(aTimeOut)
    try:
        Result = (Sock.connect_ex((aHost, aPort)) == 0)
    except:
        Result = False
    Sock.close()
    return Result

def CheckInternet():
    return CheckHostPort('8.8.8.8', 53)

def UrlParse(aUrl):

    Result = urlparse.urlparse(aUrl)
    #print(Result.scheme, Result.netloc, Result.path)
    return Result

def PostRequest(aUrl, aData):
    '''
    import requests

    Data = requests.post(aUrl, data = aData)
    Result = Data.content.decode('utf8')
    return Result
    '''
    #Data    = urlencode(aData)
    #print(Data)

    request = Request(aUrl, aData)
    Result  = urlopen(request).read().decode()
    return Result
