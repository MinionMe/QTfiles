/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionZoomIn;
    QAction *actionZoomOut;
    QAction *actionOpenPixmap;
    QAction *actionSearchID;
    QAction *actionSearchType;
    QAction *actionWriter;
    QAction *actionQt;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QDockWidget *dockWidget;
    QWidget *dockWidgetContents_3;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QPushButton *pushButton_out;
    QPushButton *pushButton_in;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QPushButton *pushButton_left;
    QPushButton *pushButton_right;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_4;
    QComboBox *comboBox_colorNode;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_8;
    QComboBox *comboBox_colorEdge;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QSlider *horizontalSlider_line;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_6;
    QSlider *horizontalSlider_node;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_7;
    QPushButton *pushButton_hide;
    QPushButton *pushButton_show;
    QPushButton *pushButton_shuffle;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QComboBox *comboBox;
    QLabel *label_9;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1052, 638);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/image/Icon/6.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/image/Icon/Save File.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon1);
        actionZoomIn = new QAction(MainWindow);
        actionZoomIn->setObjectName(QStringLiteral("actionZoomIn"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/image/Icon/Zoom In.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionZoomIn->setIcon(icon2);
        actionZoomOut = new QAction(MainWindow);
        actionZoomOut->setObjectName(QStringLiteral("actionZoomOut"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/image/Icon/Zoom Out.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionZoomOut->setIcon(icon3);
        actionOpenPixmap = new QAction(MainWindow);
        actionOpenPixmap->setObjectName(QStringLiteral("actionOpenPixmap"));
        actionSearchID = new QAction(MainWindow);
        actionSearchID->setObjectName(QStringLiteral("actionSearchID"));
        actionSearchType = new QAction(MainWindow);
        actionSearchType->setObjectName(QStringLiteral("actionSearchType"));
        actionWriter = new QAction(MainWindow);
        actionWriter->setObjectName(QStringLiteral("actionWriter"));
        actionQt = new QAction(MainWindow);
        actionQt->setObjectName(QStringLiteral("actionQt"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1052, 23));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QStringLiteral("menu_2"));
        menu_3 = new QMenu(menuBar);
        menu_3->setObjectName(QStringLiteral("menu_3"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        dockWidget = new QDockWidget(MainWindow);
        dockWidget->setObjectName(QStringLiteral("dockWidget"));
        dockWidget->setMinimumSize(QSize(227, 400));
        dockWidget->setMaximumSize(QSize(227, 400));
        dockWidgetContents_3 = new QWidget();
        dockWidgetContents_3->setObjectName(QStringLiteral("dockWidgetContents_3"));
        layoutWidget = new QWidget(dockWidgetContents_3);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 10, 229, 329));
        verticalLayout_5 = new QVBoxLayout(layoutWidget);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        pushButton_out = new QPushButton(layoutWidget);
        pushButton_out->setObjectName(QStringLiteral("pushButton_out"));

        horizontalLayout->addWidget(pushButton_out);

        pushButton_in = new QPushButton(layoutWidget);
        pushButton_in->setObjectName(QStringLiteral("pushButton_in"));

        horizontalLayout->addWidget(pushButton_in);


        verticalLayout_5->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_3->addWidget(label);

        pushButton_left = new QPushButton(layoutWidget);
        pushButton_left->setObjectName(QStringLiteral("pushButton_left"));

        horizontalLayout_3->addWidget(pushButton_left);

        pushButton_right = new QPushButton(layoutWidget);
        pushButton_right->setObjectName(QStringLiteral("pushButton_right"));

        horizontalLayout_3->addWidget(pushButton_right);


        verticalLayout_5->addLayout(horizontalLayout_3);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_7->addWidget(label_4);

        comboBox_colorNode = new QComboBox(layoutWidget);
        comboBox_colorNode->setObjectName(QStringLiteral("comboBox_colorNode"));

        horizontalLayout_7->addWidget(comboBox_colorNode);


        verticalLayout_5->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_8->addWidget(label_8);

        comboBox_colorEdge = new QComboBox(layoutWidget);
        comboBox_colorEdge->setObjectName(QStringLiteral("comboBox_colorEdge"));

        horizontalLayout_8->addWidget(comboBox_colorEdge);


        verticalLayout_5->addLayout(horizontalLayout_8);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_4->addWidget(label_5);

        horizontalSlider_line = new QSlider(layoutWidget);
        horizontalSlider_line->setObjectName(QStringLiteral("horizontalSlider_line"));
        horizontalSlider_line->setMaximum(99);
        horizontalSlider_line->setSingleStep(1);
        horizontalSlider_line->setSliderPosition(50);
        horizontalSlider_line->setOrientation(Qt::Horizontal);

        horizontalLayout_4->addWidget(horizontalSlider_line);


        verticalLayout_5->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_5->addWidget(label_6);

        horizontalSlider_node = new QSlider(layoutWidget);
        horizontalSlider_node->setObjectName(QStringLiteral("horizontalSlider_node"));
        horizontalSlider_node->setSliderPosition(50);
        horizontalSlider_node->setOrientation(Qt::Horizontal);

        horizontalLayout_5->addWidget(horizontalSlider_node);


        verticalLayout_5->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_6->addWidget(label_7);

        pushButton_hide = new QPushButton(layoutWidget);
        pushButton_hide->setObjectName(QStringLiteral("pushButton_hide"));

        horizontalLayout_6->addWidget(pushButton_hide);

        pushButton_show = new QPushButton(layoutWidget);
        pushButton_show->setObjectName(QStringLiteral("pushButton_show"));

        horizontalLayout_6->addWidget(pushButton_show);


        verticalLayout_5->addLayout(horizontalLayout_6);

        pushButton_shuffle = new QPushButton(layoutWidget);
        pushButton_shuffle->setObjectName(QStringLiteral("pushButton_shuffle"));

        verticalLayout_5->addWidget(pushButton_shuffle);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_2->addWidget(label_3);

        comboBox = new QComboBox(layoutWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        horizontalLayout_2->addWidget(comboBox);


        verticalLayout_5->addLayout(horizontalLayout_2);

        label_9 = new QLabel(dockWidgetContents_3);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(10, 350, 54, 12));
        dockWidget->setWidget(dockWidgetContents_3);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(2), dockWidget);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menuBar->addAction(menu_3->menuAction());
        menu->addAction(actionOpen);
        menu->addAction(actionOpenPixmap);
        menu->addAction(actionSave);
        menu_2->addAction(actionSearchID);
        menu_2->addAction(actionSearchType);
        menu_3->addAction(actionQt);
        menu_3->addAction(actionWriter);
        mainToolBar->addAction(actionOpen);
        mainToolBar->addAction(actionSave);
        mainToolBar->addAction(actionZoomOut);
        mainToolBar->addAction(actionZoomIn);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MyGraph", 0));
        actionOpen->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200\346\226\207\344\273\266\345\244\271", 0));
        actionOpen->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", 0));
        actionSave->setText(QApplication::translate("MainWindow", "\344\277\235\345\255\230", 0));
        actionSave->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", 0));
        actionZoomIn->setText(QApplication::translate("MainWindow", "ZoomIn", 0));
        actionZoomIn->setShortcut(QApplication::translate("MainWindow", "M", 0));
        actionZoomOut->setText(QApplication::translate("MainWindow", "ZoomOut", 0));
        actionZoomOut->setShortcut(QApplication::translate("MainWindow", "N", 0));
        actionOpenPixmap->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200\345\233\276\347\211\207", 0));
        actionSearchID->setText(QApplication::translate("MainWindow", "\346\220\234\347\264\242NodeID", 0));
        actionSearchType->setText(QApplication::translate("MainWindow", "\346\220\234\347\264\242NodeType", 0));
        actionWriter->setText(QApplication::translate("MainWindow", "\345\205\263\344\272\216\344\275\234\350\200\205", 0));
        actionQt->setText(QApplication::translate("MainWindow", "\345\205\263\344\272\216\345\274\200\345\217\221", 0));
        menu->setTitle(QApplication::translate("MainWindow", "\346\226\207\344\273\266", 0));
        menu_2->setTitle(QApplication::translate("MainWindow", "\347\274\226\350\276\221", 0));
        menu_3->setTitle(QApplication::translate("MainWindow", "\345\270\256\345\212\251", 0));
        mainToolBar->setWindowTitle(QApplication::translate("MainWindow", "\345\267\245\345\205\267\346\240\217", 0));
        dockWidget->setWindowTitle(QApplication::translate("MainWindow", "\346\223\215\344\275\234\346\240\217", 0));
        label_2->setText(QApplication::translate("MainWindow", "\344\274\270\347\274\251", 0));
        pushButton_out->setText(QApplication::translate("MainWindow", "-", 0));
        pushButton_out->setShortcut(QApplication::translate("MainWindow", "-", 0));
        pushButton_in->setText(QApplication::translate("MainWindow", "+", 0));
        pushButton_in->setShortcut(QApplication::translate("MainWindow", "+", 0));
        label->setText(QApplication::translate("MainWindow", "\346\227\213\350\275\254", 0));
        pushButton_left->setText(QApplication::translate("MainWindow", "\345\267\246\346\227\213", 0));
        pushButton_right->setText(QApplication::translate("MainWindow", "\345\217\263\346\227\213", 0));
        label_4->setText(QApplication::translate("MainWindow", "\350\256\276\347\275\256Node\351\242\234\350\211\262", 0));
        comboBox_colorNode->clear();
        comboBox_colorNode->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "default", 0)
         << QApplication::translate("MainWindow", "darkGray", 0)
         << QApplication::translate("MainWindow", "yellow", 0)
         << QApplication::translate("MainWindow", "white", 0)
         << QApplication::translate("MainWindow", "black", 0)
         << QApplication::translate("MainWindow", "green", 0)
         << QApplication::translate("MainWindow", "cyan", 0)
         << QApplication::translate("MainWindow", "blue", 0)
         << QApplication::translate("MainWindow", "gray", 0)
         << QApplication::translate("MainWindow", "red", 0)
         << QApplication::translate("MainWindow", "magenta", 0)
        );
        label_8->setText(QApplication::translate("MainWindow", "\350\256\276\347\275\256Edge\351\242\234\350\211\262", 0));
        comboBox_colorEdge->clear();
        comboBox_colorEdge->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "default", 0)
         << QApplication::translate("MainWindow", "yellow", 0)
         << QApplication::translate("MainWindow", "white", 0)
         << QApplication::translate("MainWindow", "black", 0)
         << QApplication::translate("MainWindow", "green", 0)
         << QApplication::translate("MainWindow", "cyan", 0)
         << QApplication::translate("MainWindow", "blue", 0)
         << QApplication::translate("MainWindow", "gray", 0)
         << QApplication::translate("MainWindow", "red", 0)
         << QApplication::translate("MainWindow", "magenta", 0)
        );
        label_5->setText(QApplication::translate("MainWindow", "\347\272\277\345\256\275", 0));
        label_6->setText(QApplication::translate("MainWindow", "\347\202\271\345\215\212\345\276\204", 0));
        label_7->setText(QApplication::translate("MainWindow", "\346\230\276\347\244\272Item", 0));
        pushButton_hide->setText(QApplication::translate("MainWindow", "\351\232\220\350\227\217\346\211\200\351\200\211", 0));
        pushButton_show->setText(QApplication::translate("MainWindow", "\346\230\276\347\244\272\346\211\200\346\234\211", 0));
        pushButton_shuffle->setText(QApplication::translate("MainWindow", "\351\232\217\346\234\272\346\214\257\345\212\250", 0));
        label_3->setText(QApplication::translate("MainWindow", "\351\200\211\346\213\251VTK\347\256\227\346\263\225", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "CircularLayout", 0)
         << QApplication::translate("MainWindow", "Fast2DLayout", 0)
         << QApplication::translate("MainWindow", "ForceDirectedLayout", 0)
         << QApplication::translate("MainWindow", "PassThroughLayout", 0)
         << QApplication::translate("MainWindow", "RandomLayout", 0)
         << QApplication::translate("MainWindow", "Simple2DLayout", 0)
        );
        label_9->setText(QApplication::translate("MainWindow", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
