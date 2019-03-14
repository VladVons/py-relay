'''
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2017.11.07
License:     GNU, see LICENSE for more details
Description:
'''

import collections


class TScreenTxt():
    def __init__(self):
        self.Provider  = None
        self.BlankChar = ' '
        self.ArrMatrix = []
        self.ArrShift  = []

    def SetProvider(self, aProvider):
        self.Provider = aProvider

        self.ArrMatrix = [[self.BlankChar for j in range(self.Provider.Cols)] for i in range(self.Provider.Rows)]
        self.ArrShift  = range(self.Provider.Rows)
        self.Clear()

    def Shift(self, aCnt = 1):
        # self.ArrShift = self.ArrShift[aCnt:] + self.ArrShift[:aCnt] # __need 2.7
        a = collections.deque(self.ArrShift) 
        a.rotate(-aCnt)
        self.ArrShift = list(a)

    def _PrintMatrix(self):
        for Row in range(self.Provider.Rows):
            self.Provider.CursorTo(Row, 0)
            for Col in range(self.Provider.Cols):
                Idx  = self.ArrShift[Row]
                Char = self.ArrMatrix[Idx][Col]
                self.Provider.PrintChar(Char)

    def LineToMatrix(self, aIdx, aLine):
        Line = aLine[:self.Provider.Cols].ljust(self.Provider.Cols, self.BlankChar) 
        if (len(aLine) > self.Provider.Cols):
            Line = Line[:-1] + '*'

        for i in range(self.Provider.Cols):
            self.ArrMatrix[aIdx][i] = Line[i]

    def Print(self, aLine):
        self.LineToMatrix(self.ArrShift[0], aLine)
        self.Shift(1)
        self._PrintMatrix()

    def Fill(self, aChar):
        for Row in range(self.Provider.Rows):
            for Col in range(self.Provider.Cols):
                self.ArrMatrix[Row][Col] = aChar
        self._PrintMatrix()

    def Clear(self):
        self.Fill(' ')
