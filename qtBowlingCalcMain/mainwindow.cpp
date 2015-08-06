/**
 *  @file mainwindow.cpp
 *  @brief Main window that will be holding the custom widgets.
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

#include "mainwindow.h"
#include "ui_mainwindow.h"

/**
 * @publicsection
 * @author EHerrera
 * @date 7/30/15                                                      **//**
 * @addtogroup MainWindow
 * @brief  Constructor: Set up all the necessary message signals between widgets.
 * @param[in] QWidget*
 * @param[out] none
 * @return Obj (New Instance of MainWindow)
 *
 * @details
 */
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->bowlFrame_1,SIGNAL(mouseClick_OurFrameObj(bowlFrame*)),ui->bowlPinMap_ball1,SLOT(setCurrentFrame(bowlFrame*)));
    connect(ui->bowlFrame_2,SIGNAL(mouseClick_OurFrameObj(bowlFrame*)),ui->bowlPinMap_ball1,SLOT(setCurrentFrame(bowlFrame*)));
    connect(ui->bowlFrame_3,SIGNAL(mouseClick_OurFrameObj(bowlFrame*)),ui->bowlPinMap_ball1,SLOT(setCurrentFrame(bowlFrame*)));
    connect(ui->bowlFrame_4,SIGNAL(mouseClick_OurFrameObj(bowlFrame*)),ui->bowlPinMap_ball1,SLOT(setCurrentFrame(bowlFrame*)));
    connect(ui->bowlFrame_5,SIGNAL(mouseClick_OurFrameObj(bowlFrame*)),ui->bowlPinMap_ball1,SLOT(setCurrentFrame(bowlFrame*)));
    connect(ui->bowlFrame_6,SIGNAL(mouseClick_OurFrameObj(bowlFrame*)),ui->bowlPinMap_ball1,SLOT(setCurrentFrame(bowlFrame*)));
    connect(ui->bowlFrame_7,SIGNAL(mouseClick_OurFrameObj(bowlFrame*)),ui->bowlPinMap_ball1,SLOT(setCurrentFrame(bowlFrame*)));
    connect(ui->bowlFrame_8,SIGNAL(mouseClick_OurFrameObj(bowlFrame*)),ui->bowlPinMap_ball1,SLOT(setCurrentFrame(bowlFrame*)));
    connect(ui->bowlFrame_9,SIGNAL(mouseClick_OurFrameObj(bowlFrame*)),ui->bowlPinMap_ball1,SLOT(setCurrentFrame(bowlFrame*)));
    connect(ui->bowlFrame_10,SIGNAL(mouseClick_OurFrameObj(bowlFrame*)),ui->bowlPinMap_ball1,SLOT(setCurrentFrame(bowlFrame*)));

    connect(ui->bowlFrame_1,SIGNAL(mouseClick_OurFrameObj(bowlFrame*)),ui->bowlPinMap_ball2,SLOT(setCurrentFrame(bowlFrame*)));
    connect(ui->bowlFrame_2,SIGNAL(mouseClick_OurFrameObj(bowlFrame*)),ui->bowlPinMap_ball2,SLOT(setCurrentFrame(bowlFrame*)));
    connect(ui->bowlFrame_3,SIGNAL(mouseClick_OurFrameObj(bowlFrame*)),ui->bowlPinMap_ball2,SLOT(setCurrentFrame(bowlFrame*)));
    connect(ui->bowlFrame_4,SIGNAL(mouseClick_OurFrameObj(bowlFrame*)),ui->bowlPinMap_ball2,SLOT(setCurrentFrame(bowlFrame*)));
    connect(ui->bowlFrame_5,SIGNAL(mouseClick_OurFrameObj(bowlFrame*)),ui->bowlPinMap_ball2,SLOT(setCurrentFrame(bowlFrame*)));
    connect(ui->bowlFrame_6,SIGNAL(mouseClick_OurFrameObj(bowlFrame*)),ui->bowlPinMap_ball2,SLOT(setCurrentFrame(bowlFrame*)));
    connect(ui->bowlFrame_7,SIGNAL(mouseClick_OurFrameObj(bowlFrame*)),ui->bowlPinMap_ball2,SLOT(setCurrentFrame(bowlFrame*)));
    connect(ui->bowlFrame_8,SIGNAL(mouseClick_OurFrameObj(bowlFrame*)),ui->bowlPinMap_ball2,SLOT(setCurrentFrame(bowlFrame*)));
    connect(ui->bowlFrame_9,SIGNAL(mouseClick_OurFrameObj(bowlFrame*)),ui->bowlPinMap_ball2,SLOT(setCurrentFrame(bowlFrame*)));
    connect(ui->bowlFrame_10,SIGNAL(mouseClick_OurFrameObj(bowlFrame*)),ui->bowlPinMap_ball2,SLOT(setCurrentFrame(bowlFrame*)));
}

/**
 * @publicsection
 * @author EHerrera
 * @date 7/30/15                                                      **//**
 * @addtogroup MainWindow
 * @brief  Destructor: free up any allocated memory.
 * @param[in] none
 * @param[out] none
 * @return none
 *
 * @details
 */
MainWindow::~MainWindow()
{
    delete ui;
}
