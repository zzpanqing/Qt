TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    myclass.cpp

HEADERS += \
    myclass.h \
    platform_specific.inc \
    b.h
