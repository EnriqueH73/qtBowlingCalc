/**
 *  @file bowlframesplugin.cpp
 *  @brief Plugin information for simple widget of 10 radio buttons to indicate the state of each bowling pin..
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

#include "bowlpinmap.h"
#include "bowlpinmapplugin.h"

#include <QtPlugin>

bowlPinMapPlugin::bowlPinMapPlugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void bowlPinMapPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (m_initialized)
        return;

    // Add extension registrations, etc. here

    m_initialized = true;
}

bool bowlPinMapPlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *bowlPinMapPlugin::createWidget(QWidget *parent)
{
    return new bowlPinMap(parent);
}

QString bowlPinMapPlugin::name() const
{
    return QLatin1String("bowlPinMap");
}

QString bowlPinMapPlugin::group() const
{
    return QLatin1String("BlowingGame");
}

QIcon bowlPinMapPlugin::icon() const
{
    return QIcon();
}

QString bowlPinMapPlugin::toolTip() const
{
    return QLatin1String("Layout of the Blowing Pins");
}

QString bowlPinMapPlugin::whatsThis() const
{
    return QLatin1String("This will display all 10 pins and shows how many pins were knockdown for each roll. ");
}

bool bowlPinMapPlugin::isContainer() const
{
    return false;
}

QString bowlPinMapPlugin::domXml() const
{
    return QLatin1String("<widget class=\"bowlPinMap\" name=\"bowlPinMap\">\n"
                         " <property name=\"geometry\">\n"
                         "   <rect>\n"
                         "    <x>0</x>\n"
                         "    <y>0</y>\n"
                         "    <width>291</width>\n"
                         "    <height>281</height>\n"
                         "   </rect>\n"
                         " </property>\n"
                         " <property name=\"TurnNumber\" >\n"
                         "   <int>1</int>\n"
                         " </property>\n"
                         "</widget>\n");
}

QString bowlPinMapPlugin::includeFile() const
{
    return QLatin1String("bowlpinmap.h");
}

