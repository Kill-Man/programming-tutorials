#include "tempClass.h"
template <class T, class U>
tempClass<T, U>::tempClass(T a, U b) //When defining a function outside a class, you must specify the types used in the class.
: first(a), second(b)
{
    cout << "first = " << first << "second = " << second << endl;
}

T tempClass<T, U>::bigger()
{
    return (first > second ? first : second);
}

tempClass<char>::tempClass(char a) //This will access the char version of the template class rather than the regular one.
{
    cout << "This object's constructor was passed a char." << endl;
}