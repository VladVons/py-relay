'''
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2017.11.01
License:     GNU, see LICENSE for more details

Install:
    apt-get install python-mysqldb
    https://www.jeremymorgan.com/tutorials/python-tutorials/how-to-connect-to-mysql-with-python/
    https://www.tutorialspoint.com/python/python_database_access.htm

Description:
'''

try:
    import MySQLdb
except:
    print("Error: import MySQLdb", "apt-get install python-mysqldb")

from Inc.DB.DbDict  import TDbDict
from Inc.Log import Log


class TDbDictMySQL(TDbDict):
    def SetSource(self, aHost, aUser, aPassw, aDB, aTable):
        self.Dict  = aTable
        #
        self.Host  = aHost
        self.User  = aUser
        self.Passw = aPassw 
        self.DB    = aDB

    def Connect(self):
        self.Conn = MySQLdb.connect(self.Host, self.User, self.Passw, self.DB)
        #self.Cursor = self.Conn.cursor()

    def CreateTable(self):
        SQL = '''
            CREATE TABLE IF NOT EXISTS %s (
                ID       INTEGER UNSIGNED AUTO_INCREMENT,
                Created  TIMESTAMP DEFAULT CURRENT_TIMESTAMP,
                Modified TIMESTAMP,
                Prefix   INTEGER UNSIGNED,
                Item     VARCHAR(32),
                Data     TEXT,
                PRIMARY  KEY (ID)
            )
            ''' % (self.Dict)
        self.Exec(SQL)
