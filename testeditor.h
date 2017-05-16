#ifndef TESTEDITOR_H
#define TESTEDITOR_H

#include <QWidget>
#include <QListWidgetItem>
#include <QMapIterator>
#include <QDebug>

#include "testeditoranswer.h"
#include "testunit.h"
#include "teststorage.h"

namespace Ui {
class TestEditor;
}

class TestEditor : public QWidget
{
    Q_OBJECT

public:
    explicit TestEditor(QWidget *parent = 0);
    ~TestEditor();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    bool on_listWidget_activated(const QModelIndex &index);

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_lineEdit_editingFinished();

private:
    Ui::TestEditor *ui;
    QVector <TestEditorAnswer*> answers;
    TestStorage* testStorage = NULL;
    bool loadTest(TestUnit*testUnit);
    bool saveTest();

    void setCurrentQuestionActive (bool active);

};

#endif // TESTEDITOR_H
