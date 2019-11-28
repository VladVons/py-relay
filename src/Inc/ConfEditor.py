"""
Copyright:   (c) 2017, Vladimir Vons, UA
Author:      Vladimir Vons <VladVons@gmail.com>
Created:     2016.09.11
License:     GNU, see LICENSE for more details
Description:
"""

import re
import os
#
from Inc.Util import UFS, UStr

__all__ = ['TEditorConf', 'TEditorIni', 'TEditorDir']


#===
class TConfSectBase():
    def __init__(self):
        self.CharComment = '#'
        self.Updated     = False
        self.OnKeyValid  = None
        self.OnUpdate    = None
        self.Tag         = None

    def DoOnUpdate(self, aOld, aNew):
        if (self.OnUpdate):
            self.OnUpdate(aOld, aNew)

    def DoOnKeyValid(self, aKey, aValue):
        if (self.OnKeyValid):
            return self.OnKeyValid(aKey, aValue)
        else:
            return True


#===
class TConfSect(TConfSectBase):
    def __init__(self):
        TConfSectBase.__init__(self)

        self.CharPairDelim      = '='
        self.Patern_KeyNamePair = lambda aName: '(' + aName + ')\s*' + self.CharPairDelim + '(.*)'
        self.Patern_KeyAnyPair  = self.Patern_KeyNamePair('\w+')

        self.Load([], '')

    def _LineComment(self, aIdx):
        self.LineSet(aIdx, self.CharComment + self.LineGet(aIdx))

    def _LineUncomment(self, aIdx):
        self.LineSet(aIdx, self.LineGet(aIdx).lstrip(self.CharComment))

    def LineGet(self, aIdx: int):
        return self.Lines[aIdx]

    def LineCommented(self, aIdx: int):
        return self.LineGet(aIdx).lstrip().startswith(self.CharComment)

    def Delete(self):
        self.Lines = []

    def Load(self, aLines, aName):
        self.Lines   = aLines
        self.Name    = aName
        self.Updated = False

    def KeyList(self, aAsIs: bool = True):
        Result = {}
        for Idx in range(0, len(self.Lines)):
            if (not self.LineCommented(Idx)):
                Pair = self.AnyGetIdx(Idx)
                if (Pair):
                    # tuple pair array
                    Key, Value = Pair[0]
                    Key   = Key.strip()
                    Value = Value.strip()
                    if (aAsIs):
                        Result[Key] = Value
                    else:
                        Result[Key] = UStr.ConvertTo(Value)
        return Result

    def KeySearch(self, aKey):
        Result = -1
        for Idx in range(0, len(self.Lines)):
            if (self.KeyGetIdx(aKey, Idx)):
                Result = Idx
                break
        return Result

    def KeyGetIdx(self, aKey, aIdx):
        return re.findall(self.Patern_KeyNamePair(aKey), self.LineGet(aIdx))

    def AnyGetIdx(self, aIdx: int):
        return re.findall(self.Patern_KeyAnyPair, self.LineGet(aIdx))

    def LineSet(self, aIdx, aStr):
        if (aIdx == -1):
            Old = ''
            self.Lines.append(aStr)
        else:
            Old = self.Lines[aIdx]
            self.Lines[aIdx] = aStr

        self.Updated = True
        self.DoOnUpdate(Old, aStr)

    def KeyGet(self, aKey, aDef = ''):
        Result = aDef

        Idx = self.KeySearch(aKey)
        if (Idx != -1):
            if (not self.LineCommented(Idx)):
                Result = self.LineGet(Idx).split(self.CharPairDelim)[1]

        return Result

    def MakePair(self, aKey, aValue):
        return '} {} {}\n'.format(aKey, self.CharPairDelim, aValue)

    def KeySet(self, aKey, aValue):
        Result = self.DoOnKeyValid(aKey, aValue)
        if (Result):
            Str1 = self.MakePair(aKey, aValue)
            Idx  = self.KeySearch(aKey)
            self.LineSet(Idx, Str1)

        return Result

    def KeyDelete(self, aKey):
        Result = self.DoOnKeyValid(aKey, '')
        if (Result):
            Idx = self.KeySearch(aKey)
            Result = (Idx != -1)
            if (Result):
                self.Updated = True
                self.DoOnUpdate(self.Lines[Idx], '')
                del(self.Lines[Idx])
        return Result

    def KeyComment(self, aKey):
        Result = self.DoOnKeyValid(aKey, '')
        if (Result):
            Idx = self.KeySearch(aKey)
            Result = (Idx != -1)
            if (Result):
                if (not self.LineCommented(Idx)):
                    self._LineComment(Idx)
        return Result

    def KeyUncomment(self, aKey):
        Result = self.DoOnKeyValid(aKey, '')
        if (Result):
            Idx = self.KeySearch(aKey)
            Result = (Idx != -1)
            if (Idx != -1):
                self._LineUncomment(Idx)
                return Result

    def LineComment(self, aIdx):
        if (not self.LineCommented(aIdx)):
            if (self.AnyGetIdx(aIdx)):
                self._LineComment(aIdx)

    def LineUncomment(self, aIdx):
        if (self.LineCommented(aIdx)):
            if (self.AnyGetIdx(aIdx)):
                self._LineUncomment(aIdx)

    def Comment(self, aType = True):
        for Idx in range(0, len(self.Lines)):
            if (aType):
                self._LineComment(Idx)
            else:
                self._LineUncomment(Idx)

