#include "mainwindow.h"
#include "ui_mainwindow.h"

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

MainWindow::~MainWindow()
{
    delete ui;
}
