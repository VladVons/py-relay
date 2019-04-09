'''
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2017.11.09
License:     GNU, see LICENSE for more details

Description:
For reading slow devices

https://docs.python.org/3/library/multiprocessing.html#sharing-state-between-processes
https://www.programcreek.com/python/example/17493/multiprocessing.Pipe
#
http://toly.github.io/blog/2014/02/13/parallelism-in-one-line/
'''

import time
import multiprocessing

#import os
#os.path.dirname(multiprocessing.__file__)


def CreateThread(aTarget, aArgs):
    Process = multiprocessing.Process(target = aTarget, args = aArgs)
    Process.daemon = True
    Process.start()
    time.sleep(0.3)


class TThreadRead():
    def __init__(self, aObjRead):
        self.ObjRead  = aObjRead
        self.Periodic = 1

    def Create(self):
        process = multiprocessing.Process(target = self._Run, args = [])
        process.daemon = True
        process.start()

    # Thread 
    def _Run(self):
        while True:
            if (self.ObjRead):
                Data = self.ObjRead()
                # print('---_Run()', Data)
                self._SetData(Data)
            time.sleep(self.Periodic)

    def _SetData(self, aData):
        pass


class TThreadReadPipe(TThreadRead):
    def __init__(self, aObjRead):
        TThreadRead.__init__(self, aObjRead)
        self.PipeParent, self.PipeChild = multiprocessing.Pipe()

    # Method called from outside a thread
    def GetData(self):
        return self.PipeParent.recv()

    def _SetData(self, aData):
        self.PipeChild.send(aData)


class TThreadReadQueue(TThreadRead):
    def __init__(self, aObjRead):
        TThreadRead.__init__(self, aObjRead)
        self.Queue  = multiprocessing.Queue()
        self.MinQueue = 1
        self.MaxQueue = 4
        self.LastData = None

    # Method called from outside a thread
    def GetData(self):
        QueueSize = self.Queue.qsize()
        if (QueueSize >= self.MinQueue):
            #print('--1', QueueSize)
            Result = self.Queue.get(block = False)
            self.LastData = Result
        else:
            Result = self.LastData
        return Result

    def _SetData(self, aData):
        if (self.Queue.qsize() < self.MaxQueue):
            self.Queue.put(aData)


class TThreadReadList(TThreadRead):
    def __init__(self, aObjRead):
        TThreadRead.__init__(self, aObjRead)
        self.Data = multiprocessing.Manager().list([0, 1])
        self.Data[0] = None

    # Method called from outside a thread
    def GetData(self):
        #print('---get', self.Data[0], self.Data[1])
        return self.Data[0]

    def _SetData(self, aData):
        self.Data[0] = aData
        #self.Data[1] = datetime.datetime.now().strftime('%Y-%m-%d %H:%M:%S'),
        #print('---------set', self.Data[0], self.Data[1])
