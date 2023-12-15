#ifndef TASK1_H
#define TASK1_H

#include <QMainWindow>
#include <QMessageBox>
#include <QDebug>

namespace Ui {
class Task1;
}

class Task1 : public QMainWindow
{
    Q_OBJECT

public:
    explicit Task1(QWidget *parent = nullptr);
    ~Task1();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Task1 *ui;
};

#endif // TASK1_H
