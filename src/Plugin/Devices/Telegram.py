'''
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2018.04.07
License:     GNU, see LICENSE for more details
Description:
'''


from Inc.Param        import TDictParam
from Inc.Util         import Num
from Core.Device      import TControl
from Plugin.Providers.Telegram import TProviderTelegram

PkgConf = {
    "Version": "1.01",
    "Author": "Vladvons"
}

class TControlTelegram(TControl):
    def __init__(self, aParent):
        TControl.__init__(self, aParent)

        Pattern = {'Token': TDictParam.Required, 'Chats': TDictParam.Required, 'Refresh': 600, 'Diff': 0.05, 'Footer': ''}
        self.Param.AddDefPattern(Pattern)

    def DoParameter(self, aParam):
        self.Param.LoadPattern(aParam)

        #self.Provider = TProviderTelegram(self.Param.Token, self.Param.Chats)
        self.Telegram = TProviderTelegram(self.Param.Token, self.Param.Chats)

        self.UpdateDelay = Num.TUpdateDelay()
        self.UpdateDelay.Diff    = self.Param.Diff
        self.UpdateDelay.Refresh = self.Param.Refresh

    def _Set(self, aCaller, aValue):
        if (self.UpdateDelay.Check(aCaller.Alias, aValue)):
            self.UpdateDelay.Update(aCaller.Alias)

            Info = '{}->{}: {}\n{}'.format(aCaller.Descr, aCaller.Alias, aCaller.Value, self.Param.Footer)
            self.Telegram.Set(aCaller, Info)
