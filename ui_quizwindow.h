/********************************************************************************
** Form generated from reading UI file 'quizwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUIZWINDOW_H
#define UI_QUIZWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QuizWindow
{
public:
    QTextEdit *textEdit;
    QLabel *testNumberLabel;
    QGroupBox *groupBox;
    QPushButton *pushButton;
    QGroupBox *groupBox_2;
    QLabel *timeLeftLabel;

    void setupUi(QWidget *QuizWindow)
    {
        if (QuizWindow->objectName().isEmpty())
            QuizWindow->setObjectName(QStringLiteral("QuizWindow"));
        QuizWindow->resize(800, 600);
        textEdit = new QTextEdit(QuizWindow);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(10, 30, 591, 221));
        textEdit->setFocusPolicy(Qt::NoFocus);
        textEdit->setReadOnly(true);
        testNumberLabel = new QLabel(QuizWindow);
        testNumberLabel->setObjectName(QStringLiteral("testNumberLabel"));
        testNumberLabel->setGeometry(QRect(10, 0, 541, 31));
        groupBox = new QGroupBox(QuizWindow);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(5, 260, 600, 221));
        pushButton = new QPushButton(QuizWindow);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(530, 480, 75, 23));
        groupBox_2 = new QGroupBox(QuizWindow);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(610, 20, 181, 61));
        timeLeftLabel = new QLabel(groupBox_2);
        timeLeftLabel->setObjectName(QStringLiteral("timeLeftLabel"));
        timeLeftLabel->setGeometry(QRect(10, 20, 161, 31));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        timeLeftLabel->setFont(font);
        timeLeftLabel->setCursor(QCursor(Qt::ArrowCursor));
        timeLeftLabel->setAlignment(Qt::AlignCenter);

        retranslateUi(QuizWindow);

        QMetaObject::connectSlotsByName(QuizWindow);
    } // setupUi

    void retranslateUi(QWidget *QuizWindow)
    {
        QuizWindow->setWindowTitle(QApplication::translate("QuizWindow", "Form", 0));
        testNumberLabel->setText(QApplication::translate("QuizWindow", "TextLabel", 0));
        groupBox->setTitle(QApplication::translate("QuizWindow", "Your answer", 0));
        pushButton->setText(QApplication::translate("QuizWindow", "Next", 0));
        groupBox_2->setTitle(QApplication::translate("QuizWindow", "Time Left", 0));
        timeLeftLabel->setText(QApplication::translate("QuizWindow", "00:00", 0));
    } // retranslateUi

};

namespace Ui {
    class QuizWindow: public Ui_QuizWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUIZWINDOW_H
