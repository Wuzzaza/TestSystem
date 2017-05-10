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
    testunit.cpp \
    quizwindow.cpp \
    begintestdialog.cpp

HEADERS  += mainwindow.h \
    loginform.h \
    teststorage.h \
    testeditor.h \
    testeditoranswer.h \
    testunit.h \
    quizwindow.h \
    begintestdialog.h

FORMS    += mainwindow.ui \
    loginform.ui \
    testeditor.ui \
    testeditoranswer.ui \
    quizwindow.ui \
    begintestdialog.ui

CONFIG(release, debug|release):DEFINES += QT_NO_DEBUG_OUTPUT

