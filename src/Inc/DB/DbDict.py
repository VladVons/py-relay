'''
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2017.11.01
License:     GNU, see LICENSE for more details
Description:
'''

import datetime
#
from Inc.Log import Log


class TDbSQL():
    def __init__(self):
        self.Conn   = None
        self.Cursor = None
        self.Debug  = False

    def __del__(self):
        self.Close()

    def Close(self):
        if (self.Cursor):
            self.Cursor.close()
            self.Cursor = None

        if (self.Conn):
            self.Conn.close()
            self.Conn = None

    def Exec(self, aSQL):
        if (self.Debug):
            print(aSQL.strip())

        if (self.Conn):
            try:
                self.Cursor = self.Conn.cursor()
                Result = self.Cursor.execute(aSQL.strip())
                self.Conn.commit()
            except Exception as E:
                #self.Conn.rollback()
                Log.PrintDbg(1, 'x', E)
                Result = None
        else:
            Msg = Log.PrintDbg(1, 'x', 'No DB connected')
            raise Exception(Msg)
        return Result

    def Now(self):
        return datetime.datetime.now().strftime('%Y-%m-%d %H:%M:%S')


class TDbDict(TDbSQL):
    def __init__(self):
        super().__init__()
        self.Prefix   = 1
        self.Dict     = 'Dict'

    def SetPrefix(self, aPrefix):
        self.Prefix = aPrefix

    def Add(self, aKey, aValue, aNow = None):
        if (not aNow):
            aNow = self.Now()

        SQL = "INSERT INTO %s (Item, Data, Prefix, Modified) \
               VALUES ('%s', '%s', %d, '%s')" % (self.Dict, aKey, aValue, self.Prefix, aNow)
        return self.Exec(SQL)

    def Set(self, aKey, aValue):
        #SQL = "INSERT OR REPLACE INTO Dict (Key, Value) VALUES('%s', '%s')" % (aKey, aValue)
        self.GetRecord(aKey, 'ID')
        Data = self.Cursor.fetchone()
        if (Data):
            ID  = Data[0]
            SQL = "UPDATE %s \
                   SET Data = '%s', Modified = CURRENT_TIMESTAMP \
                   WHERE ID = %s AND Prefix = %s" % (self.Dict, aValue, ID, self.Prefix)
            return self.Exec(SQL)
        else:
            return self.Add(aKey, aValue)

    def GetRecord(self, aKey: str, aFields = '*'):
        SQL = "SELECT %s \
               FROM   %s \
               WHERE  Item = '%s' AND Prefix = %d \
               ORDER  BY Modified DESC \
               LIMIT  1" % (aFields, self.Dict, aKey, self.Prefix)
        return self.Exec(SQL)

    def Get(self, aKey: str, aDef = None):
        self.GetRecord(aKey, 'Data')
        Data = self.Cursor.fetchone()
        if (Data):
            Result = Data[0]
        else:
            Result = aDef
        return Result

    def GetLast(self, aFields = '*'):
        SQL = "SELECT %s \
               FROM   %s \
               WHERE  Prefix = %d \
               ORDER  BY ID DESC \
               LIMIT  1" % (aFields, self.Dict, self.Prefix)
        self.Exec(SQL)
        return self.Cursor.fetchone()
