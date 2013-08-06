#-------------------------------------------------
#
# Project created by QtCreator 2013-03-19T12:05:42
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = PrefrenceWindow
TEMPLATE = app


SOURCES += main.cpp\
        qprefrencewidget.cpp\
        SHARING_FOLDER/widget.cpp

HEADERS  += qprefrencewidget.h\
        SHARING_FOLDER/widget.h

FORMS    += qprefrencewidget.ui\
        SHARING_FOLDER/widget.ui

RESOURCES += \
    prefImage.qrc
