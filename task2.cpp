#include "task2.h"
#include "ui_task2.h"

Task2::Task2(int m, int n, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Task2),
    m(m),
    n(n)
{
    ui->setupUi(this);

    ui->tableWidget->setColumnCount(m);
    ui->tableWidget->setRowCount(n);

    srand(QTime::currentTime().msec());

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int value = rand() % 20;
            ui->tableWidget->setItem(i, j, new QTableWidgetItem(QString::number(value)));
        }
    }

    ui->tableWidget->resizeColumnsToContents();
}

Task2::~Task2()
{
    delete ui;
}

void Task2::on_pushButton_clicked()
{
    int action = ui->comboBox->currentIndex();
    bool ok;
    int k = ui->lineEdit->text().toInt(&ok);
    if (!ok || k < 0 || k > m)
    {
        QMessageBox::warning(this, "Ошибка!", "Некорректное значение k!");
        return;
    }

    switch (action) {
    case 0:     // case sum
    {
        int sumRes = 0;
        for (int i = 0; i < n; i++)
        {
            sumRes += ui->tableWidget->item(i, k)->text().toInt();
        }

        QMessageBox::about(this, "Результат вычислений", "Результат суммирования равен " + QString::number(sumRes));
        break;
    }
    case 1:     // case multiply
    {
        int multRes = 1;
        for (int i = 0; i < n; i++)
        {
            multRes *= ui->tableWidget->item(i, k)->text().toInt();
        }

        QMessageBox::about(this, "Результат вычислений", "Результат произведения равен " + QString::number(multRes));
        break;
    }
    default:
        break;
    }
}
