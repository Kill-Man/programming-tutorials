#ifndef TEMPCLASS_H
#define TEMPCLASS_H
template <class T> //When creating a template class, you can use multiple datatypes just like with functions.
class tempClass
{
private:
    T first;
public:
    tempClass(T a);
    void printFirst();
};

template <>
class tempClass<char>
{
public:
    tempClass(char a);
};
#include "tempClass_impl.hpp"
#endif
