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
    dataStream << testList;
    writeToFile("myTestsSaveFile", byteArr);
}

void TestStorage::readAllTestsFromFile()
{
    // TODO add load from file function
}

TestStorage *TestStorage::getInstance()
{
    static TestStorage instance;
    return &instance;
}

