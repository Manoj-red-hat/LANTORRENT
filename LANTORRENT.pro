#-------------------------------------------------
#
# Project created by QtCreator 2013-03-14T03:59:17
#
#-------------------------------------------------

QT       += core gui network widgets svg

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = LANTORRENT
TEMPLATE = app

SOURCES += main.cpp\
        mainwindow.cpp\
        PrefrenceWindow/SHARING_FOLDER/widget.cpp\
        PrefrenceWindow/qprefrencewidget.cpp\
        FileSearch/filesearchwidget.cpp \
        DownloadWindow/downloadmainwindow.cpp\
        global.cpp \
    DownloadWindow/server.cpp \
    DownloadWindow/downloadthread.cpp

HEADERS  += mainwindow.h\
         PrefrenceWindow/SHARING_FOLDER/widget.h\
         PrefrenceWindow/qprefrencewidget.h\
         FileSearch/filesearchwidget.h \
         DownloadWindow/downloadmainwindow.h\
         global.h \
    DownloadWindow/server.h \
    DownloadWindow/downloadthread.h

FORMS    += mainwindow.ui\
         PrefrenceWindow/SHARING_FOLDER/widget.ui\
         PrefrenceWindow/qprefrencewidget.ui\
         FileSearch/filesearchwidget.ui\
         DownloadWindow/downloadmainwindow.ui\

RESOURCES += \
    lantorrent.qrc
