#ifndef BOWLFRAME_H
#define BOWLFRAME_H

#include <QWidget>
#include <QMouseEvent>
#include <QEvent>
#include <QtUiPlugin/QDesignerExportWidget>

#include "ui_formframe.h"

class QDESIGNER_WIDGET_EXPORT bowlFrame : public QWidget, Ui_FrameForm
{
    Q_OBJECT
        Q_PROPERTY(int ourFrameNumber READ ourFrameNumber WRITE setFrameNumber)

public:
    bowlFrame(QWidget *parent = 0);

    int ourFrameNumber() const{ return m_frame_num;}

    //mouse Events
    void mouseReleaseEvent(QMouseEvent *ev);
    bool m_pins_are_up_b1[11];//this was in private, starting to take shortcuts
    bool m_pins_are_up_b2[11];//this was in private, starting to take shortcuts

private:
    //Ui_FrameForm uiframe;
    int m_frame_num;


protected:
   // void paintEvent(QPaintEvent *event) Q_DECL_OVERRIDE;

private slots:
    void bowl_GetNumOne_Change( int val);
    void bowl_GetNumTwo_Change( int val);

    void bowl_FrameBox_Enter( QEvent *ev );
    void bowl_FrameBox_Leave( QEvent *ev );

    void setFrameNumber(int);

signals:
    void bowl_NumOne_Changed( int val);
    void bowl_NumTwo_Changed( int val);
    void bowl_TotalNum_Changed ( int val );

    void Mouse_Left( void );
    void Mouse_Entered( void );
    void mouseClick_OurFrameNum(int);
    void mouseClick_OurFrameObj(bowlFrame*);



};

#endif
