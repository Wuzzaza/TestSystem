/********************************************************************************
** Form generated from reading UI file 'testeditor.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTEDITOR_H
#define UI_TESTEDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TestEditor
{
public:
    QListWidget *listWidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QTextEdit *textEdit;
    QPushButton *pushButton_3;
    QGroupBox *groupBox;
    QPushButton *pushButton_4;
    QGroupBox *groupBox_2;
    QLineEdit *lineEdit;

    void setupUi(QWidget *TestEditor)
    {
        if (TestEditor->objectName().isEmpty())
            TestEditor->setObjectName(QStringLiteral("TestEditor"));
        TestEditor->resize(800, 600);
        listWidget = new QListWidget(TestEditor);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(610, 10, 181, 271));
        pushButton = new QPushButton(TestEditor);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(620, 290, 75, 23));
        pushButton_2 = new QPushButton(TestEditor);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(710, 290, 75, 23));
        textEdit = new QTextEdit(TestEditor);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(10, 10, 591, 271));
        pushButton_3 = new QPushButton(TestEditor);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(500, 520, 91, 23));
        groupBox = new QGroupBox(TestEditor);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(5, 280, 601, 238));
        pushButton_4 = new QPushButton(TestEditor);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(400, 520, 91, 23));
        groupBox_2 = new QGroupBox(TestEditor);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(615, 327, 171, 191));
        lineEdit = new QLineEdit(groupBox_2);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(10, 20, 151, 20));

        retranslateUi(TestEditor);

        QMetaObject::connectSlotsByName(TestEditor);
    } // setupUi

    void retranslateUi(QWidget *TestEditor)
    {
        TestEditor->setWindowTitle(QApplication::translate("TestEditor", "Form", 0));
        pushButton->setText(QApplication::translate("TestEditor", "Add", 0));
        pushButton_2->setText(QApplication::translate("TestEditor", "Remove", 0));
        pushButton_3->setText(QApplication::translate("TestEditor", "Save Test", 0));
        groupBox->setTitle(QApplication::translate("TestEditor", "Answers", 0));
        pushButton_4->setText(QApplication::translate("TestEditor", "Discard", 0));
        groupBox_2->setTitle(QApplication::translate("TestEditor", "Time for test (minutes)", 0));
    } // retranslateUi

};

namespace Ui {
    class TestEditor: public Ui_TestEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTEDITOR_H
