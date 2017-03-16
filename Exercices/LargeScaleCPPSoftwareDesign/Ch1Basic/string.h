#ifndef STRING_H
#define STRING_H


class String
{
public:
    enum {DEFAULT_SIZE = 8};
    char *d_array_p;
    int d_size;
    int d_length;
public:
    String();
};

#endif // STRING_H
