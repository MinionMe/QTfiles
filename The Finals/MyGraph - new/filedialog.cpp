#include "filedialog.h"
#include "ui_filedialog.h"
#include <QString>
#include "graphwidget.h"
extern int graphType;
extern PaperConferenceAuthorGraph PCAgraph;
extern TopicGraph topicGraph;
fileDialog::fileDialog(QWidget *parent)
	: QDialog(parent),ui(new Ui::fileDialog)
{
	ui->setupUi(this);
	connect(ui->buttonBox,SIGNAL(accepted()),this,SLOT(manage()));
}

void fileDialog::manage()
{
	if (ui->radioButtonPCA->isChecked())
	{
		QString str = m_fileDialog.getExistingDirectory();
		graphType = 1;
		PCAgraph.loadData(str);
		emit paintReadyPCA();
	}
	else if (ui->radioButtonTopic->isChecked())
	{
		QString str = m_fileDialog.getExistingDirectory();
		graphType = 2;
		topicGraph.loadData(str);
		emit paintReadyTopic();
	}
}

fileDialog::~fileDialog()
{

}
