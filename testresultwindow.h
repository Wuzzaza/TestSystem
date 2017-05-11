#ifndef TESTRESULTWINDOW_H
#define TESTRESULTWINDOW_H

#include <QWidget>

namespace Ui {
class TestResultWindow;
}

class TestResultWindow : public QWidget
{
    Q_OBJECT

public:
    explicit TestResultWindow(QWidget *parent = 0, int testNumber = 0, int rightAnswers = 0, QString elapsedTime = "");
    ~TestResultWindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::TestResultWindow *ui;
};

#endif // TESTRESULTWINDOW_H
