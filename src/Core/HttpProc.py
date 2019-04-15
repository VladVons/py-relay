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

def Html(aBody):
    doc, tag, text = Doc().tagtext()
    doc.asis('<!DOCTYPE html>')
    with tag('html'):
        with tag('body'):
            # text(aBody)
            doc.asis(aBody)
    return doc.getvalue()

def HtmlDir(aPath, aFullPath):
    Root, Folders, Files = next(os.walk(aFullPath))
    Folders.sort()
    Files.sort()

    doc, tag, text, line = Doc().ttl()
    with tag('table'):
        with tag('th'):
            text('Name')
        with tag('th'):
            text('Size')
        with tag('th'):
            text('Date')

        Pos = aPath.rfind('/')
        if (Pos > 0):
            PrevDir = aPath[:Pos]
            with tag('tr'):
                with tag('td'):
                    line('a', 'Back ..', href = PrevDir)
                with tag('td'):
                    text('')
                with tag('td'):
                    text('')

        for Folder in Folders:
            FullPath = aFullPath + '/' + Folder
            with tag('tr'):
                with tag('td'):
                    line('a', Folder + '/', href = aPath + '/' + Folder)
                with tag('td'):
                    text('DIR')
                with tag('td'):
                    text(time.strftime('%Y-%m-%d %H:%M:%S', FS.GetCTime(FullPath)))

        for File in Files:
            FullPath = aFullPath + '/' + File
            SymLink  = os.path.islink(FullPath)
            with tag('tr'):
                with tag('td'):
                    line('a', File, href = aPath + '/' + File)
                with tag('td', ('align', 'right')):
                    if (SymLink):
                        text('SYM')
                    else:
                        text(FS.GetFileSize(FullPath))
                with tag('td'):
                    if (SymLink):
                        text('SYM')
                    else:
                        text(time.strftime('%Y-%m-%d %H:%M:%S', FS.GetCTime(FullPath)))

    return doc.getvalue()
