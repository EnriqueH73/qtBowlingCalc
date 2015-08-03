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
                         "    <width>152</width>\n"
                         "    <height>121</height>\n"
                         "   </rect>\n"
                         "  </property>\n"
                         "</widget>\n");
}

QString bowlFramePlugin::includeFile() const
{
    return QLatin1String("bowlframe.h");
}

