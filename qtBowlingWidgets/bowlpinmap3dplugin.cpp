/**
 *  @file bowlframesplugin.cpp
 *  @brief Plugin information  for advanced 3D widget of 10 radio buttons to indicate the state of each bowling pin..
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
#include "bowlpinmap3d.h"
#include "bowlpinmap3dplugin.h"

#include <QtPlugin>

bowlPinMap3DPlugin::bowlPinMap3DPlugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void bowlPinMap3DPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (m_initialized)
        return;

    // Add extension registrations, etc. here

    m_initialized = true;
}

bool bowlPinMap3DPlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *bowlPinMap3DPlugin::createWidget(QWidget *parent)
{
    return new bowlPinMap3D(parent);
}

QString bowlPinMap3DPlugin::name() const
{
    return QLatin1String("bowlPinMap3D");
}

QString bowlPinMap3DPlugin::group() const
{
    return QLatin1String("BlowingGame");
}

QIcon bowlPinMap3DPlugin::icon() const
{
    return QIcon();
}

QString bowlPinMap3DPlugin::toolTip() const
{
    return QLatin1String("Layout of the Blowing Pins");
}

QString bowlPinMap3DPlugin::whatsThis() const
{
    return QLatin1String("This will display all 10 pins and shows how many pins were knockdown for each roll.  The display will be in 3D Objects. ");
}

bool bowlPinMap3DPlugin::isContainer() const
{
    return false;
}

QString bowlPinMap3DPlugin::domXml() const
{
    return QLatin1String("<widget class=\"bowlPinMap3D\" name=\"bowlPinMap3D\">\n</widget>\n");
}

QString bowlPinMap3DPlugin::includeFile() const
{
    return QLatin1String("bowlpinmap3d.h");
}

