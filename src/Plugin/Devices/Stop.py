"""
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2017.11.10
License:     GNU, see LICENSE for more details
Description:
"""

from Core.Device import TControl


class TControlStop(TControl):
    def DoParameter(self, aParam):
        pass

    # ToDo async 
    def Set(self, aCaller, aValue):
        self.Manager.Stop()
