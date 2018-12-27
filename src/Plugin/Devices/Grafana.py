'''
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2018.02.25
License:     GNU, see LICENSE for more details

SELECT
  UNIX_TIMESTAMP(Modified) as time_sec,
  CAST(Data as DECIMAL(10,2)) as value,
  "BathRoom" as metric
FROM 
  Dict
WHERE 
  $__timeFilter(Modified) and (Prefix = 1) and (Item = 'DH4_Sensor_Humid')
ORDER BY 
  Modified ASC

#select count(*) from Dict
#delete from Dict
#delete from Dict where Item like '%DH3_Sensor_Temper%' and CAST(Data as DECIMAL(10,2)) < 16
#select * from Dict where Item like '%Humid%'  ORDER BY Modified DESC LIMIT 50
#select * from Dict where Created <> Modified ORDER BY Modified LIMIT 50
'''

import datetime
#
from Inc.Log      import Log
from Inc.DB       import TDbDictMySQL, TDeliveryArr, TDeliverySQLite
from Inc.Param    import TDictParam
from Inc.Util     import Net, Num

from Core.Device import TControl, TSensor


MySQL_Port = 3306

class TControlGrafana(TControl):
    def __init__(self, aParent):
        TControl.__init__(self, aParent)

        Pattern = {
            'Host': TDictParam.Required, 'User': TDictParam.Required, 'Password': TDictParam.Required, 'DB': TDictParam.Required, 'Table': TDictParam.Required, 'Prefix': 1,
            'Refresh': 60*3, 'Diff': 0.025
        }
        self.Param.AddDefPattern(Pattern)

    def DoParameter(self, aParam):
        self.Param.LoadPattern(aParam)

        if (not Net.CheckHostPort(self.Param.Host, MySQL_Port)):
            Msg = Log.Print(1, 'e', self.__class__.__name__, 'DoParameter()', 'Cant connect to host %s:%s' % (self.Param.Host, MySQL_Port))
            #raise Exception(Msg)

        self.MySQL = TDbDictMySQL()
        self.MySQL.SetSource(self.Param.Host, self.Param.User, self.Param.Password, self.Param.DB, self.Param.Table)
        self.MySQL.SetPrefix(self.Param.Prefix)

        self.UpdateDelay = Num.TUpdateDelay()
        self.UpdateDelay.Diff    = self.Param.Diff
        self.UpdateDelay.Refresh = self.Param.Refresh

        self.Delivery = TDeliveryArr()
        #self.Delivery = TDeliverySQLite()
        #self.Delivery.Connect(self.Manager.LoadConf.Dir + 'Delivery.db')
        self.Delivery.Sender = self.Send


    def _Set(self, aCaller, aValue):
        CAlias = aCaller.Alias
        Info = 'Caller {:15} Descr {:15} Alias {:15} Value {:6}'.format(self.Alias, aCaller.Descr, CAlias, aCaller.Value)
        #print(Info)

        try:
            Value = float(aCaller.Value)
        except Exception as E:
            Value = 0
            Log.Print(1, 'e', self.__class__.__name__, '_Set()', E)

        if (self.UpdateDelay.Check(CAlias, Value)):
            self.UpdateDelay.Update(CAlias)
            #Value = self.UpdateDelay.Get(CAlias)
            self.Delivery.Send([CAlias, Value, self.MySQL.Now()])

    def Send(self, aData):
        Result = False
        if (Net.CheckHostPort(self.Param.Host, MySQL_Port )):
            try:
                self.MySQL.Connect()

                #Key, Value, Now = aData
                #self.MySQL.Add(Key, Value, Now)
                self.MySQL.Add(*aData)

                Result = True
            except Exception as E:
                Log.Print(1, 'e', self.__class__.__name__, 'Send()', E)
            finally:
                self.MySQL.Close()
        return Result


class TSensorGrafana(TSensor):
    def __init__(self, aParent):
        TSensor.__init__(self, aParent)

        Pattern = {'Host': TDictParam.Required, 'User': TDictParam.Required, 'Password': TDictParam.Required, 'DB': TDictParam.Required, 'Table': TDictParam.Required, 'Prefix': 1}
        self.Param.AddDefPattern(Pattern)

    def DoParameter(self, aParam):
        self.Param.LoadPattern(aParam)

        if (not Net.CheckHostPort(self.Param.Host, MySQL_Port)):
            Msg = Log.Print(1, 'e', self.__class__.__name__, 'DoParameter()', 'Cant connect to host %s:%s' % (self.Param.Host, MySQL_Port))
            #raise Exception(Msg)

        self.MySQL = TDbDictMySQL()
        self.MySQL.SetSource(self.Param.Host, self.Param.User, self.Param.Password, self.Param.DB, self.Param.Table)
        self.MySQL.SetPrefix(self.Param.Prefix)

    def _Get(self):
        Result = -1
        if (Net.CheckHostPort(self.Param.Host, MySQL_Port)):
            try:
                self.MySQL.Connect()
                Data = self.MySQL.GetLast('Modified')
            except Exception as E:
                Log.Print(1, 'e', self.__class__.__name__, '_Get()', E)
                Data = None
            finally:
                self.MySQL.Close()

            if (Data):
                Result = int((datetime.datetime.now() - Data[0]).total_seconds())
            #Log.Print(1, 'i', self.__class__.__name__, '_Get()', 'Diff: %s, LastUpdate: %s' % (Diff, self.Param.LastUpdate))
        return Result
