#ifndef TESTUNIT_H
#define TESTUNIT_H

#include <QObject>

class TestUnit : public QObject
{

    Q_OBJECT

    struct Answer{
        QString answerText = "";
        bool isCorrect = false;
    };

public:
    explicit TestUnit(QObject *parent = 0);

    Answer answers[4];
    QString question = "";

signals:

public slots:
};

#endif // TESTUNIT_H
