#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QEvent>
#include <QDebug>
#include <QKeyEvent>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    bool MainWindow::eventFilter(QObject*obj, QEvent*event);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
