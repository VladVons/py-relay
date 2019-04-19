import os
import time
from   yattag import Doc
#
from Inc.Util       import FS, Obj


def DeviceTree(aObj, aStr = ''):
    if (aObj.Parent):
        aStr += DeviceTree(aObj.Parent) + ' -> '
    aStr += 'Alias:%s, Class:%s, Descr:%s' % (aObj.Alias, Obj.GetName(aObj), aObj.Descr)
    return aStr


def HtmlDir(aPath, aFullPath):
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
        Date = time.strftime('%Y-%m-%d %H:%M:%S', FS.GetCTime(FullPath))
        Result.append([Href, 'DIR', Date])

    for File in Files:
        FullPath = aFullPath + '/' + File
        Href     = '<a href="%s">%s</a>' % (aPath + '/' + File, File)
        if (os.path.islink(FullPath)):
            Size = Date = ''
        else:
            Size = FS.GetFileSize(FullPath)
            Date = time.strftime('%Y-%m-%d %H:%M:%S', FS.GetCTime(FullPath))
        Result.append([Href, Size, Date])
    return Result


def HtmlTable(aColumns, aItems):
    doc, tag, text, line = Doc().ttl()
    with tag('table'):
        # table head
        for Column in aColumns:
            with tag('th'):
                text(Column)

        # table rows
        for Row in aItems:
            with tag('tr'):
                for Col in Row:
                    with tag('td'):
                        doc.asis(str(Col))
    Result = doc.getvalue()
    return Result
