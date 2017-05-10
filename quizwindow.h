#ifndef QUIZWINDOW_H
#define QUIZWINDOW_H

#include <QWidget>
#include <QTime>
#include <QTimer>

#include "testeditoranswer.h"
#include "teststorage.h"

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
    int currentTest = 0;
    int rightAnswers = 0;
    int timeLeftInSeconds = 0;
    QTimer *timer = NULL;
    TestStorage *testStorage = NULL;

    void endTest();

private slots:
    void updateTime();

};

#endif // QUIZWINDOW_H
