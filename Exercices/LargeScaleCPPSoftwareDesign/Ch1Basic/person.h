#ifndef PERSON_H
#define PERSON_H

typedef int (Person::*PCPMFDI)(double) const; // 声明一个指针类型，
                                              // 指向 const person 成员函数
                                              // 参数类型为 double
                                              // 返回类型为 int
class Person
{
public:
    typedef double Inches;
    typedef double Pounds;
public:
    Person();
    void SetWeight(Pounds weight);
    void getHeight(Inches height);
};

#endif // PERSON_H
