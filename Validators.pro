QT -= gui

TEMPLATE = lib
DEFINES += VALIDATORS_LIBRARY

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    carvalidator.cpp \
    harmonicvalidator.cpp \
    planevalidator.cpp \
    validator.cpp

HEADERS += \
    Validators_global.h \
    carvalidator.h \
    harmonicvalidator.h \
    planevalidator.h \
    validator.h

# Default rules for deployment.
unix {
    target.path = /usr/lib
}
!isEmpty(target.path): INSTALLS += target