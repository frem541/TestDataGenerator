QT       += core gui printsupport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    DataGenerator.cpp \
    HarmonicMotionDataGenerator.cpp \
    basecontroller.cpp \
    dataGetter.cpp \
    harmoniccontroller.cpp \
    harmonicdata.cpp \
    abstactfactory.cpp \
    harmonicfactory.cpp \
    main.cpp \
    mainwindow.cpp \
    qcustomplot.cpp

HEADERS += \
    DataGenerator.h \
    HarmonicMotionDataGenerator.h \
    basecontroller.h \
    dataGetter.h \
    harmoniccontroller.h \
    data.h \
    harmonicdata.h \
    abstractfactory.h \
    harmonicfactory.h \
    mainwindow.h \
    qcustomplot.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
