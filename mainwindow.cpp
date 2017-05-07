#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setFixedSize(800, 600);
    loginForm = new LoginForm(this);
    testEditor = new TestEditor(this);

    connect(loginForm, SIGNAL(logIn(QString,QString)), this, SLOT(logIn(QString,QString)));
    loginForm->show();
    testEditor->show();
    this->hide();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::logIn(QString login, QString password)
{
    qDebug() << "Logging in";
}
