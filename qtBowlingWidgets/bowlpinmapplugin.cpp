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
    return QLatin1String("<widget class=\"bowlPinMap\" name=\"bowlPinMap\">\n</widget>\n");
}

QString bowlPinMapPlugin::includeFile() const
{
    return QLatin1String("bowlpinmap.h");
}

