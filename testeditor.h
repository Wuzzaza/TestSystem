#ifndef TESTEDITOR_H
#define TESTEDITOR_H

#include <QWidget>
#include <QListWidgetItem>

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

private:
    Ui::TestEditor *ui;
    QVector <TestEditorAnswer*> answers;
    TestStorage* testStorage = NULL;
    bool loadTest(TestUnit*testUnit);

};

#endif // TESTEDITOR_H
