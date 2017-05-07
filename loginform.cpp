#include "loginform.h"
#include "ui_loginform.h"

LoginForm::LoginForm(QWidget *parent) :
    QWidget(NULL),
    ui(new Ui::LoginForm)
{
    ui->setupUi(this);
    this->setFixedSize(300, 200);
    ui->pushButton->setEnabled(false);
    this->parent = parent;
}

LoginForm::~LoginForm()
{
    delete ui;
}

void LoginForm::on_lineEdit_textChanged(const QString &arg1)
{
    if(ui->lineEdit->text()!="" && ui->lineEdit_2->text()!="") ui->pushButton->setEnabled(true);
    else ui->pushButton->setEnabled(false);
}

void LoginForm::on_lineEdit_2_textChanged(const QString &arg1)
{
    if(ui->lineEdit->text()!="" && ui->lineEdit_2->text()!="") ui->pushButton->setEnabled(true);
    else ui->pushButton->setEnabled(false);

}

void LoginForm::on_pushButton_clicked()
{
    QString login = ui->lineEdit->text();
    QString password = ui->lineEdit_2->text();
    emit logIn(login, password);
    this->parent->show();
    this->hide();
}
