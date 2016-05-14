#include <iostream>
#include "functions.hpp"
using namespace std;

//Parameters
//This function takes the parameters and returns the value plus 10.
int numPlusTen(int num) //This function returns an integer value
{
	return num + 10;
}

//Multiple parameters
//This takes two parameters. You can have infinite parameters.
int addNums(int num, int pow)
{
	return num + pow;
}

//Default parameters
//A default parameter will set a value if none is given.
//When you are defining,
int defaultArg(int noDef, int def) //Default value in this function is def.
{
	int val = noDef + def;
	return val;
}

//Overloading
/*
 * This is where you have two functions with the same name and return type, but
 * there are different arguments. This allows you to use different datatypes or
 * a different ammount of arguments in your function(s). You can have as many
 * overloaded functions with as many different arguments as you need, just make
 * sure that they have the same return type.
 */
void overload(int num1, int num2) //This will take TWO arguments, both INT
{
	int sum = num1 + num2;
	cout << num1 << " + " << num2 << " = " << sum << endl;
}
void overload(float num1, float num2) //This will take TWO arguments, both FLOAT
{
	float sum = num1 + num2;
	cout << num1 << " + " << num2 << " = " << sum << endl;
}

//Recursion
/*
 * This is where a function calls itself. An example of this would be when you
 * would want to say make a function that would calculate the factorial of a
 * number.
 */
int recursion(int num)
{
	if (num == 1) { //If num is 1, 1! = 1, so return 1.
		return 1;
	} else {
		return num * recursion(num - 1); //Next Multi
	}
	/*
	 * Return num * recursion(num - 1), repeat until the function does not call
	 * itself. Since the value originally called the else, it will return that
	 * else, even if num - 1 == 1, because that was originally called
	 */
}

//Passing Arrays to Functions
/*
 * An array can be used as a parameter.
 */
void printArray(int arr[], int size)
{
	cout << "[";
	for (int x = 0; x < size; ++x) {
		if (x < size - 1) {
			cout << arr[x] << ", ";
		} else {
			cout << arr[x] << "]" << endl;
		}
	}
}

//Pass By Reference with Pointers.
/*
 * All previous methods have been passing arguments the same way, through value.
 * Passing an argument by value means that the method uses the VALUE of the
 * argument, not the argument itself. The other way to pass arguments, by
 * reference. This will take an address to a value, and use the actual variable,
 * not the value of it. This means that the value will be changed by the method.
 * The address can be either a pointer or a variable with a & in front of it.
 */
void setToTen(int *var) //To pass by reference, make an argument a pointer.
{
	*var = 10; //This will set the value of whatever is passed to it to 10.
	//Use the * to represent the value of the content.
}
