QT       += core gui #添加了Qt的支持模块core与gui库是Qt的默认设置。

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \  # SOURCES下的是源文件
    main.cpp \
    mainwindow.cpp

HEADERS += \  # HEADERS下的是头文件
    mainwindow.h

FORMS += \      # 界面文件。
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
# 如果需要修改生成目标的可执行程序名字 赋值 TARGET =xxx。否则TARGET将默认 取值为项目的名字
