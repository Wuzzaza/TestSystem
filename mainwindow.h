#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>

#include "loginform.h"
#include "testeditor.h"

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

private:
    Ui::MainWindow *ui;
    LoginForm *loginForm = NULL;
    TestEditor *testEditor = NULL;
};

#endif // MAINWINDOW_H
