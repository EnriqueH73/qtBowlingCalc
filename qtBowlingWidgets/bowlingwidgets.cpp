/**
 *  @file bowlframesplugin.cpp
 *  @brief Plugin information for all Bowling Frames widgets. This will store all
 *  	the widgets that were developed into one DLL library.
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
