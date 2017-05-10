#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setFixedSize(800, 600);
    loginForm = new LoginForm(this);
    testEditor = new TestEditor(ui->widget);
    testEditor->hide();
    connect(loginForm, SIGNAL(logIn(QString,QString)), this, SLOT(logIn(QString,QString)));
    loginForm->show();
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

void MainWindow::beginTest()
{
    if(quizWindow != NULL)delete quizWindow;
    quizWindow = new QuizWindow(ui->widget);
    quizWindow->show();
}

void MainWindow::on_actionEdit_Test_triggered()
{
    if(quizWindow)quizWindow->hide();
    if(beginTestDialog)beginTestDialog->hide();
    testEditor->show();
}

void MainWindow::on_actionBegin_Test_triggered()
{
    testEditor->hide();
    if(beginTestDialog)delete beginTestDialog;
    beginTestDialog = new BeginTestDialog(this);
    connect(beginTestDialog, SIGNAL(beginTest()), this, SLOT(beginTest()));
    beginTestDialog->show();
}

void MainWindow::on_actionLog_Off_triggered()
{
    loginForm->show();
    this->hide();
}

void MainWindow::on_actionExit_triggered()
{
    this->close();
}
