QT += core
QT -= gui

CONFIG += c++11

TARGET = TestCases2
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app
include (../qt_test_app/qt_test_app.pro)

QtTestAppDir = ../qt_test_app

DEPENDPATH +=  $$QtTestAppDir

INCLUDEPATH +=  $$QtTestAppDir

SOURCES -= main.cpp       #去除qt_test_app工程里面的main.cpp文件，以免出现TestCase工程里有两个main()的错误。

HEADERS +=

SOURCES += \
    main_test.cpp

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../../../../../../../../usr/local/lib/release/ -lgtest
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../../../../../../../../usr/local/lib/debug/ -lgtest
else:unix: LIBS += -L$$PWD/../../../../../../../../usr/local/lib/ -lgtest

INCLUDEPATH += $$PWD/../../../../../../../../usr/include/gtest
DEPENDPATH += $$PWD/../../../../../../../../usr/include/gtest

win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$PWD/../../../../../../../../usr/local/lib/release/libgtest.a
else:win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$PWD/../../../../../../../../usr/local/lib/debug/libgtest.a
else:win32:!win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$PWD/../../../../../../../../usr/local/lib/release/gtest.lib
else:win32:!win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$PWD/../../../../../../../../usr/local/lib/debug/gtest.lib
else:unix: PRE_TARGETDEPS += $$PWD/../../../../../../../../usr/local/lib/libgtest.a



