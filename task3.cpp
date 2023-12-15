#include "task3.h"
#include "ui_task3.h"

Task3::Task3(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Task3)
{
    ui->setupUi(this);
}

Task3::~Task3()
{
    delete ui;
}

void Task3::on_pushButton_clicked()
{
    if (ui->removeRadioButton->isChecked())
    {
        delete ui->listWidget->takeItem(ui->listWidget->count() - 1);
        list.removeLast();
    }
    else if (ui->addRadioButton->isChecked())
    {
        if (ui->lineEdit->text() != "")
        {
            ui->listWidget->addItem(ui->lineEdit->text());
            list.push_back(ui->lineEdit->text());
        }
        else
        {
            QMessageBox::warning(this, "Ошибка!", "Пустая строка!");
        }
    }
}

