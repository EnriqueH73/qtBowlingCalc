/**
 *  @file bowlframe.cpp
 *  @brief Custom Widget of a frame of a single turn to bowl the ball.
 *  @details The blowFrame() widget class will hold the out come of one
 *  		 turn, or two tries rolling the ball. The user has the choice
 *  		  to either enter the number using the spin box or use the bowling
 *  		  pin maps.  There will be 2 bowling pin maps that will hold the
 *  		  out come of each rolling of the ball.  The spin box will also
 *  		   change the output in the bowling pin widget.
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

#include <QPainter>

/**
 * @publicsection
 * @author EHerrera
 * @date 7/30/15                                                      **//**
 * @addtogroup BowlingWidgets bowlFrame
 * @brief  Constructor
 * @param[in] QWidget*
 * @param[out] none
 * @return none
 *
 * @details Is initializing the widgets that were designed with in the design form (formframe.ui).
 */
bowlFrame::bowlFrame(QWidget *parent) :
    QWidget(parent),m_frame_num(1)
{
    setupUi(this);
    boxFrame_ball_B->hide();

    //connect(frameBox,SIGNAL(enterEvent()),this,SLOT(bowl_FrameBox_Enter()));change the stayle of the frame box
    //connect(frameBox,SIGNAL(leaveEvent()),this,SLOT(bowl_FrameBox_Leave()));when the mouse enters the frame.

    memset(m_pins_are_up_b1,1,11);
    memset(m_pins_are_up_b2,0,11);


}

/**
 * @publicsection
 * @author EHerrera
 * @date 7/30/15                                                      **//**
 * @addtogroup BowlingWidgets bowlFrame
 * @brief  capture the mouse when releasing the button
 * @param[in] QMouseEvent*
 * @param[out] none
 * @return none
 *
 * @details Capturing Mouse release button event..
 */
void bowlFrame::mouseReleaseEvent(QMouseEvent *)
{
    mouseClick_OurFrameNum(m_frame_num);
    mouseClick_OurFrameObj(this);
}


/*dead code*/
void bowlFrame::bowl_GetNumOne_Change( int val )
{

}
/*dead code*/
void bowlFrame::bowl_GetNumTwo_Change( int val )
{

}

/**
 * @privatesection
 * @author EHerrera
 * @date 7/30/15                                                      **//**
 * @addtogroup BowlingWidgets bowlFrame
 * @brief  catch the mouse when entering the frame.
 * @param[in] QEvent*
 * @param[out] none
 * @return none
 *
 * @details which should change the border  of the box around the frame
 */
void bowlFrame::bowl_FrameBox_Enter(QEvent *)
{
    frameBox->setFrameStyle(QFrame::Sunken);
}

/**
 * @privatesection
 * @author EHerrera
 * @date 7/30/15                                                      **//**
 * @addtogroup BowlingWidgets bowlFrame
 * @brief  catch the mouse when is leaving the frame.
 * @param[in] QEvent*
 * @param[out] none
 * @return none
 *
 * @details which should change the border  of the box around the frame
 */
void bowlFrame::bowl_FrameBox_Leave(QEvent *)
{
    frameBox->setFrameStyle(QFrame::Raised);
}

/**
 * @privatesection
 * @author EHerrera
 * @date 7/30/15                                                      **//**
 * @addtogroup BowlingWidgets bowlFrame
 * @brief  Constructor
 * @param[in] int
 * @param[out] none
 * @return none
 *
 * @details which should change the border  of the box around the frame
 */
void bowlFrame::setFrameNumber(int val)
{
    m_frame_num = val;
    if(m_frame_num == 10)
        boxFrame_ball_B->setVisible(true);
}

