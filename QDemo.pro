#-------------------------------------------------
#
# Project created by QtCreator 2021-06-17T11:18:27
#
#-------------------------------------------------

QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QDemo
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
    qmarked_lineedit.cpp \
    authmanager.cpp \
    demoq.cpp \
    demoq_main.cpp \
    main.cpp \
    qcustom_titlebar.cpp \
    qloading_pushbutton.cpp \
    qmarked_lineedit.cpp \
    GeneratedFiles/qrc_demoq.cpp \
    authmanager.cpp \
    demoq.cpp \
    demoq_main.cpp \
    main.cpp \
    qcustom_titlebar.cpp \
    qloading_pushbutton.cpp \
    qmarked_lineedit.cpp

HEADERS += \
    qmarked_lineedit.h \
    apis.h \
    authmanager.h \
    demoq.h \
    demoq_main.h \
    qcustom_titlebar.h \
    qloading_pushbutton.h \
    qmarked_lineedit.h \
    GeneratedFiles/ui_demoq.h \
    GeneratedFiles/ui_demoqmain.h \
    GeneratedFiles/ui_mainscreen.h \
    apis.h \
    authmanager.h \
    demoq.h \
    demoq_main.h \
    qcustom_titlebar.h \
    qloading_pushbutton.h \
    qmarked_lineedit.h

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

SUBDIRS += \
    QDemo.pro

RESOURCES += \
    demoq.qrc

FORMS += \
    demoq.ui \
    mainscreen.ui
