#-------------------------------------------------
#
# Project created by QtCreator 2017-05-07T10:18:13
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = TestSystem
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    loginform.cpp \
    teststorage.cpp \
    testeditor.cpp \
    testeditoranswer.cpp \
    testunit.cpp

HEADERS  += mainwindow.h \
    loginform.h \
    teststorage.h \
    testeditor.h \
    testeditoranswer.h \
    testunit.h

FORMS    += mainwindow.ui \
    loginform.ui \
    testeditor.ui \
    testeditoranswer.ui
