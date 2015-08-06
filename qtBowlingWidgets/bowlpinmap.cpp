#include "bowlpinmap.h"

bowlPinMap::bowlPinMap(QWidget *parent) :
    QWidget(parent)
{
    setupUi(this);

    m_qradio_pins[0] = NULL;
    m_qradio_pins[1] = rb_pin1;
    m_qradio_pins[2] = rb_pin2;
    m_qradio_pins[3] = rb_pin3;
    m_qradio_pins[4] = rb_pin4;
    m_qradio_pins[5] = rb_pin5;
    m_qradio_pins[6] = rb_pin6;
    m_qradio_pins[7] = rb_pin7;
    m_qradio_pins[8] = rb_pin8;
    m_qradio_pins[9] = rb_pin9;
    m_qradio_pins[10] = rb_pin10;

//    for (int i=1;i<11;i++)
//        connect(m_qradio_pins[i],SIGNAL(clicked()),this,SLOT(clickOnPin()));
}

//void bowlPinMap::pinUp(int pin)
//{
//    m_pins_are_up[pin]=true;
//    update_pin_map();
//}

//void bowlPinMap::pinDown(int pin)
//{
//    m_pins_are_up[pin]=false;
//    update_pin_map();
//}

//void bowlPinMap::pinsAllUp()
//{
//    for(int i=1;i<11;i++)
//    {
//        m_qradio_pins[i]->setDown(true);
//        m_pins_are_up[i]=true;
//    }
//    update_pin_map();
//}

//void bowlPinMap::pinsAllDown()
//{
//    for(int i=1;i<11;i++)
//    {
//        m_qradio_pins[i]->setDown(false);
//        m_pins_are_up[i]=false;
//    }
//    update_pin_map();
//}

void bowlPinMap::update_pin_map()
{
    bool *pins;
    if(m_our_turn_number == 1)
        pins = m_current_frame->m_pins_are_up_b1;
    else
        pins = m_current_frame->m_pins_are_up_b2;

    for(int i=1;i<11;i++)
    {
        if (pins[i])
            m_qradio_pins[i]->setDown(true);
        else
            m_qradio_pins[i]->setDown(false);
    }
}

void bowlPinMap::setTurnNumber(int val)
{
    m_our_turn_number = val;
}

//void bowlPinMap::clickOnPin(bool val)
//{
//    for(int i=0;i<11;i++)
//    {
//        if(m_pins_are_up[i] != m_qradio_pins[i]->isDown())
//        {
//            m_pins_are_up[i] = m_qradio_pins[i]->isDown();
//            if(val)
//                pinWentUp(i);
//            else
//                pinWentDown(i);
//        }
//    }
//}

void bowlPinMap::setCurrentFrame(bowlFrame *frame)
{
    m_current_frame=frame;
}


