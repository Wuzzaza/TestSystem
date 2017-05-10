#ifndef TESTEDITORANSWER_H
#define TESTEDITORANSWER_H

#include <QWidget>

namespace Ui {
class TestEditorAnswer;
}

class TestEditorAnswer : public QWidget
{
    Q_OBJECT

public:
    explicit TestEditorAnswer(QWidget *parent = 0, bool readOnly = false);
    ~TestEditorAnswer();

    void setText(QString answer);
    QString getText();

    bool isCorrect();
    void setCorrect(bool _isCorrect);


private:
    Ui::TestEditorAnswer *ui;
    QString answer = "";
    bool _isCorrect = false;
    bool _readOnly = true;
};

#endif // TESTEDITORANSWER_H
