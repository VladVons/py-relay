'''.
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2018.03.20
License:     GNU, see LICENSE for more details
Description:
'''

import re
#
from Inc.Log  import Log
from Inc.Util import Obj
from Inc.Exec import TExec, TExecResult


class TExecParse(TExec):
    def __init__(self, aParent):
        TExec.__init__(self, aParent)
        self.Keys = {}
        self.Cond = ['If', 'Then', 'Else', 'Always']

    def GetKey(self, aKey):
        return self.Keys.get(aKey, {})

    def ExtractAlias(self, aData):
        Allow = self.Cond + ['Enable', 'Label']
        Diff = set(aData.keys()) - set(Allow)
        if (Diff):
            Msg = Log.Print(1, 'e', self.__class__.__name__, 'ExtractAlias()', 'Unknown key %s in %s' % (str(Diff), Obj.GetTreeAsStr(aData)))
            raise Exception(Msg)

        Result = []
        if (aData.get('Enable', True)):
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

    def Parse(self, aKey, aParam, aData):
        for Item in aParam:
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

    def Conditions(self, aKey):
        Result = True
        Items = self.Keys.get(aKey)
        if (Items):
            self.BreakLabel = None
            for Item in Items:
                if (self.BreakLabel):
                    if (self.BreakLabel == 'EXIT'):
                        return Result
                    if (self.BreakLabel != Item.get('Label')):
                        continue

                if (self.ExecSection(Item)):
                    if (self.CurResult.If is not None):
                        Result &= bool(self.CurResult.If)

            if (self.BreakLabel):
                Msg = Log.Print(1, 'e', self.__class__.__name__, 'Conditions()', 'Unknown Label %s in %s' % (self.BreakLabel, self.Parent.Alias))
                raise Exception(Msg)
        return Result