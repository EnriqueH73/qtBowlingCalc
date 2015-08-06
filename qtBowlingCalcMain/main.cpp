
/**
 *  @mainpage QT Bowling Calculator Documentation
 *  @htmlonly
 *     <body><p><address style="text-align: right;"/>
 *     </address></p></body>
 *  @endhtmlonly
 *  @details This self project started from an interview with Beckman Coulter.
 *  		  One of the questions in the interview is how build a class for
 *  		  scoring a bowling game. I liked the question so much,
 *  		  I wanted to expand from it. I have created a Qt 5.5v Bowling
 *  		  Calculation application.
 *  @details The concept was started on paper and then on scratch code. I saw
 *  		  patterns first  attempt in bowling scoring class; I knew I could
 *  		  implement in the Qt GUI framework. I obtain a deep knowledge on
 *  		  the inner workings of the Qt framework. I am glad I have ported there.
 *  @details
 *  @file main.cpp
 *  @brief Application Entry Point
 */
#include "mainwindow.h"
#include <QApplication>


/******************************************************************************
 * @author EHerrera
 * @date 07/30/2015                                                      **//**
 * @addtogroup MainWindow
 * @fn int main(int argc, char *argv[])
 * @brief QT Bowling Calculator Entry Point
 * @private
 * @returns Application exit status always successful
 * @param[in] argc Number of command line parameters
 * @param[in] argv Variable list of command line parameters
 * @details This is the starting point of creating the GUI layout and running the
 * 			application.
 *
 * @note command line parameters:
 *       none
 ******************************************************************************/
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
