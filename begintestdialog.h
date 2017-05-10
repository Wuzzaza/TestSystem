#ifndef BEGINTESTDIALOG_H
#define BEGINTESTDIALOG_H

#include <QWidget>

#include "teststorage.h"

namespace Ui {
class BeginTestDialog;
}

class BeginTestDialog : public QWidget
{
    Q_OBJECT

public:
    explicit BeginTestDialog(QWidget *parent = 0);
    TestStorage *testStorage;
    ~BeginTestDialog();

signals:
    void beginTest();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::BeginTestDialog *ui;
};

#endif // BEGINTESTDIALOG_H
