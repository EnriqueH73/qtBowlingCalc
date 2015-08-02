#include "bowlframeplugin.h"
#include "bowlpinmapplugin.h"
#include "bowlpinmap3dplugin.h"
#include "bowlframesplugin.h"
#include "bowlingwidgets.h"

BowlingWidgets::BowlingWidgets(QObject *parent)
    : QObject(parent)
{
    m_widgets.append(new bowlFramePlugin(this));
    m_widgets.append(new bowlPinMapPlugin(this));
    m_widgets.append(new bowlPinMap3DPlugin(this));
    m_widgets.append(new bowlFramesPlugin(this));

}

QList<QDesignerCustomWidgetInterface*> BowlingWidgets::customWidgets() const
{
    return m_widgets;
}

#if QT_VERSION < 0x050000
Q_EXPORT_PLUGIN2(bowlingwidgetsplugin, BowlingWidgets)
#endif // QT_VERSION < 0x050000
