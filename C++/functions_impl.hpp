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
