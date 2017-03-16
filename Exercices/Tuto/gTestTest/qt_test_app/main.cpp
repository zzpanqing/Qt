#include <QCoreApplication>

#include "addtest.h"

#include <QtCore/QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    addTest test;

    int result = test.add(5, 10);

    qDebug()<<"result = "<<result;

    return a.exec();
}
