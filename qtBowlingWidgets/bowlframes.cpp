/**
 *  @file bowlframeplugin.cpp
 *  @brief Bowling Frames was designed to whole all 10 frames of a single game.
 *  				It seems we might not need it. Keeping it for a place holder.
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

#include "bowlframes.h"

bowlFrames::bowlFrames(QWidget *parent) :
    QWidget(parent)
{
}
