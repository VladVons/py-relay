'''
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2017.10.22
License:     GNU, see LICENSE for more details

Description:
Make classes visible for this directory
'''


def Raspberry():
    from .DHT          import TSensorDHT_22
    from .PioOut       import TRelayPioOut

    from .I2C import (
        TSensorI2C_BH1750,
        TSensorI2C_BMP280,
        TRelayI2C_Relay_8574
    )

    from .File import (
        TSensorFile_CPUTemp,
        TSensorFile_W1DS
    )

    from .Monitor    import TControlMonitorLCD

    from .Modbus import (
        TControlModbus
    )


from .HTTP_MyIP    import TSensorHTTP_MyIP
from .SendMail     import TControlSendMail
from .Socket       import TSensorSocket_Echo, TSensorCheckHost, TSensorCheckInternet
from .Socket_ESP   import TSensorSocket_ESP_DHT
from .Stop         import TControlStop
from .Telegram     import TControlTelegram


from .ShellExec import (
    TSensorShellExec, 
    TSensorShellExec_CPULoad
)

from .Group import (
    TDeviceGroup, 
    TSensorGroupDiff
)

from .Timer import (
    TSensorTimeRangeCycle,
    TSensorTimeRangeDay,
    TSensorTimeRangeWeek,
    TSensorTimeRangeMonth,
    TSensorTimeRangeYear
)


from .Uptime import (
    TSensorUptimeApp,
    TSensorUptimeSys
)


from .Solar import (
    TSensorSun,
    TSensorMoon
)


from .DeviceHive import (
    TSensorDeviceHive_DHT22,
    TSensorDeviceHive_DS18B20,
    TRelayDeviceHive_PinOut,
    TProviderDeviceHivePinThread_DHT22,
    TSensorDeviceHiveMHZ19
)


from .Random import (
    TSensorRandom,
    TSensorRandomEx
)


from .WriteLog import (
    TControlWriteLog,
    TControlWriteConsole,
    TControlWriteFile
)

from .Grafana import (
    TControlGrafana, 
    TSensorGrafana
)

from .SensorProvider import TSensorProvider
from .Sleep      import TControlSleep
from .Loop       import TControlLoop


#Raspberry()
