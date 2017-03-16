#include <QCoreApplication>
#include "person.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    return a.exec();
}

void f (const Person& person){
    Person::Inches height = person.getHeight();
    person.SetHeight(height); // 这里不会因为 height 的类型不是 Pounds 而报错

}
