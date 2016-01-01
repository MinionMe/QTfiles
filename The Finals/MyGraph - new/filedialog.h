#ifndef FILEDIALOG_H
#define FILEDIALOG_H

#include <QDialog>
#include "ui_filedialog.h"
#include "topicgraph.h"
#include "paperconferenceauthorgraph.h"
#include <QFileDialog>

class fileDialog : public QDialog
{
	Q_OBJECT

public:
	fileDialog(QWidget *parent = 0);
	~fileDialog();
	Ui::fileDialog *ui;
	QFileDialog m_fileDialog;
signals:
	void loadPCADatafinished();
	void loadTopicDatafinished();
	void paintReadyPCA();
	void paintReadyTopic();
public slots:
	void manage();
};

#endif // FILEDIALOG_H