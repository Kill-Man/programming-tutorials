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
#endif