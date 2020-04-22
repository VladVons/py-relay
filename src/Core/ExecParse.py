"""
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2018.03.20
License:     GNU, see LICENSE for more details
Description:
"""

import re
#
from Inc.Log  import Log
from Inc.Util import UObj
from Inc.Exec import TExec, TExecResult


class TExecParse(TExec):
    def __init__(self, aParent):
        super().__init__(aParent)
        self.Keys = {}
        self.Cond = ['If', 'Then', 'Else', 'Always']

    def GetKey(self, aKey: str) -> dict:
        return self.Keys.get(aKey, {})

    def ExtractAlias(self, aData: dict) -> list:
        Allow = self.Cond + ['Enable', 'Label', 'ClassRef']
        Diff = set(aData.keys()) - set(Allow)
        if (Diff):
            Msg = Log.PrintDbg(1, 'e', 'Unknown key %s in %s' % (str(Diff), UObj.GetTreeAsStr(aData)))
            raise Exception(Msg)

        Result = []
        if (aData.get('Enable', True)):
            if (aData.get('ClassRef')):
                Result.append(aData.get('ClassRef'))
                del aData['ClassRef']
            else:
                Prefix  = "'"
                Sufix   = "'"
                Pattern = Prefix + "(.*?)" + Sufix
                for Key in self.Cond:
                    Data = aData.get(Key)
                    if (Data):
                        Matches = re.findall(Pattern, Data)
                        if (Matches):
                            for Match in Matches:
                                if (Match.startswith('$')):
                                    Result.append(Match[1:])
        return Result

    def Parse(self, aKey: str, aParam: list, aData: dict):
        for Item in aParam:
            if (not Item.get('Enable', True)):
                continue

            Aliases = self.ExtractAlias(Item)
            if (Aliases):
                Item['Alias'] = Aliases
                for Alias in Aliases:
                    Link = {'ClassRef': Alias}
                    self.Parent._LoadClass(Link, aData)

            if (not aKey in self.Keys):
                self.Keys[aKey] = []

            Item['Result'] = TExecResult()
            self.Keys[aKey].append(Item)

    def Conditions(self, aKey: str) -> bool:
        Result = True
        Items  = self.Keys.get(aKey)
        if (Items):
            self.BreakLabel = None
            for Idx, Item in enumerate(Items):
                if (self.BreakLabel):
                    if (self.BreakLabel == 'EXIT'):
                        return Result
                    if (self.BreakLabel != Item.get('Label')):
                        continue

                if (self.ExecSection(Item)):
                    if (self.CurResult.If is not None):
                        Result &= bool(self.CurResult.If)

            if (self.BreakLabel):
                Msg = Log.PrintDbg(1, 'e', 'Unknown label or last item with Break %s in %s' % (self.BreakLabel, self.Parent.Alias))
                raise Exception(Msg)
        return Result
