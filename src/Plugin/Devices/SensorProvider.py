'''
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2018.03.02
License:     GNU, see LICENSE for more details
Description:
'''

from Inc.Param        import TDictParam
from Core.Device      import TSensor


class TSensorProvider(TSensor):
    def __init__(self, aParent):
        TSensor.__init__(self, aParent)

        Pattern = {'ClassRef': TDictParam.Required, 'Tag': TDictParam.Required, 'Avg': 3, 'Round': 0.25}
        self.Param.AddDefPattern(Pattern)

    def DoParameter(self, aParam):
        self.Param.LoadPattern(aParam)

        self.Avg.SetSize(self.Param.Avg)

        self.Key = self.Param.Tag
        self.Provider = self.Manager.SecClass.GetClass(self.Param.ClassRef)