#===
class TConfDir(TConfSect):
    def __init__(self):
        TConfSect.__init__(self)



#===
class TEditorBase():
    def __init__(self):
        self.Section     = None
        self.OnKeyValid  = None
        self.OnUpdate    = None
        #self.CharComment = '#'

    def _SectionInit(self, aClass, aName):
        aClass.Name        = aName
        aClass.OnKeyValid  = self.OnKeyValid
        aClass.OnUpdate    = self.OnUpdate
        #aClass.CharComment = self.CharComment
        return aClass

#===
class TEditorConf(TEditorBase):
    def __init__(self):
        TEditorBase.__init__(self)
        self.PathName = ''

    def GetPath(self):
        return self.PathName

    def _SectionCreate(self, aName: str = ''):
        return self._SectionInit(TConfSect(), aName)

    def LoadFromFile(self, aName: str):
        self.PathName = aName
        self.Section  = self._SectionCreate('')
        self.Section.Lines = UFS.LoadFromFileToList(aName)

    def SaveToFile(self, aName = ''):
        if (aName == ''):
            aName = self.PathName

        if (self.Section.Updated):
            UFS.SaveToFileFromList(aName, self.Section.Lines)


class TEditorIni(TEditorConf):

    def __init__(self):
        TEditorConf.__init__(self)
        self.Sections = []

    def _SectionAdd(self, aName):
        if (len(self.Sections) > 0 and len(self.Sections[-1].Lines) > 0):
            if (self.Sections[-1].Lines[-1] != '\n'):
                self.Sections[-1].Lines.append('\n')

        self.Section = self._SectionCreate(aName)
        self.Sections.append(self.Section)

    def IsUpdated(self):
        Result = False
        for Section in self.Sections:
            if (Section.Updated):
                Result = True
                break
        return Result

    def LoadFromFile(self, aName):
        self.PathName = aName

        self.Sections = []
        # First lines usually commented description. They have no section
        self._SectionAdd('')

        for Line in UFS.LoadFromFileToList(aName):
            Arr = re.findall('\[\s*(.*)\s*\]', Line)
            if (Arr and Line.lstrip().startswith('#') is False):
                Name = Arr[0]
                self._SectionAdd(Name)
            else:
                self.Section.Lines.append(Line)

    def SaveToFile(self, aName):
        if (self.IsUpdated()):
            with open(aName, 'w') as File:
                for Section in self.Sections:
                    if (Section.Name != ''):
                        File.write('[' + Section.Name + ']' + '\n')
                    for Line in Section.Lines:
                        File.write(Line)

    def SectionSet(self, aName):
        Result = False
        for Section in self.Sections:
            if (Section.Name == aName):
                self.Section = Section
                Result = True
                break

        return Result

    def SectionsGet(self):
        Result = []
        for Section in self.Sections:
            Result.append(Section.Name)

        return Result

    def SectionAdd(self, aName):
        Sections = self.SectionsGet()
        if (not aName in Sections):
            self._SectionAdd(aName)

    def Comment(self, aType = True):
        self.Section.Comment(aType)


class TEditorDir(TEditorBase):

    def __init__(self):
        TEditorBase.__init__(self)
        self.DirPath  = ''
        self.PathName = lambda aName: self.DirPath + '/' + aName

    def GetPath(self):
        return self.DirPath

    def __GetFiles(self):
        return os.listdir(self.DirPath)

    def __GetFileValue(self, aName):
        with open(self.PathName(aName), 'r') as File:
            return File.readline()

    def __SetFileValue(self, aName, aValue):
        Value  = None
        Update = True
        if (os.path.isfile(self.PathName(aName))):
            Value = self.__GetFileValue(aName)
            Update = (Value != aValue)

        if (Update):
            with open(self.PathName(aName), 'w') as File:
                File.write(aValue)

    def LoadFromFile(self, aDirPath):
        self.DirPath = aDirPath
        self.Section = self._SectionInit(TConfDir(), '')

        for FileName in self.__GetFiles():
            Line = self.__GetFileValue(FileName)
            self.Section.LineSet(-1, FileName + self.Section.CharPairDelim + Line)

    def SaveToFile(self, aDirPath = ''):
        if (self.Section.Updated):
            Keys = self.Section.KeyList()

            for FileName in self.__GetFiles():
                if (not FileName in Keys):
                    os.remove(self.PathName(FileName))

            for Key in Keys:
                self.__SetFileValue(Key, Keys[Key])
