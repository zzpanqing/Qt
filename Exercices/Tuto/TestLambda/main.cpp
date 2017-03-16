#include <QCoreApplication>

#include <iostream>
#include <functional>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    std::vector<int> c {1,2,3,4,5,6,7};
    int x = 5;

    c.erase(std::remove_if(c.begin(),
                           c.end(),
                           [x](int n){
                             return n < x;
                            }));

    std::cout << "c : ";
    for(auto i : c)
    {
        std::cout << " " << i ;
    }

    std::cout << std::endl;

    auto func1 = [](int i) {
        return i+4;
    };

    std::cout << "func1: " << func1(6) << std::endl;

    std::function<int (int)> func2 = [](int i){
        return i+4;
    };

    std::cout << "func2: " << func2(7) << std::endl;

    return a.exec();
}
