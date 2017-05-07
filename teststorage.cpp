#include "teststorage.h"

TestStorage::TestStorage(QObject *parent) : QObject(parent)
{

}

TestStorage *TestStorage::getInstance()
{
    static TestStorage instance;
    return &instance;
}

