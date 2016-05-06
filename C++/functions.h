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
T temFun(T a, T b) //Since the function is a template, you can pass any two arguments of the same datatype into this.
{
    return a + b; //Returns a + b.
}

template <class T, class U> //Put a comma between classes in order to have multiple datatypes available.
T bigger(T a, U b) //Since the return type is the same as the first argument, the return type will convert to that datatype, so if you pass an int in the first argument, it will return an int.
{
    return (a > b ? a : b); //If a is greater than b, return b, else, a.
} //This method will take two arguments of any two datatypes and return the bigger one, the datatype of the returned value determined by the first argument.
//Often you will see T be used to represent the datatype, that is widely used by programmers, however, you don't need to use this, you can use any letter or combination of letters.
#endif
