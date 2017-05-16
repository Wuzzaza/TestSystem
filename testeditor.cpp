#include "testeditor.h"
#include "ui_testeditor.h"

TestEditor::TestEditor(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TestEditor)
{
    ui->setupUi(this);
    this->setFixedSize(800, 600);

    for(int i = 0; i < 4; i++){
        TestEditorAnswer *answer = new TestEditorAnswer(ui->groupBox);
        answer->setGeometry(i * 300 % 600, 10 + (i /2 *100), 300, 100);
        answer->show();
        answers.push_back(answer);

    }

    testStorage = TestStorage::getInstance();
    if(testStorage->readAllTestsFromFile()){

        ui->lineEdit->setText(QString::number(testStorage->timeForTestInMinutes));

        QMapIterator <QListWidgetItem*, TestUnit*> testListIterator(testStorage->testList);
        while (testListIterator.hasNext()) {
            ui->listWidget->addItem(testListIterator.next().key());
        }

    }

    setCurrentQuestionActive(false);
}

TestEditor::~TestEditor()
{
    delete ui;
}

void TestEditor::on_pushButton_clicked()
{
    QListWidgetItem *newWidgetListItem = new QListWidgetItem("Test #" + QString::number(testStorage->testList.size() + 1));
    TestUnit *newTest = new TestUnit;
    ui->listWidget->addItem(newWidgetListItem);
    testStorage->testList.insert(newWidgetListItem, newTest);
}

void TestEditor::on_pushButton_2_clicked()
{
    delete testStorage->testList[ui->listWidget->currentItem()];
    testStorage->testList.remove(ui->listWidget->currentItem());
    delete ui->listWidget->currentItem();

    if(testStorage->testList.size()==0)setCurrentQuestionActive(false);
}

bool TestEditor::loadTest(TestUnit * testUnit)
{
    if(!testUnit) return false;
    ui->textEdit->setText(testUnit->question);
    for(int i = 0; i < 4; i++){
        answers[i]->setText(testUnit->answers[i].answerText);
        answers[i]->setCorrect(testUnit->answers[i].isCorrect);

        qDebug() << "loading:" << testUnit->answers[i].answerText << testUnit->answers[i].isCorrect;
    }
    return true;
}

bool TestEditor::saveTest()
{
    if(!testStorage->testList[ui->listWidget->currentItem()]) return false;

    testStorage->testList[ui->listWidget->currentItem()]->question = ui->textEdit->toPlainText();

    for(int i = 0; i < 4; i++){

        testStorage->testList[ui->listWidget->currentItem()]->answers[i].answerText = answers[i]->getText();
        testStorage->testList[ui->listWidget->currentItem()]->answers[i].isCorrect = answers[i]->isCorrect();

        qDebug() << i;

    }

    testStorage->saveAllTests();
}

void TestEditor::setCurrentQuestionActive(bool active)
{
    ui->textEdit->setEnabled(active);
    ui->groupBox->setEnabled(active);
    ui->pushButton_3->setEnabled(active);
    ui->pushButton_4->setEnabled(active);
}



bool TestEditor::on_listWidget_activated(const QModelIndex &index)
{
    if(!testStorage->testList[ui->listWidget->currentItem()]) return false;

    loadTest(testStorage->testList[ui->listWidget->currentItem()]);
    setCurrentQuestionActive(true);
}

void TestEditor::on_pushButton_3_clicked()
{
    saveTest();
}

void TestEditor::on_pushButton_4_clicked()
{
    loadTest(testStorage->testList[ui->listWidget->currentItem()]);
}



void TestEditor::on_lineEdit_editingFinished()
{
    testStorage->timeForTestInMinutes = ui->lineEdit->text().toInt();
}
