#ifndef TASK3_H
#define TASK3_H

#include <QWidget>
#include <QList>
#include <QMessageBox>

namespace Ui {
class Task3;
}

class Task3 : public QWidget
{
    Q_OBJECT

public:
    explicit Task3(QWidget *parent = nullptr);
    ~Task3();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Task3 *ui;
    QList<QString> list;
};

#endif // TASK3_H
