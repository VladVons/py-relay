from Core.Device          import TControl


class TRelay(TControl):
    def __init__(self, aParent):
        TControl.__init__(self, aParent)

        Pattern = {'State': False, 'Invert': False}
        self.Param.AddDefPattern(Pattern)

        self.Range.Set(None, [0, 1])

    def _Set(self, aCaller, aValue):
        Value = bool(aValue) ^ self.Param.Invert
        TControl._Set(self, aCaller, Value)

    def _Get(self):
        Value = TControl._Get(self)
        return bool(Value) ^ self.Param.Invert
