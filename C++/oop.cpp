#include "oop.hpp"
#include <iostream>
using namespace std;
void oop::oopPrint()
{
    cout << "This is from another class." << endl;
}

void oop::setValue(int a)
{
    value = a;
}

void oop::saySomething() //If you declare a virtual function that isn't pure, you must define it.
{
    cout << "This is the default for a virtual function that isn't pure.";
}

void oop::protectedPrint()
{
    cout << "This is the default protectedPrint" << endl;
}

oop::oop()
{
	cout << "This is the constructor for oop." << endl;
}

oop::~oop()
{
	cout << "This is the deconstructor for oop." << endl;
}
