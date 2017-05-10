#ifndef QUIZWINDOW_H
#define QUIZWINDOW_H

#include <QWidget>
#include <QTime>
#include <QTimer>
#include <QMapIterator>
#include <QListWidgetItem>
#include <QDebug>

#include "testeditoranswer.h"
#include "teststorage.h"
#include "testunit.h"
#include "testresultwindow.h"

namespace Ui {
class QuizWindow;
}

class QuizWindow : public QWidget
{
    Q_OBJECT

public:
    explicit QuizWindow(QWidget *parent = 0);
    ~QuizWindow();

private:
    Ui::QuizWindow *ui;
    QVector <TestEditorAnswer*> answers;
    int currentTestIndex = 0;
    int rightAnswers = 0;
    int timeLeftInSeconds = 0;
    QTimer *timer = NULL;
    TestStorage *testStorage = NULL;
    QMapIterator <QListWidgetItem*, TestUnit*> *testListIterator;
    TestUnit *currentTest = NULL;
    TestResultWindow *testResultWindow = NULL;

    void endTest();
    void updateTestLabel();
    bool checkIfTestIsCorrect();

private slots:
    void updateTime();
    bool loadTest(TestUnit *testUnit);

    void on_pushButton_clicked();
};

#endif // QUIZWINDOW_H
