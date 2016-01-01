#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileDialog>
#include <QInputDialog>
#include "filedialog.h"
#include "paperconferenceauthorgraph.h"
#include "topicgraph.h"
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QColor>

using namespace std;
namespace Ui {
class MainWindow;
}
class GraphWidget;

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
signals:
	void paintReady();
	void lineReady();
	void nodeReady();
	void searchIDReady();
	void searchTypeReady();
	void setNodeColorReady();
	void setEdgeColorReady();
public slots:
	void dealCombobox();
	void dealSliderLine();
	void dealSliderNode();
	void openFileDialog();
	void searchID();
	void searchType();
	void dealsetNodeColor();
	void dealsetEdgeColor();
	void aboutWriter();
	void aboutMyQt();
public:
	Ui::MainWindow *ui;
	QInputDialog m_inputDialogID;
	QInputDialog m_inputDialogType;
	QFileDialog m_fileDialog;
	fileDialog m_dialog;
	GraphWidget *m_widget;
};

#endif // MAINWINDOW_H