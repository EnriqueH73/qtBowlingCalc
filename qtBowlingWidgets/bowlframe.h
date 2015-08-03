#ifndef BOWLFRAME_H
#define BOWLFRAME_H

#include <QWidget>

#include "ui_formframe.h"



class bowlFrame : public QWidget
{
    Q_OBJECT

public:
    bowlFrame(QWidget *parent = 0);

private:
    Ui_FrameForm frame;

private slots:
    void bowl_GetNumOne_Change( int val);
    void bowl_GetNumTwo_Change( int val);

signals:
    void bowl_NumOne_Changed( int val);
    void bowl_NumTwo_Changed( int val);
    void bowl_TotalNum_Changed ( int val );

};

#endif
