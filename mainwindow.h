#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>

#include "loginform.h"
#include "testeditor.h"
#include "begintestdialog.h"
#include "quizwindow.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();


public slots:
    void logIn(QString login, QString password);
    void beginTest();

private slots:
    void on_actionEdit_Test_triggered();

    void on_actionBegin_Test_triggered();

    void on_actionLog_Off_triggered();

    void on_actionExit_triggered();



private:
    Ui::MainWindow *ui;
    LoginForm *loginForm = NULL;
    TestEditor *testEditor = NULL;
    BeginTestDialog *beginTestDialog = NULL;
    QuizWindow *quizWindow = NULL;

};

#endif // MAINWINDOW_H
