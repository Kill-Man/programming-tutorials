#ifndef TEMPCLASS_H
#define TEMPCLASS_H
template <class T, class U> //When creating a template class, you can use multiple datatypes just like with functions.
class tempClass
{
private:
    T first;
    U second;
public:
    tempClass(T a, U b);
    T bigger();
};

template <>
class tempClass<char>
{
public:
    tempClass(char a);
};
#endif
