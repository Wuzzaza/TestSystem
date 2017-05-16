#include "teststorage.h"

TestStorage::TestStorage(QObject *parent) : QObject(parent)
{
    qDebug() << "Save file exists: " << fileExists("myTestsSaveFile");
}

bool TestStorage::fileExists(QString fileName){
    return QFile::exists(fileName);
}

bool TestStorage::writeToFile(QString fileName, QByteArray data)
{
    if(!fileExists(fileName)){
        bool fileCreated = createSaveFile(fileName);
        if(!fileCreated) return false;

    }
    QFile file(fileName);
    file.open(QIODevice::WriteOnly | QIODevice::Truncate);
    file.write(data);
    file.flush();
    file.close();
    return true;
}



bool TestStorage::createSaveFile(QString fileName)
{
    QFile file(fileName);
    if(fileExists(fileName)) {
        if(!file.isWritable())return false;

        bool isOpened = file.open(QIODevice::WriteOnly | QIODevice::Truncate);

        if(!isOpened) return false;

        file.flush();
        file.close();
    }
    else{
        bool isOpened = file.open(QIODevice::WriteOnly);

        if(!isOpened) return false;

        file.flush();
        file.close();
    }

}

QByteArray TestStorage::readFromFile(QString fileName)
{
    QByteArray byteArr;
    QFile file(fileName);
    if(!fileExists(fileName))return byteArr;
    file.open(QIODevice::ReadOnly);
    byteArr = file.readAll();
    return byteArr;

}

void TestStorage::saveAllTests()
{
    QByteArray byteArr;
    QDataStream dataStream(&byteArr, QIODevice::WriteOnly);
    dataStream << timeForTestInMinutes;
    dataStream << testList.size();
    QMapIterator <QListWidgetItem*, TestUnit*> testListIterator(testList);
    while(testListIterator.hasNext()){
        TestUnit *nextTestUnit = testListIterator.next().value();
        dataStream << nextTestUnit->question;
        for(int i = 0; i < 4; i++){
            dataStream << nextTestUnit->answers[i].answerText;
            dataStream << nextTestUnit->answers[i].isCorrect;
        }
    }

    writeToFile("myTestsSaveFile", byteArr);
}

bool TestStorage::readAllTestsFromFile()
{
    // TODO add load from file function
    if (!fileExists("myTestsSaveFile")) {
        qDebug() << "No Test Save File Found";
        return false;
    }
    QByteArray byteArr = readFromFile("myTestsSaveFile");
    QDataStream dataStream(&byteArr, QIODevice::ReadOnly);

    dataStream >> timeForTestInMinutes;
    int testListSize;
    dataStream >> testListSize;

    if (testListSize == 0)return false;

    qDebug() << QString::number(testListSize) << " saved tests in SaveFile.";

    for (int i = 0; i < testListSize; i++){
        TestUnit *newTestUnit = new TestUnit;
        dataStream >> newTestUnit->question;
        for(int i = 0; i < 4; i++){
            dataStream >> newTestUnit->answers[i].answerText;
            dataStream >> newTestUnit->answers[i].isCorrect;
        }
        QListWidgetItem *newListWidgetItem = new QListWidgetItem("Test #" + QString::number(i + 1));
        testList.insert(newListWidgetItem, newTestUnit);
    }

    return true;
}

TestStorage *TestStorage::getInstance()
{
    static TestStorage instance;
    return &instance;
}

