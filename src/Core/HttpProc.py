import os
import time
from   yattag import Doc
#
from Inc.Util       import UFS


def DeviceTree(aObj, aStr: str = '') -> str:
    if (aObj.Parent):
        aStr += DeviceTree(aObj.Parent) + ' -> '
    aStr += 'Alias:%s, Class:%s, Descr:%s' % (aObj.Alias, Obj.GetName(aObj), aObj.Descr)
    return aStr


def HtmlDir(aPath: str, aFullPath: str) -> list:
    Root, Folders, Files = next(os.walk(aFullPath))
    Folders.sort()
    Files.sort()

    Result = []
    Pos = aPath.rfind('/')
    if (Pos > 0):
        PrevDir = aPath[:Pos]
        #line('a', 'Back ..', href = PrevDir)
        Href = '<a href="%s">%s</a>' % (PrevDir, 'Back ..')
        Result.append([Href, '', ''])

    for Folder in Folders:
        FullPath = aFullPath + '/' + Folder
        Href = '<a href="%s">%s</a>' % (aPath + '/' + Folder, Folder + '/')
        Date = time.strftime('%Y-%m-%d %H:%M:%S', UFS.GetCTime(FullPath))
        Result.append([Href, 'DIR', Date])

    for File in Files:
        FullPath = aFullPath + '/' + File
        Href     = '<a href="%s">%s</a>' % (aPath + '/' + File, File)
        if (os.path.islink(FullPath)):
            Size = Date = ''
        else:
            Size = UFS.GetFileSize(FullPath)
            Date = time.strftime('%Y-%m-%d %H:%M:%S', UFS.GetCTime(FullPath))
        Result.append([Href, Size, Date])
    return Result


def HtmlTable(aColumns: list, aItems: list) -> str:
    doc, tag, text, line = Doc().ttl()
    with tag('table'):
        # table head
        for Column in aColumns:
            with tag('th'):
                text(Column)

        # table rows
        Type = type(aItems)
        if (Type is list):
            for Row in aItems:
                with tag('tr'):
                    Type = type(Row)
                    if (Type is list) or (Type is tuple):
                        for Col in Row:
                            with tag('td'):
                                doc.asis(str(Col))
                    else:
                        with tag('td'):
                            doc.asis(str(Row))
        else:
            with tag('tr'):
                with tag('td'):
                    doc.asis(str(aItems))

    Result = doc.getvalue()
    return Result
