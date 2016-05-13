#include <iostream>
using namespace std;

template <class T>
tempClass<T>::tempClass(T a) //When defining a function outside a class, you must specify the types used in the class.
: first(a)
{
    cout << "first = " << first << endl;
}

template <class T>
void tempClass<T>::printFirst()
{
    cout << first << endl;
}

tempClass<char>::tempClass(char a) //This will access the char version of the template class rather than the regular one.
{
    cout << "This object's constructor was passed a char." << endl;
}
