'''
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2017.11.01
License:     GNU, see LICENSE for more details
Description:
'''

import os
import sqlite3
#
from Inc.DB.DbDict  import TDbDict


class TDbDictSQLite(TDbDict):
    def SetSource(self, aFile: str):
        self.File = aFile

    def Connect(self):
        self.Conn = sqlite3.connect(self.File)
        return os.path.exists(self.File)

    def CreateTable(self):
        SQL = '''
            CREATE TABLE IF NOT EXISTS %s (
                ID       INTEGER PRIMARY KEY AUTOINCREMENT,
                Created  TIMESTAMP DEFAULT CURRENT_TIMESTAMP,
                Modified TIMESTAMP,
                Prefix   INTEGER,
                Item     VARCHAR(32),
                Data     TEXT)
            ''' % (self.Dict)
        self.Exec(SQL)
