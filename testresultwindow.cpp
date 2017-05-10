#include "testresultwindow.h"
#include "ui_testresultwindow.h"

TestResultWindow::TestResultWindow(QWidget *parent, int testNumber, int rightAnswers) :
    QWidget(NULL),
    ui(new Ui::TestResultWindow)
{
    ui->setupUi(this);
    ui->resultLabel->setText("You solved " + QString::number(rightAnswers) + " of " + QString::number(testNumber));
}

TestResultWindow::~TestResultWindow()
{
    delete ui;
}

void TestResultWindow::on_pushButton_clicked()
{
    this->close();
}
