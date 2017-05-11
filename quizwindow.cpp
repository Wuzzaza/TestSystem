#include "quizwindow.h"
#include "ui_quizwindow.h"

QuizWindow::QuizWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::QuizWindow)
{
    ui->setupUi(this);
    this->setFixedSize(800, 600);

    testStorage = TestStorage::getInstance();
    timeLeftInSeconds = testStorage->timeForTestInMinutes * 60;
    testListIterator = new QMapIterator<QListWidgetItem*, TestUnit*>(testStorage->testList);
    if(testListIterator->hasNext())currentTest = testListIterator->next().value();
    timer = new QTimer(this);
    timer->setInterval(1000);

    connect(timer, SIGNAL(timeout()), this, SLOT(updateTime()));

    QTime timeLeft(timeLeftInSeconds / 3600, (timeLeftInSeconds % 3600) / 60, timeLeftInSeconds % 60, 0);
    ui->timeLeftLabel->setText(timeLeft.toString(Qt::RFC2822Date));

    timer->start();

    for(int i = 0; i < 4; i++){
        TestEditorAnswer *answer = new TestEditorAnswer(ui->groupBox, true);
        answer->setGeometry(i * 300 % 600, 10 + (i /2 *100), 300, 100);
        answer->show();
        answers.push_back(answer);

    }
    loadTest(currentTest);
    updateTestLabel();

}

QuizWindow::~QuizWindow()
{
    delete ui;
}

void QuizWindow::endTest()
{
    timer->stop();
    ui->pushButton->setEnabled(false);
    ui->textEdit->setEnabled(false);
    ui->groupBox->setEnabled(false);
    int elapsedTimeInSeconds = testStorage->timeForTestInMinutes * 60 - timeLeftInSeconds;
    QTime timeElapsed(elapsedTimeInSeconds / 3600, (elapsedTimeInSeconds % 3600) / 60, elapsedTimeInSeconds % 60, 0);

    testResultWindow = new TestResultWindow(this, testStorage->testList.size(), rightAnswers, timeElapsed.toString(Qt::RFC2822Date));
    testResultWindow->show();

}

void QuizWindow::updateTestLabel()
{
    ui->testNumberLabel->setText("Test " + QString::number(currentTestIndex + 1) + " of " + QString::number(testStorage->testList.size()));
}

bool QuizWindow::checkIfTestIsCorrect()
{
    for(int i = 0; i < 4; i++){
        if(answers[i]->isCorrect() != currentTest->answers[i].isCorrect) return false;
    }
    return true;
}

void QuizWindow::updateTime()
{
    if (timeLeftInSeconds-- > 0){
        QTime timeLeft(timeLeftInSeconds / 3600, (timeLeftInSeconds % 3600) / 60, timeLeftInSeconds % 60, 0);
        ui->timeLeftLabel->setText(timeLeft.toString(Qt::RFC2822Date));
    }
    else{
        timer->stop();
        endTest();
    }
}

bool QuizWindow::loadTest(TestUnit * testUnit)
{
    ui->textEdit->setText(testUnit->question);

    for(int i = 0; i < 4; i++){
        answers[i]->setText(testUnit->answers[i].answerText);
        answers[i]->setCorrect(false);
    }

    return true;
}

void QuizWindow::on_pushButton_clicked()
{
    if(checkIfTestIsCorrect())rightAnswers++;

    if((currentTestIndex + 1) < testStorage->testList.size()) {
        currentTestIndex++;
        if(testListIterator->hasNext()){
            currentTest = testListIterator->next().value();
            loadTest(currentTest);
        }
        updateTestLabel();
    }
    else endTest();
}
