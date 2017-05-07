#include "testeditoranswer.h"
#include "ui_testeditoranswer.h"

TestEditorAnswer::TestEditorAnswer(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TestEditorAnswer)
{
    ui->setupUi(this);
    this->setFixedSize(300, 100);

}

TestEditorAnswer::~TestEditorAnswer()
{
    delete ui;
}
