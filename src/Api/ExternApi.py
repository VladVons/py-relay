"""
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2019.11.28
License:     GNU, see LICENSE for more details
Description:
"""

from Api        import Misc
from Inc.Util   import UArr


class TExternApi():
    def __init__(self, aManager = None):
        self.Manager = aManager

    def _GetAnyClass(self):
        AnyFirstKey = next(iter(self.Manager.SecClass.Data))
        return self.Manager.SecClass.Data[AnyFirstKey]

    #---  Main
    def get_app_api(self, aNotUsed):
        Class = self._GetAnyClass()
        Result = UArr.ListFilter(dir(Class.Exec.apix), '^x')
        return Result

    def get_app_devices(self, aNotUsed):
        Base   = '/object/TDeviceParse/'
        Import = self.Manager.SecClass.Import
        Items  = Import.GetInherited(True)
        Result = []
        for Item in Items:
            Dict = Import.Data[Item]
            Inherit = Items[Item]
            if (Base in Inherit):
                Inherit = Inherit.replace(Base, '').replace('/' + Item, '')
                Result.append([Item, Dict['Path'], Dict['Module'], Inherit])
        return Result

    def get_class_keys(self, aNotUsed):
        Class = self._GetAnyClass()
        Result = UArr.Combine(Class.ExtParam.keys(), self.Manager.SecClass.Keys)
        return Result

    def get_app_profile(self, aNotUsed) -> dict:
        return {'Path': self.Manager.LoadConf.Dir}

    #---  Threaded
    def get_app_version(self, aNotUsed) -> dict:
        Result = Misc.Version()
        Result.update(self.Manager.Info('Total'))
        return Result

    def get_dev_value(self, aData):
        Alias = aData.get('alias')
        return self.Manager.SecClass.GetAliasVar([Alias], 'Value')

    def get_dev_values(self, aNotUsed):
        return self.Manager.SecClass.GetAliasVar([], 'Value')

    def get_dev_valuesf(self, aData):
        Alias = aData.get('alias')
        Aliases = self.Manager.SecClass.GetAliases()
        Aliases = UArr.ListFilter(Aliases, Alias)
        return self.Manager.SecClass.GetAliasVar(Aliases, 'Value')

    def get_app_classes(self, aNotUsed) -> list:
        Result = []
        for Item in self.Manager.SecClass.GetAliases():
            Class = self.Manager.SecClass.GetClass(Item)
            Result.append([Class.Alias, Class.__class__.__name__, Class.Descr])
        return Result

    def set_dev_value(self, aData: dict):
        Alias = aData.get('alias')
        Value = aData.get('value')
        Class = self.Manager.SecClass.GetClass(Alias)
        #Path  = Obj.GetClassPath(Class)
        #if ('TControl' in Path):
        return self.Manager.SecClass.SetAliasVar([Alias], 'Value', Value)
