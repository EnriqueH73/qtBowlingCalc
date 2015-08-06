#ifndef BOWLPINMAP_H
#define BOWLPINMAP_H

#include <QWidget>
//#include <QMouseEvent>
#include <QRadioButton>
//#include <QEvent>
#include <QtUiPlugin/QDesignerExportWidget>
#include "bowlframe.h"
#include "ui_form_pinmap.h"

class QDESIGNER_WIDGET_EXPORT bowlPinMap : public QWidget, Ui_Form_PinMap
{
    Q_OBJECT
        Q_PROPERTY(int ourTurnNumber READ ourTurnNumber WRITE setTurnNumber)

public:
    bowlPinMap(QWidget *parent = 0);

//    enum ballHitType {Spare=0, Strike, Gutter};

     int ourTurnNumber() const{ return m_our_turn_number;}
//    void pinUp (int pin);
//    void pinDown(int pin);
//    void pinsAllUp(void);
//    void pinsAllDown(void);


private:
    int m_our_turn_number;

//    bool m_pins_are_up[11];//start from 1;
    QRadioButton* m_qradio_pins[11];
    bowlFrame *m_current_frame;

    void update_pin_map ();


private slots:
    void setCurrentFrame(bowlFrame*);
    void setTurnNumber(int);
    //void clickOnPin(bool);



signals:
//    void pinWentUp(int);
//    void pinWentDown(int);

};


#endif
