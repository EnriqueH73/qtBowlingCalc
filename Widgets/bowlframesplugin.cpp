#include "bowlframes.h"
#include "bowlframesplugin.h"

#include <QtPlugin>

bowlFramesPlugin::bowlFramesPlugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void bowlFramesPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (m_initialized)
        return;

    // Add extension registrations, etc. here

    m_initialized = true;
}

bool bowlFramesPlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *bowlFramesPlugin::createWidget(QWidget *parent)
{
    return new bowlFrames(parent);
}

QString bowlFramesPlugin::name() const
{
    return QLatin1String("bowlFrames");
}

QString bowlFramesPlugin::group() const
{
    return QLatin1String("BlowingGame");
}

QIcon bowlFramesPlugin::icon() const
{
    return QIcon();
}

QString bowlFramesPlugin::toolTip() const
{
    return QLatin1String("");
}

QString bowlFramesPlugin::whatsThis() const
{
    return QLatin1String("This where all 10 frames are stored. ");
}

bool bowlFramesPlugin::isContainer() const
{
    return true;
}

QString bowlFramesPlugin::domXml() const
{
    return QLatin1String("<widget class=\"bowlFrames\" name=\"bowlFrames\">\n</widget>\n");
}

QString bowlFramesPlugin::includeFile() const
{
    return QLatin1String("bowlframes.h");
}

