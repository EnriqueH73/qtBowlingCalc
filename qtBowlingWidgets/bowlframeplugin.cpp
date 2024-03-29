/**
 *  @file bowlframeplugin.cpp
 *  @brief Plugin information for QT Designer for Bowling Frame custom widget.
 *  @details
 *
 *This are templates for GraphWiz and Message Sequence Chart Renderer
 @dot
	digraph G {
	main -> parse -> execute;
	main -> init;
	main -> cleanup;
	execute -> make_string;
	execute -> printf
	init -> make_string;
	main -> printf;
	execute -> compare;
	}
@enddot
 *
@msc
	arcgradient = 8;
	a [label="Client"],b [label="Server"];
	a-xb [label="get accel"];
	a=>b [label="get accel"];
	a<=b [label="ack"];
	a<=b [label="accel data"];
@endmsc
 *
 */
#include "bowlframe.h"
#include "bowlframeplugin.h"

#include <QtPlugin>

bowlFramePlugin::bowlFramePlugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void bowlFramePlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (m_initialized)
        return;

    // Add extension registrations, etc. here

    m_initialized = true;
}

bool bowlFramePlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *bowlFramePlugin::createWidget(QWidget *parent)
{
    return new bowlFrame(parent);
}

QString bowlFramePlugin::name() const
{
    return QLatin1String("bowlFrame");
}

QString bowlFramePlugin::group() const
{
    return QLatin1String("BlowingGame");
}

QIcon bowlFramePlugin::icon() const
{
    return QIcon();
}

QString bowlFramePlugin::toolTip() const
{
    return QLatin1String("Roll 2 balls and recored the outcome. ");
}

QString bowlFramePlugin::whatsThis() const
{
    return QLatin1String("A player turn to roll the ball and recored the outcome in frame. ");
}

bool bowlFramePlugin::isContainer() const
{
    return false;
}

QString bowlFramePlugin::domXml() const
{
    return QLatin1String("<widget class=\"bowlFrame\" name=\"bowlFrame\">\n"
                         " <property name=\"geometry\">\n"
                         "   <rect>\n"
                         "    <x>0</x>\n"
                         "    <y>0</y>\n"
                         "    <width>171</width>\n"
                         "    <height>122</height>\n"
                         "   </rect>\n"
                         "  </property>\n"
                         "  <property name=\"OurFrameNumber\" >\n"
                         "   <int>1/int>\n"
                         "  </property>\n"
                         "</widget>\n");
}

QString bowlFramePlugin::includeFile() const
{
    return QLatin1String("bowlframe.h");
}

