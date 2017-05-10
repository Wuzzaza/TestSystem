#include "begintestdialog.h"
#include "ui_begintestdialog.h"

BeginTestDialog::BeginTestDialog(QWidget *parent) :
    QWidget(NULL),
    ui(new Ui::BeginTestDialog)
{
    ui->setupUi(this);
    this->setFixedSize(300, 200);

    testStorage = TestStorage::getInstance();
    if(testStorage->testList.size() > 0){
        ui->testQuantity->setText("Number of tests: " + QString::number(testStorage->testList.size()));
        ui->pushButton->setEnabled(true);
    }
    else ui->testQuantity->setText("No test available. Add some tests in Test Editor.");

    ui->testTime->setText("Total time: " + QString::number(testStorage->timeForTestInMinutes) + " minute(s)");
}

BeginTestDialog::~BeginTestDialog()
{
    delete ui;
}

void BeginTestDialog::on_pushButton_2_clicked()
{
    this->close();
}

void BeginTestDialog::on_pushButton_clicked()
{
    emit beginTest();
    this->close();
}
