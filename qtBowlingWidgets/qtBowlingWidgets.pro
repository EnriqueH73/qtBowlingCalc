CONFIG      += plugin debug_and_release release
TARGET      = $$qtLibraryTarget(bowlingwidgetsplugin)
TEMPLATE    = lib

HEADERS     = bowlframeplugin.h bowlpinmapplugin.h bowlpinmap3dplugin.h bowlframesplugin.h bowlingwidgets.h
SOURCES     = bowlframeplugin.cpp bowlpinmapplugin.cpp bowlpinmap3dplugin.cpp bowlframesplugin.cpp bowlingwidgets.cpp
RESOURCES   = icons.qrc
LIBS        += -L. 

greaterThan(QT_MAJOR_VERSION, 4) {
    QT += designer
} else {
    CONFIG += designer
}

target.path = $$[QT_INSTALL_PLUGINS]/designer
INSTALLS    += target

include(bowlpinmap.pri)
include(bowlframe.pri)
include(bowlpinmap3d.pri)
include(bowlframes.pri)
