/********************************************************************************
** Form generated from reading UI file 'testresultwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTRESULTWINDOW_H
#define UI_TESTRESULTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TestResultWindow
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *resultLabel;
    QLabel *timeLabel;
    QPushButton *pushButton;

    void setupUi(QWidget *TestResultWindow)
    {
        if (TestResultWindow->objectName().isEmpty())
            TestResultWindow->setObjectName(QStringLiteral("TestResultWindow"));
        TestResultWindow->resize(300, 200);
        verticalLayoutWidget = new QWidget(TestResultWindow);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(9, 9, 281, 181));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        resultLabel = new QLabel(verticalLayoutWidget);
        resultLabel->setObjectName(QStringLiteral("resultLabel"));
        QFont font;
        font.setPointSize(8);
        resultLabel->setFont(font);
        resultLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout->addWidget(resultLabel);

        timeLabel = new QLabel(verticalLayoutWidget);
        timeLabel->setObjectName(QStringLiteral("timeLabel"));

        verticalLayout->addWidget(timeLabel);

        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);


        retranslateUi(TestResultWindow);

        QMetaObject::connectSlotsByName(TestResultWindow);
    } // setupUi

    void retranslateUi(QWidget *TestResultWindow)
    {
        TestResultWindow->setWindowTitle(QApplication::translate("TestResultWindow", "Form", 0));
        label->setText(QApplication::translate("TestResultWindow", "Test Results:", 0));
        resultLabel->setText(QString());
        timeLabel->setText(QApplication::translate("TestResultWindow", "TextLabel", 0));
        pushButton->setText(QApplication::translate("TestResultWindow", "Ok", 0));
    } // retranslateUi

};

namespace Ui {
    class TestResultWindow: public Ui_TestResultWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTRESULTWINDOW_H
