"""
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2019.11.28
License:     GNU, see LICENSE for more details
Description:
"""

from Api        import Misc
from Inc.Util   import UArr, UStr


Urls = {
    '/get/app/api':     {'param': [],           'format': ['Api',            ['Api']]},
    '/get/app/version': {'param': [],           'format': ['Version',        ['Name', 'Value']]},
    '/get/app/devices': {'param': [],           'format': ['Devices',        ['TClass', 'Path', 'Module', 'Inherit']]},
    '/get/app/classes': {'param': [],           'format': ['Aliases',        ['Alias', 'Class', 'Descr']]},
    '/get/class/keys':  {'param': [],           'format': ['Keys',           ['Keys']]},
    '/get/dev/values':  {'param': [],           'format': ['Devices value',  ['Alias', 'Value']]},
    '/get/dev/valuesf': {'param': ['alias'],    'format': ['Devices value',  ['Alias', 'Value']]},
    '/get/dev/value':   {'param': ['alias'],    'format': ['Device value',   ['Alias', 'Value']]},
    '/set/dev/value':   {'param': ['alias','value'], 'format': ['Device value', ['Alias', 'Value']]},
    '/set/dev/auto':    {'param': ['alias'],    'format': ['Device auto',    ['Alias', 'Value']]}
}

class TExternApi():
    def __init__(self, aManager = None):
        self.Manager = aManager

    def _GetAnyClass(self):
        AnyFirstKey = next(iter(self.Manager.SecClass.Data))
        return self.Manager.SecClass.Data[AnyFirstKey]

    def SetDevVar(self, aData):
        Alias = aData.get('alias')
        Value = aData.get('value')
        Var   = aData.get('var')
        CurValue = self.Manager.SecClass.GetAliasVar([Alias], Var).get(Alias)
        if (CurValue is not None):
            Value = UStr.ConvertToType(Value, type(CurValue).__name__)
            self.Manager.SecClass.SetAliasVar([Alias], Var, Value)
        return Value

    def path_get_app_api(self, aNotUsed):
        Class = self._GetAnyClass()
        Result = UArr.ListFilter(dir(Class.Exec.apix), '^x')
        return Result

    def path_get_app_devices(self, aNotUsed):
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

    def path_get_class_keys(self, aNotUsed):
        Class = self._GetAnyClass()
        Result = UArr.Combine(Class.ExtParam.keys(), self.Manager.SecClass.Keys)
        return Result

    def path_get_app_profile(self, aNotUsed) -> dict:
        return {'Path': self.Manager.LoadConf.Dir}

    def path_get_app_version(self, aNotUsed) -> dict:
        Result = Misc.Version()
        Result.update(self.Manager.Info('Total'))
        return Result

    def path_get_dev_value(self, aData):
        Alias = aData.get('alias')
        return self.Manager.SecClass.GetAliasVar([Alias], 'Value')

    def path_get_dev_values(self, aData):
        Alias = aData.get('alias')
        return self.Manager.SecClass.GetAliasVar([Alias], 'Value')

    def path_get_dev_valuesf(self, aData):
        Result = {}

        Alias = aData.get('alias', '')
        Aliases = self.Manager.SecClass.GetAliases(Alias)
        if (Aliases):
            Result = self.Manager.SecClass.GetAliasVar(Aliases, 'Value')
        return Result

    def path_get_app_classes(self, aNotUsed) -> list:
        Result = []
        for Item in self.Manager.SecClass.GetAliases():
            Class = self.Manager.SecClass.GetClass(Item)
            Result.append([Class.Alias, Class.__class__.__name__, Class.Descr])
        return Result

    def path_set_dev_value(self, aData: dict):
        Result = None

        Alias = aData.get('alias')
        Value = int(aData.get('value'))
        Class = self.Manager.SecClass.GetClass(Alias)
        if (Class):
            #Path  = UObj.GetClassPath(Class)
            #if ('TControl' in Path):
            #    pass
            Class.SetValueForce(Value)
            Result = Class.Value
        return {Alias: Result}

    def path_set_dev_auto(self, aData: dict):
        aData['var']   = 'Protected'
        aData['value'] = '1'
        return self.SetDevVar(aData)
