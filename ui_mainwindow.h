/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionLog_Off;
    QAction *actionExit;
    QAction *actionBegin_Test;
    QAction *actionEdit_Test;
    QAction *actionAbout;
    QWidget *centralWidget;
    QWidget *widget;
    QStatusBar *statusBar;
    QMenuBar *menuBar;
    QMenu *menuMain;
    QMenu *menuHelp;
    QMenu *menuHelp_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(800, 600);
        actionLog_Off = new QAction(MainWindow);
        actionLog_Off->setObjectName(QStringLiteral("actionLog_Off"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionBegin_Test = new QAction(MainWindow);
        actionBegin_Test->setObjectName(QStringLiteral("actionBegin_Test"));
        actionEdit_Test = new QAction(MainWindow);
        actionEdit_Test->setObjectName(QStringLiteral("actionEdit_Test"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 0, 801, 551));
        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 800, 21));
        menuMain = new QMenu(menuBar);
        menuMain->setObjectName(QStringLiteral("menuMain"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        menuHelp_2 = new QMenu(menuBar);
        menuHelp_2->setObjectName(QStringLiteral("menuHelp_2"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuMain->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuBar->addAction(menuHelp_2->menuAction());
        menuMain->addAction(actionLog_Off);
        menuMain->addAction(actionExit);
        menuHelp->addAction(actionBegin_Test);
        menuHelp->addAction(actionEdit_Test);
        menuHelp_2->addAction(actionAbout);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Test System", 0));
        actionLog_Off->setText(QApplication::translate("MainWindow", "Log Off", 0));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", 0));
        actionBegin_Test->setText(QApplication::translate("MainWindow", "Begin Test", 0));
        actionEdit_Test->setText(QApplication::translate("MainWindow", "Edit Test", 0));
        actionAbout->setText(QApplication::translate("MainWindow", "About", 0));
        menuMain->setTitle(QApplication::translate("MainWindow", "Main", 0));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Test", 0));
        menuHelp_2->setTitle(QApplication::translate("MainWindow", "Help", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
