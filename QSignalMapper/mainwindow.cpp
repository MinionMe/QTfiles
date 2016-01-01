#include "mainwindow.h"
#include "ui_mainwindow.h"



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),m_value(0),qSignalMapper(this),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton_1, SIGNAL(clicked()), &qSignalMapper, SLOT(map()));
    qSignalMapper.setMapping(ui->pushButton_1, 1);
    connect(ui->pushButton_2, SIGNAL(clicked()), &qSignalMapper, SLOT(map()));
    qSignalMapper.setMapping(ui->pushButton_2, 2);
    connect(ui->pushButton_3, SIGNAL(clicked()), &qSignalMapper, SLOT(map()));
    qSignalMapper.setMapping(ui->pushButton_3, 3);
    connect(ui->pushButton_4, SIGNAL(clicked()), &qSignalMapper, SLOT(map()));
    qSignalMapper.setMapping(ui->pushButton_4, 4);
    connect(ui->pushButton_5, SIGNAL(clicked()), &qSignalMapper, SLOT(map()));
    qSignalMapper.setMapping(ui->pushButton_5, 5);
    connect(ui->pushButton_6, SIGNAL(clicked()), &qSignalMapper, SLOT(map()));
    qSignalMapper.setMapping(ui->pushButton_6, 6);
    connect(ui->pushButton_7, SIGNAL(clicked()), &qSignalMapper, SLOT(map()));
    qSignalMapper.setMapping(ui->pushButton_7, 7);
    connect(ui->pushButton_8, SIGNAL(clicked()), &qSignalMapper, SLOT(map()));
    qSignalMapper.setMapping(ui->pushButton_8, 8);
    connect(ui->pushButton_9, SIGNAL(clicked()), &qSignalMapper, SLOT(map()));
    qSignalMapper.setMapping(ui->pushButton_9, 9);
    connect(ui->pushButton_0, SIGNAL(clicked()), &qSignalMapper, SLOT(map()));
    qSignalMapper.setMapping(ui->pushButton_0, 0);
    connect(&qSignalMapper, SIGNAL(mapped(int)), ui->lcdNumber, SLOT(display(int)));
}

MainWindow::~MainWindow()
{
    delete ui;
}
