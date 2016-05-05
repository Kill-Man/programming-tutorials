#include "oop.h"
#include <iostream>
using namespace std;
void oop::oopPrint()
{
    cout << "This is from another class." << endl;
}

void oop::protectedPrint()
{
	cout << "This is from a protected access modifier." << endl;
}

void oop::oop()
{
	cout << "This is the constructor for oop." << endl;
}

void oop::~oop()
{
	cout << "This is the deconstructor for oop." << endl;
}

void oop::setValue(int a)
{
    value = a;
}

void oop::saySomething()
{
    cout << "This is printed from the oop." << endl;
}
