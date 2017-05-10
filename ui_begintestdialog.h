/********************************************************************************
** Form generated from reading UI file 'begintestdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BEGINTESTDIALOG_H
#define UI_BEGINTESTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BeginTestDialog
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *testQuantity;
    QLabel *testTime;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton;

    void setupUi(QWidget *BeginTestDialog)
    {
        if (BeginTestDialog->objectName().isEmpty())
            BeginTestDialog->setObjectName(QStringLiteral("BeginTestDialog"));
        BeginTestDialog->resize(300, 200);
        verticalLayoutWidget = new QWidget(BeginTestDialog);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(9, 9, 281, 181));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        testQuantity = new QLabel(verticalLayoutWidget);
        testQuantity->setObjectName(QStringLiteral("testQuantity"));

        verticalLayout->addWidget(testQuantity);

        testTime = new QLabel(verticalLayoutWidget);
        testTime->setObjectName(QStringLiteral("testTime"));

        verticalLayout->addWidget(testTime);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton_2 = new QPushButton(verticalLayoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setEnabled(false);

        horizontalLayout->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(BeginTestDialog);

        QMetaObject::connectSlotsByName(BeginTestDialog);
    } // setupUi

    void retranslateUi(QWidget *BeginTestDialog)
    {
        BeginTestDialog->setWindowTitle(QApplication::translate("BeginTestDialog", "Begin Test", 0));
        label->setText(QApplication::translate("BeginTestDialog", "Test Infomation:", 0));
        testQuantity->setText(QApplication::translate("BeginTestDialog", "Number ", 0));
        testTime->setText(QApplication::translate("BeginTestDialog", "Time", 0));
        pushButton_2->setText(QApplication::translate("BeginTestDialog", "Cancel", 0));
        pushButton->setText(QApplication::translate("BeginTestDialog", "Begin", 0));
    } // retranslateUi

};

namespace Ui {
    class BeginTestDialog: public Ui_BeginTestDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BEGINTESTDIALOG_H
