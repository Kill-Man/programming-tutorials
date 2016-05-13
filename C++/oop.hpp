/*
 * An external class to show examples of inheritance or other OOP features.
 */

#ifndef OOP_H
#define OOP_H
class oop
{
public:
	oop(); //When a constructor or deconstructor is used in a class that is inherited, the base classes constructor is called first...
	~oop();//... and the base classes deconstructor is called last.
    void oopPrint();
    void setValue(int a);
    virtual void saySomething();
    virtual void pureVirtual() = 0; //This is a pure virtual function. It has no body, and to signify this, you set the function equal to 0.
    //A pure virtual function is overriden in the derived class, not the base class.
protected: //Anything under the protected access modifier will only be available to derived classes, so classes that inherit anything from this class.
    void protectedPrint();
    int value;
};
#endif
