#include "class.h"
#include <iostream>
using namespace std;

myClass::myClass() //You can overload methods in a class like you overload functions
: constVar(5) //When you have a constant variable, it must have a value, so this will assign it a value automatically.
{} //Even though the member initializer does everything, you must put the braces.

myClass::myClass(int a, int b, int var) //Constructors must have the same name as the class and be public
: regVar(a), constVar(b), oper(var) //These are member initializers. They allow you to set the values of members of a class, like variables and consts.
{
	cout << "This is a constructor." << endl;
	cout << "regVar = " << regVar << ", constVar = " << constVar << endl;
}

void myClass::method() //This method can be used by anything, because it is public.
{
	cout << "This is from another method." << endl;
}

void myClass::selectionOperator()
{
	cout << "This is from a pointer." << endl;
}

//Destructors run when objects are destroyed, when the program ends.
myClass::~myClass() //A destructor is like a constructor with a ~ in front of it.
{
	cout << "This is a destructor, the program has ended." << endl;
}

//const methods are methods that can't be changed, and objects that are
//const can only call const methods
void myClass::printConst() const
{
	cout << "This is printed from a const method." << endl;
}

void friendFun(myClass &obj, int val)
{
	obj.regVar = val;
	cout << "regVar now equals " << obj.regVar << endl;
}

myClass myClass::operator+(myClass &obj) //This makes it to where when you use the + operator on an object, it will execute this code on it.
{ //This will just add the oper variable in the classes added and pushes that value to the object that is being defined.
	myClass res;
	res.oper = this->oper + obj.oper;
	return res;
}

void myClass::printValue()
{
    cout << "value = " << value << endl;
}

void myClass::saySomething()
{
    cout << "This is printed from myClass." << endl;
}


void myClass::pureVirtual()
{
    cout << "This is printed from a pure virtual function." << endl;
}
