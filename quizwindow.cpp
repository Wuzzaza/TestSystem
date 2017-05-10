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

}

QuizWindow::~QuizWindow()
{
    delete ui;
}

void QuizWindow::endTest()
{

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
