#ifndef CLASS_H
#define CLASS_H
#include "oop.hpp" //Needed to inherit oop
class myClass : public oop //This will make it to where myClass will inherit members from oop depending on whether or not the inherit is public, protected, or private, more information below...
/*
 * public:
 *   All public members of the base class become public members of the derived class,
 *   all protected members of the base class become pretected members of the derived class.
 *   Private members are not directly accessable by the derived class, however, they can alter
 *   them through public and protected members, such as methods that set or get the value of
 *   a private member.
 * protected:
 *   All public members of the base class become protected members of the derived class, all
 *   protected members of the base class become protected member of the derived class.
 * private:
 *   All public and protected members of the base class become private. If no access specifier is
 *   specified, it defaults to private.
 */
{
public: //Anything under public is accessable by any object. This is called an access specifier.
	myClass(); //You can overload methods like you overload functions.
	myClass(int a, int b, int var); //When declaring a method with arguments, just like with functions, you must put the arguments in the prototype.
	void method();
	void selectionOperator();
	~myClass();
	void printConst() const; //When creating a const class, make sure to put const in the prototype.
    myClass operator+(myClass &obj);
	int oper; //Vars used in operator functions must be public.
    void printValue();
    void saySomething();
    void pureVirtual(); //We reinitialize pureVirtual, but in the source file give it use.
    void printProtectedPrint(); //This function's soul purpose is to access a protected member of this class.
private: //Anything private is only accessable by the class
	int regVar; //You must create variables in a class header file
	const int constVar;
	//While this is not demonstrated, you can have other classes as members.
	//This is to represent an atribute, such as a person class having height and weight atributes as members
	friend void friendFun(myClass &obj, int val); //A friend function is a function that belongs to a class that allows manipulation of an object and its memebers, including private ones.
	//When creating the prototype for a friend function, make sure that the object is passed by reference by using the &.
	//For information about the "protected" access specifier, check oop.h and oop.cpp
};
#endif
