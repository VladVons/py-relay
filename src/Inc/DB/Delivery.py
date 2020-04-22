'''
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2018.02.25
License:     GNU, see LICENSE for more details

Description:
Writes data to abstract sender.
if sender returns false than Delivery collects unsent data to a buffer and tryies to send later
'''


import json
import sqlite3
#
from Inc.Log import Log
from Inc.DB  import TDbSQL


class TDelivery():
    def __init__(self):
        self.Sender  = None
        self.MaxPkg  = 25
        self.MaxFail = 100000

    def GetSize(self):
        pass

    def PushItem(self, aData):
        pass

    def PopItem(self):
        pass

    def AddFail(self, aData):
        Size = self.GetSize()
        if (Size < self.MaxFail):
            self.PushItem(aData)
            if (Size % 100 == 0):
                Log.PrintDbg(1, 'i', 'Records %d' % Size)
        else:
            Log.PrintDbg(1, 'w', 'Max records reached %d' % self.MaxFail)

    def _Send(self, aData):
        if (self.Sender):
            return self.Sender(aData)
        else:
            Msg = Log.PrintDbg(1, 'e', 'Empty sender')
            raise NotImplementedError(Msg)

    def Send(self, aData):
        if (self._Send(aData)):
            Size = self.GetSize()
            if (Size > 0):
                Cnt = 0
                for i in range(min(Size, self.MaxPkg)):
                    Data = self.PopItem()
                    if (not self._Send(Data)):
                        self.PushItem(Data)

                        Cnt += 1
                        if (Cnt > 5):
                            break
        else:
            self.AddFail(aData)


class TDeliveryArr(TDelivery):
    def __init__(self):
        super().__init__()
        self.Fail = []

    def GetSize(self):
        return len(self.Fail)

    def PushItem(self, aData):
        self.Fail.append(aData)

    def PopItem(self):
        return self.Fail.pop()


class TDeliverySQLite(TDelivery):
    def __init__(self):
        super().__init__()

        self.MaxFail = 1000000
        self.SQL   = TDbSQL()
        self.Table = 'Delivery'

    def SetErr(self, aID, aValue):
        SQL = "UPDATE %s \
               SET Err = %s \
               WHERE ID = %s" % (self.Table, aValue, aID)
        return self.SQL.Exec(SQL)

    def GetSize(self):
        Result = 0
        SQL = "SELECT COUNT(*) \
               FROM %s \
               WHERE Err = %s" % (self.Table, 1)
        Obj = self.SQL.Exec(SQL)
        if (Obj):
            Result = Obj.fetchone()[0]
        return Result

    def PushItem(self, aData):
        Data = json.dumps(aData)
        SQL = "INSERT INTO %s (Err, Data) \
               VALUES (%s, '%s')" % (self.Table, 1, Data)
        return self.SQL.Exec(SQL)

    def PopItem(self):
        SQL = "SELECT ID, Data \
               FROM %s \
               WHERE Err = %s \
               ORDER BY ID \
               LIMIT 1"  % (self.Table, 1)
        Obj  = self.SQL.Exec(SQL).fetchone()
        if (Obj):
            ID     = Obj[0]
            Result = json.loads(Obj[1])
            self.SetErr(ID, 0)
        else:
            Result = None
        return Result

    def Connect(self, aFile):
        self.SQL.Conn = sqlite3.connect(aFile)

        SQL = '''
            CREATE TABLE IF NOT EXISTS %s (
                ID       INTEGER PRIMARY KEY AUTOINCREMENT,
                Err      INTEGER,
                Data     TEXT)
            ''' % (self.Table)
        self.SQL.Exec(SQL)
