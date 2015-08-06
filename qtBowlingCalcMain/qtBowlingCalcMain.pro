#-------------------------------------------------
#
# Project created by QtCreator 2015-08-02T08:40:21
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = qtBowlingCalcMain
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui

win32: LIBS += -L$$PWD/../../build-qtBowlingClacProjects-Desktop_Qt_5_5_0_MSVC2013-Release/qtBowlingWidgets/release/ -lbowlingwidgetsplugin

INCLUDEPATH += $$PWD/../qtBowlingWidgets
INCLUDEPATH += $$PWD/../../build-qtBowlingClacProjects-Desktop_Qt_5_5_0_MSVC2013-Release/qtBowlingWidgets
DEPENDPATH  += $$PWD/../qtBowlingWidgets


