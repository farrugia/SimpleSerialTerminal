#-------------------------------------------------
#
# Project created by QtCreator 2015-08-07T10:40:46
#
#-------------------------------------------------

QT       += widgets serialport
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = serial-impl
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    console.cpp \
    settingsdialog.cpp

HEADERS  += mainwindow.h \
    console.h \
    settingsdialog.h

FORMS    += mainwindow.ui \
    settingsdialog.ui
