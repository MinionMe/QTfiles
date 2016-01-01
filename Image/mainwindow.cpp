#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>
#include <QString>
int src = 0;
QString a[] = {":/new/prefix1/1.jpg",":/new/prefix1/2.jpg",":/new/prefix1/3.jpg"};
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(On_click()));
    ui->pushButton_2->setIcon(QPixmap(a[src]));
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::On_click()
{
    src++;
    src = src % 3;
    ui->pushButton_2->setIcon(QPixmap(a[src]));
}

