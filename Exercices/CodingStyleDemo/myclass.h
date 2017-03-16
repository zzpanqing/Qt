#ifndef CODINGSTYLEDEMO_MYCLASS_H_ // #define guard 格式 ： <PROJECT>_<PATH>_<FILE>_H_
#define CODINGSTYLEDEMO_MYCLASS_H_

// header 应该其是自给自足的，code client 不需要设置任何条件就可以使用，
// code client 也不需 include  header 所使用的 .h 或者定义 header
// 所使用的 symbol

// 尽可能地避免使用 forward declaration
// 用前置声明代替 includes 甚至都会暗暗地改变代码的含义：
class MyClass
{
public:
    MyClass();
};

#endif // CODINGSTYLEDEMO_MYCLASS_H_
