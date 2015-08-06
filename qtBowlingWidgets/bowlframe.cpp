#include "bowlframe.h"

#include <QPainter>

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

void bowlFrame::mouseReleaseEvent(QMouseEvent *)
{
    mouseClick_OurFrameNum(m_frame_num);
    mouseClick_OurFrameObj(this);
}


//void bowlFrame::paintEvent(QPaintEvent *)
//{

//}

void bowlFrame::bowl_GetNumOne_Change( int val )
{

}

void bowlFrame::bowl_GetNumTwo_Change( int val )
{

}

void bowlFrame::bowl_FrameBox_Enter(QEvent *)
{
    frameBox->setFrameStyle(QFrame::Sunken);
}

void bowlFrame::bowl_FrameBox_Leave(QEvent *)
{
    frameBox->setFrameStyle(QFrame::Raised);
}

void bowlFrame::setFrameNumber(int val)
{
    m_frame_num = val;
    if(m_frame_num == 10)
        boxFrame_ball_B->setVisible(true);
}

