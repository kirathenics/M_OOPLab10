#ifndef TASK2_H
#define TASK2_H

#include <QMainWindow>
#include <QTime>
#include <QMessageBox>
#include <QTableWidgetItem>

namespace Ui {
class Task2;
}

class Task2 : public QMainWindow
{
    Q_OBJECT

public:
    explicit Task2(int m = DEFAULT_SIZE, int n = DEFAULT_SIZE, QWidget *parent = nullptr);
    ~Task2();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Task2 *ui;
    static const int DEFAULT_SIZE = 5;
    int m;
    int n;
};

#endif // TASK2_H
