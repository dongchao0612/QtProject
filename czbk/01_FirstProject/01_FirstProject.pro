# Qt包含的模块
QT       += core gui

#大于4版本以上 包含 widget模块
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11


DEFINES += QT_DEPRECATED_WARNINGS


#源文件
SOURCES += \
    main.cpp \
    mypushbutton.cpp \
    mywidget.cpp

# 头文件
HEADERS += \
    mypushbutton.h \
    mywidget.h

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
