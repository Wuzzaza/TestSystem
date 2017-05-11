#include "testresultwindow.h"
#include "ui_testresultwindow.h"

TestResultWindow::TestResultWindow(QWidget *parent, int testNumber, int rightAnswers, QString elapsedTime) :
    QWidget(NULL),
    ui(new Ui::TestResultWindow)
{
    ui->setupUi(this);
    ui->resultLabel->setText("Correct answers " + QString::number(rightAnswers) + " of " + QString::number(testNumber));
    ui->timeLabel->setText("Time elapsed " + elapsedTime);
}

TestResultWindow::~TestResultWindow()
{
    delete ui;
}

void TestResultWindow::on_pushButton_clicked()
{
    this->close();
}
