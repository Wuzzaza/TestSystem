#include "testeditoranswer.h"
#include "ui_testeditoranswer.h"

TestEditorAnswer::TestEditorAnswer(QWidget *parent, bool readOnly) :
    QWidget(parent),
    ui(new Ui::TestEditorAnswer)
{
    ui->setupUi(this);
    this->setFixedSize(300, 100);
    this->_readOnly = readOnly;
    ui->textEdit->setReadOnly(this->_readOnly);

}

TestEditorAnswer::~TestEditorAnswer()
{
    delete ui;
}

void TestEditorAnswer::setText(QString answer)
{
    this->answer = answer;
    ui->textEdit->setText(this->answer);
}

QString TestEditorAnswer::getText()
{
    this->answer = ui->textEdit->toPlainText();
    return this->answer;
}

bool TestEditorAnswer::isCorrect()
{
    this->_isCorrect = ui->checkBox->isChecked();
    return this->_isCorrect;
}

void TestEditorAnswer::setCorrect(bool _isCorrect)
{
    this->_isCorrect = _isCorrect;
    ui->checkBox->setChecked(this->_isCorrect);
}
