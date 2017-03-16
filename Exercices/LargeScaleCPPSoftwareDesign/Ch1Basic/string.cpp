#include "string.h"

String::String()
    :d_size(DEFAULT_SIZE)
    ,d_length(0)
{
    //assert(d_array_p = new char[d_size]); // 错误： assert 中应该只判断
                                          // 不要操作对象，否则会使 prod
                                          // 的版本和 debug 的版本行为不
                                          // 同。因为 prod 版 用 NDEBUG
                                          // 去掉了所有 assert.

    // 可以这样写
    d_array_p = new char[d_size];
    assert(d_array_p);
}


