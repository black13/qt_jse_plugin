#-------------------------------------------------
#
# Project created by QtCreator 2018-11-26T18:25:22
#
#-------------------------------------------------

QT       += widgets qml script testlib

QT       -= gui

TARGET = qt_jse_plugin
TEMPLATE = lib
CONFIG += debug
DEFINES += QT_JSE_PLUGIN_LIBRARY

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += qt_jse_plugin.cpp \
    generic_interface.cpp \
    plugin.cpp \
    qt_jse_plugin_global.cpp

HEADERS += qt_jse_plugin.h\
        qt_jse_plugin_global.h \
    plugin.h \
    generic_interface.h

unix {
    target.path = /usr/lib
    INSTALLS += target
    }

