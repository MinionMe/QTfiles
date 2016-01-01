#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->CelsiusDial, SIGNAL(valueChanged(int)), &tempConverter, SLOT(setTempCelsius(int)));
    connect(ui->CelsiusDial, SIGNAL(valueChanged(int)), ui->CelsiusLcd, SLOT(display(int)));
    connect(&tempConverter, SIGNAL(tempCelsiusChanged(int)), ui->CelsiusDial, SLOT(setValue(int)));

    connect(ui->FahrenheitDial, SIGNAL(valueChanged(int)), &tempConverter, SLOT(setTempFahrenheit(int)));
    connect(ui->FahrenheitDial, SIGNAL(valueChanged(int)), ui->FahrenheitLcd, SLOT(display(int)));
    connect(&tempConverter, SIGNAL(tempFahrenheitChanged(int)), ui->FahrenheitDial, SLOT(setValue(int)));
}

MainWindow::~MainWindow()
{
    delete ui;
}
