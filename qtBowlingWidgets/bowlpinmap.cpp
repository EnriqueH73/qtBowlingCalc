/**
 *  @file bowlframesplugin.cpp
 *  @brief Simple widget of 10 radio buttons to indicate the state of each bowling pin..
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

#include "bowlpinmap.h"

/**
 * @publicsection
 * @author EHerrera
 * @date 7/30/15                                                      **//**
 * @addtogroup BowlingWidgets bowlPinMap
 * @brief  Constructor
 * @param[in] QWidget*
 * @param[out] none
 * @return none
 *
 * @details We are capturing the associated bowling ping
 *          radio buttons into a 11 deep array. We are using
 *          11 indexes since we want to start indexing at
 *          location 1.  This will help us updating the
 *           radio buttons of any changes that occur.
 */
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
//        connect(m_qradio_pins[i],SIGNAL(clicked()),this,SLOT(clickOnPin())); // had to commit out for some reason it did not like the signal assiment.
}


/**
 * @publicsection
 * @author EHerrera
 * @date 7/30/15                                                      **//**
 * @addtogroup BowlingWidgets bowlPinMap
 * @brief  update the radio buttons
 * @param[in] none
 * @param[out] none
 * @return none
 *
 * @details this will cycle through and update the
 * 			radio buttons and update any of the pins.
 */
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

/**
 * @publicsection
 * @author EHerrera
 * @date 7/30/15                                                      **//**
 * @addtogroup BowlingWidgets bowlPinMap
 * @brief  call back from the QT Designer to set turn number.
 * @param[in] int
 * @param[out] none
 * @return none
 *
 * @details
 */
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

/**
 * @publicsection
 * @author EHerrera
 * @date 7/30/15                                                      **//**
 * @addtogroup BowlingWidgets bowlPinMap
 * @brief  call back from the from bowlFrame to give use the widget that has been clicked on.
 * @param[in] int
 * @param[out] none
 * @return none
 *
 * @details
 */
void bowlPinMap::setCurrentFrame(bowlFrame *frame)
{
    m_current_frame=frame;
}


