/**
 *  @file bowlframesplugin.cpp
 *  @brief A PlaceHolder for advanced 3D widget of 10 radio buttons to indicate the state of each bowling pin..
 *  @details All 10 blowing pins are representative in this custom widget. When the
 *  		 radio button is selected (or down), that means the pin is still standing up.
 *  		  The bowling pin is down when the button is not selected (or opened).
 *  		  The buttons will be updated soon as one of the frames when clicked on.
 *  		  When the user clicks one of the pins, the scoring mechanism will update the
 *  		  scores for the whole game. One of these widgets will be considered for one
 *  		  ball in a turn.
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

bowlPinMap3D::bowlPinMap3D(QWidget *parent) :
    QWidget(parent)
{
}
