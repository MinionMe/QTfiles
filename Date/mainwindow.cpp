#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>
#include <QInputDialog>
#include <QDebug>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{ 
    ui->setupUi(this);
    connect(ui->actionDate,SIGNAL(triggered()),this,SLOT(date()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::date()
{
    bool ok = 0;
    QString text = QInputDialog::getText(NULL,
                       "InputDialog",
                       "Please enter the date" ,
                       QLineEdit::Normal, QString::null, &ok,0);
    if ( ok && !text.isEmpty() )
         qDebug() << text;// 用户输入一些东西并且按下OK
    else
         this->close();// 用户不输入任何东西或者按下Cancel
}
