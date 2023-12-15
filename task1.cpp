#include "task1.h"
#include "ui_task1.h"

Task1::Task1(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Task1)
{
    ui->setupUi(this);
}

Task1::~Task1()
{
    delete ui;
}

void Task1::on_pushButton_clicked()
{
    bool ok1, ok2, ok3;
    int number1 = ui->lineEdit_1->text().toInt(&ok1);
    int number2 = ui->lineEdit_2->text().toInt(&ok2);
    int number3 = ui->lineEdit_3->text().toInt(&ok3);
    if (!ok1 || !ok2 || !ok3)
    {
        QMessageBox::warning(this, "Ошибка!", "Некорректное значение!");
        return;
    }

    int minNumber = qMin(number1, qMin(number2, number3));
    int maxNumber = qMax(number1, qMax(number2, number3));

    int result = maxNumber - minNumber;
    ui->lineEdit_3->setText(QString::number(result));
}

