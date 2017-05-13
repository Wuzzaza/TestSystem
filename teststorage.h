#ifndef TESTSTORAGE_H
#define TESTSTORAGE_H

#include <QObject>
#include <QMap>
#include <QListWidgetItem>
#include <QFile>
#include <QByteArray>
#include <QDataStream>
#include <QDebug>
#include "testunit.h"

class TestStorage : public QObject
{
    Q_OBJECT

private:
    explicit TestStorage(QObject *parent = 0);
    bool fileExists(QString fileName);
    bool writeToFile(QString fileName, QByteArray data);
    bool createSaveFile(QString fileName);
    QByteArray readFromFile(QString fileName);

public:
    static TestStorage* getInstance();
    void saveAllTests();
    void readAllTestsFromFile();

    QMap <QListWidgetItem*, TestUnit*> testList;
    int timeForTestInMinutes = 0;

signals:

public slots:
};

#endif // TESTSTORAGE_H
