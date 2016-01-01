/********************************************************************************
** Form generated from reading UI file 'filedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILEDIALOG_H
#define UI_FILEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_fileDialog
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButtonPCA;
    QRadioButton *radioButtonTopic;
    QDialogButtonBox *buttonBox;
    QLabel *label;

    void setupUi(QDialog *fileDialog)
    {
        if (fileDialog->objectName().isEmpty())
            fileDialog->setObjectName(QStringLiteral("fileDialog"));
        fileDialog->resize(385, 273);
        layoutWidget = new QWidget(fileDialog);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(70, 70, 221, 71));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        radioButtonPCA = new QRadioButton(layoutWidget);
        radioButtonPCA->setObjectName(QStringLiteral("radioButtonPCA"));

        verticalLayout->addWidget(radioButtonPCA);

        radioButtonTopic = new QRadioButton(layoutWidget);
        radioButtonTopic->setObjectName(QStringLiteral("radioButtonTopic"));

        verticalLayout->addWidget(radioButtonTopic);

        buttonBox = new QDialogButtonBox(fileDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(20, 200, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(fileDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 50, 219, 25));

        retranslateUi(fileDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), fileDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), fileDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(fileDialog);
    } // setupUi

    void retranslateUi(QDialog *fileDialog)
    {
        fileDialog->setWindowTitle(QApplication::translate("fileDialog", "fileDialog", 0));
        radioButtonPCA->setText(QApplication::translate("fileDialog", "PaperConferenceAuthorGraph", 0));
        radioButtonTopic->setText(QApplication::translate("fileDialog", "TopicGraph", 0));
        label->setText(QApplication::translate("fileDialog", "\351\200\211\346\213\251\345\233\276\347\211\207", 0));
    } // retranslateUi

};

namespace Ui {
    class fileDialog: public Ui_fileDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILEDIALOG_H
