#include "task1.h"
#include "task2.h"
#include "task3.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Task1 w1;
    w1.show();
    Task2 w2(7, 7);
    w2.show();
    Task3 w3;
    w3.show();

    return a.exec();
}
