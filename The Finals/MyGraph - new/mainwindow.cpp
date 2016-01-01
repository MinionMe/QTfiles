#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "graphwidget.h"
#include <QDebug>
#include <QColor>
#include <QPen>
#include <map>
#include <QMessageBox>

PaperConferenceAuthorGraph PCAgraph;
TopicGraph topicGraph;
int boxNum = 0;
double nodeRadius = 0;
double linewidth = 0;
QString textBrowser;
int searchtype = 1;
int searchid = 0;
int colorNodeChange = 1;
int colorEdgeChange = 1;
QColor edgeColor;
QColor nodeColor;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{	
	m_widget = new GraphWidget;
    ui->setupUi(this);
	this->setCentralWidget(m_widget);
	connect(ui->actionOpen,SIGNAL(triggered()),&m_dialog,SLOT(show()));
	connect(&m_dialog,SIGNAL(paintReadyPCA()),m_widget,SLOT(beginPaint()));
	connect(&m_dialog,SIGNAL(paintReadyTopic()),m_widget,SLOT(beginPaint()));
	connect(ui->pushButton_in,SIGNAL(clicked()),m_widget,SLOT(zoomIn()));
	connect(ui->pushButton_out,SIGNAL(clicked()),m_widget,SLOT(zoomOut()));
	connect(ui->actionZoomIn,SIGNAL(triggered()),m_widget,SLOT(zoomIn()));
	connect(ui->actionZoomOut,SIGNAL(triggered()),m_widget,SLOT(zoomOut()));
	connect(this,SIGNAL(paintReady()),m_widget,SLOT(beginPaint()));
	connect(ui->comboBox,SIGNAL(currentIndexChanged(int)),this,SLOT(dealCombobox()));
	connect(ui->comboBox_colorNode,SIGNAL(currentIndexChanged(int)),this,SLOT(dealsetNodeColor()));
	connect(ui->comboBox_colorEdge,SIGNAL(currentIndexChanged(int)),this,SLOT(dealsetEdgeColor()));
	connect(this,SIGNAL(setEdgeColorReady()),m_widget,SLOT(setEdgeColor()));
	connect(this,SIGNAL(setNodeColorReady()),m_widget,SLOT(setNodeColor()));
	connect(ui->pushButton_left,SIGNAL(clicked()),m_widget,SLOT(rotLeft()));
	connect(ui->pushButton_right,SIGNAL(clicked()),m_widget,SLOT(rotRight()));
	connect(ui->pushButton_shuffle,SIGNAL(clicked()),m_widget,SLOT(shuffle()));
	connect(ui->horizontalSlider_node,SIGNAL(valueChanged(int)),this,SLOT(dealSliderNode()));
	connect(ui->horizontalSlider_line,SIGNAL(valueChanged(int)),this,SLOT(dealSliderLine()));
	connect(this,SIGNAL(lineReady()),m_widget,SLOT(setLineWidth()));
	connect(this,SIGNAL(nodeReady()),m_widget,SLOT(setNoderadius()));
	connect(ui->actionOpenPixmap,SIGNAL(triggered()),this,SLOT(openFileDialog()));
	connect(ui->actionSave,SIGNAL(triggered()),m_widget,SLOT(saveGraph()));
	connect(ui->pushButton_hide,SIGNAL(clicked()),m_widget,SLOT(hideItem()));
	connect(ui->pushButton_show,SIGNAL(clicked()),m_widget,SLOT(showItem()));
	connect(ui->actionSearchID,SIGNAL(triggered()),this,SLOT(searchID()));
	connect(ui->actionSearchType,SIGNAL(triggered()),this,SLOT(searchType()));
	connect(this,SIGNAL(searchIDReady()),m_widget,SLOT(searchNodeId()));
	connect(this,SIGNAL(searchTypeReady()),m_widget,SLOT(searchNodeType()));
	connect(ui->actionWriter,SIGNAL(triggered()),this,SLOT(aboutWriter()));
	connect(ui->actionQt,SIGNAL(triggered()),this,SLOT(aboutMyQt()));
	
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::dealCombobox()
{
	boxNum = ui->comboBox->currentIndex();
	emit paintReady();
}
void MainWindow::dealsetNodeColor()
{
	if (ui->comboBox_colorNode->currentText() == "default")
	{
		colorNodeChange = 0;
	}
	if (ui->comboBox_colorNode->currentText() == "blue")
	{
		nodeColor = Qt::blue;
		colorNodeChange = 1;
	}
	if (ui->comboBox_colorNode->currentText() == "darkGray")
	{
		nodeColor = Qt::darkGray;
		colorNodeChange = 1;
	}
	if (ui->comboBox_colorNode->currentText() == "white")
	{
		nodeColor = Qt::white;
		colorNodeChange = 1;
	}
	if (ui->comboBox_colorNode->currentText() == "black")
	{
		nodeColor = Qt::black;
		colorNodeChange = 1;
	}
	if (ui->comboBox_colorNode->currentText() == "green")
	{
		nodeColor = Qt::green;
		colorNodeChange = 1;
	}
	if (ui->comboBox_colorNode->currentText() == "gray")
	{
		nodeColor = Qt::gray;
		colorNodeChange = 1;
	}
	if (ui->comboBox_colorNode->currentText() == "red")
	{
		nodeColor = Qt::red;
		colorNodeChange = 1;
	}
	if (ui->comboBox_colorNode->currentText() == "magenta")
	{
		nodeColor = Qt::magenta;
		colorNodeChange = 1;
	}
	if (ui->comboBox_colorNode->currentText() == "cyan")
	{
		nodeColor = Qt::cyan;
		colorNodeChange = 1;
	}
	if (ui->comboBox_colorNode->currentText() == "yellow")
	{
		nodeColor = Qt::yellow;
		colorNodeChange = 1;
	}
	emit setNodeColorReady();
}
void MainWindow::dealsetEdgeColor()
{
	if (ui->comboBox_colorEdge->currentText() == "default")
	{
		colorEdgeChange = 0;
	}
	if (ui->comboBox_colorEdge->currentText() == "blue")
	{
		edgeColor = Qt::blue;
		colorEdgeChange = 1;
	}
	if (ui->comboBox_colorEdge->currentText() == "white")
	{
		edgeColor = Qt::white;
		colorEdgeChange = 1;
	}
	if (ui->comboBox_colorEdge->currentText() == "black")
	{
		edgeColor = Qt::black;
		colorEdgeChange = 1;
	}
	if (ui->comboBox_colorEdge->currentText() == "green")
	{
		edgeColor = Qt::green;
		colorEdgeChange = 1;
	}
	if (ui->comboBox_colorEdge->currentText() == "gray")
	{
		edgeColor = Qt::gray;
		colorEdgeChange = 1;
	}
	if (ui->comboBox_colorEdge->currentText() == "red")
	{
		edgeColor = Qt::red;
		colorEdgeChange = 1;
	}
	if (ui->comboBox_colorEdge->currentText() == "magenta")
	{
		edgeColor = Qt::magenta;
		colorEdgeChange = 1;
	}
	if (ui->comboBox_colorEdge->currentText() == "cyan")
	{
		edgeColor = Qt::cyan;
		colorEdgeChange = 1;
	}
	if (ui->comboBox_colorEdge->currentText() == "yellow")
	{
		edgeColor = Qt::yellow;
		colorEdgeChange = 1;
	}
	emit setEdgeColorReady();
}
void MainWindow::dealSliderLine()
{
	linewidth = ui->horizontalSlider_line->value() / 20;
	emit lineReady();
}
void MainWindow::dealSliderNode()
{
	nodeRadius = ui->horizontalSlider_node->value() / 20;
	emit nodeReady();
}
void MainWindow::openFileDialog()
{
	QString str = m_fileDialog.getOpenFileName();
	QPixmap *pixmap = new QPixmap(str);
	QGraphicsScene *m_scene = new QGraphicsScene(this);
	m_scene->setItemIndexMethod(QGraphicsScene::NoIndex);
	m_scene->setSceneRect(-400, -400, 1000, 1000);
	m_widget->setScene(m_scene);
	m_scene->addPixmap(*pixmap);
}
void MainWindow::searchID()
{
	bool ok = FALSE;
	searchid = m_inputDialogID.getInt(this,"Search ID","input ID",0, 0, 2147483647, 1, &ok);
	if (ok)
	{
		emit searchIDReady();
	}
	else 
		return;
}
void MainWindow::searchType()
{
	bool ok = FALSE;
	QString temp;
	temp = m_inputDialogID.getText(this,"Search Type","input Type",QLineEdit::Normal, QString::null, &ok);
	if (temp == "paper")
	{
		searchtype = 1;
	}
	if (temp == "conference")
	{
		searchtype = 2;
	}
	if (temp == "author")
	{
		searchtype = 3;
	}
	if (temp == "topic")
	{
		searchtype = 4;
	}
	if (ok)
	{
		emit searchTypeReady();
	}
	else 
		return;
}
void MainWindow::aboutWriter()
{
	
	QMessageBox::information(this, "About Writer",
		"Writer: Li Shuang.\n in 2015/08/06 at Tsinghua #1.");
	
}
void MainWindow::aboutMyQt()
{
	QMessageBox::aboutQt(this);
}