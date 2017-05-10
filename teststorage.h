#ifndef TESTSTORAGE_H
#define TESTSTORAGE_H

#include <QObject>
#include <QMap>
#include <QListWidgetItem>
#include "testunit.h"

class TestStorage : public QObject
{
    Q_OBJECT

private:
    explicit TestStorage(QObject *parent = 0);


public:
    static TestStorage* getInstance();
    QMap <QListWidgetItem*, TestUnit*> testList;
    int timeForTestInMinutes = 0;

signals:

public slots:
};

#endif // TESTSTORAGE_H
