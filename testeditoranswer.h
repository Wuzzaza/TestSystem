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
    explicit TestEditorAnswer(QWidget *parent = 0);
    ~TestEditorAnswer();

    void setText(QString answer) {this->answer = answer;}
    QString getText(){return this->answer;}

    bool isCorrect(){return this->_isCorrect;}
    void setCorrect(bool _isCorrect){this->_isCorrect = _isCorrect;}


private:
    Ui::TestEditorAnswer *ui;
    QString answer = "";
    bool _isCorrect = false;
};

#endif // TESTEDITORANSWER_H
