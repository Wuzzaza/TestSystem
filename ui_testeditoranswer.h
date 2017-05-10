/********************************************************************************
** Form generated from reading UI file 'testeditoranswer.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTEDITORANSWER_H
#define UI_TESTEDITORANSWER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TestEditorAnswer
{
public:
    QCheckBox *checkBox;
    QTextEdit *textEdit;

    void setupUi(QWidget *TestEditorAnswer)
    {
        if (TestEditorAnswer->objectName().isEmpty())
            TestEditorAnswer->setObjectName(QStringLiteral("TestEditorAnswer"));
        TestEditorAnswer->resize(300, 100);
        checkBox = new QCheckBox(TestEditorAnswer);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(280, 40, 70, 17));
        textEdit = new QTextEdit(TestEditorAnswer);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(10, 10, 261, 81));

        retranslateUi(TestEditorAnswer);

        QMetaObject::connectSlotsByName(TestEditorAnswer);
    } // setupUi

    void retranslateUi(QWidget *TestEditorAnswer)
    {
        TestEditorAnswer->setWindowTitle(QApplication::translate("TestEditorAnswer", "Form", 0));
        checkBox->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class TestEditorAnswer: public Ui_TestEditorAnswer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTEDITORANSWER_H
