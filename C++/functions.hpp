#ifndef FUNCTIONS_H
#define FUNCTIONS_H
int numPlusTen(int num);
int addNums(int num, int pow);
int defaultArg(int noDef, int def = 5); //When using default arguments, always make sure to use the default argument only in the declaration, not the definition
void overload(int num1, int num2);
void overload(float num1, float num2);
int recursion(int num);
void printArray(int arr[], int size);
void setToTen(int *var);

template <class T> //This line creates a generic datatype for use in the next function.
T temFun(T a, T b); //Since the function is a template, you can pass any two arguments of the same datatype into this.

template <class T, class U> //Put a comma between classes in order to have multiple datatypes available.
T bigger(T a, U b); //Since the return type is the same as the first argument, the return type will convert to that datatype, so if you pass an int in the first argument, it will return an int.
#include "functions_impl.hpp"
#endif
