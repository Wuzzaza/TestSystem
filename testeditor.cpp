#include "testeditor.h"
#include "ui_testeditor.h"

TestEditor::TestEditor(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TestEditor)
{
    ui->setupUi(this);
    this->setFixedSize(800, 600);

    for(int i = 0; i < 4; i++){
        TestEditorAnswer *answer = new TestEditorAnswer(this);
        answer->setGeometry(i * 300 % 600, 350 + (i /2 *100), 300, 100);
        answer->show();
        answers.push_back(answer);

    }

    testStorage = TestStorage::getInstance();
}

TestEditor::~TestEditor()
{
    delete ui;
}

void TestEditor::on_pushButton_clicked()
{
    QListWidgetItem *newWidgetListItem = new QListWidgetItem("Test#" + QString::number(testStorage->testList.size() + 1));
    TestUnit *newTest = new TestUnit;
    ui->listWidget->addItem(newWidgetListItem);
    testStorage->testList.insert(newWidgetListItem, newTest);
}

void TestEditor::on_pushButton_2_clicked()
{
    delete testStorage->testList[ui->listWidget->currentItem()];
    testStorage->testList.remove(ui->listWidget->currentItem());
    delete ui->listWidget->currentItem();
}

bool TestEditor::loadTest(TestUnit * testUnit)
{
    if(!testUnit) return false;
    ui->textEdit->setText(testUnit->question);
    for(int i = 0; i < answers.size(); i++){
        answers[i]->setText(testUnit->answers[i].answerText);
        answers[i]->setCorrect(testUnit->answers[i].isCorrect);

    }
    return true;
}
