//This is a comment
/* This is a multiline comment
   it spans multiple lines. */
#include <stdio.h> //tells the preprocessor to use library functions defined in stdio.h
#include <string.h> //string.h holds functions that could be useful for working with strings.
#include <ctype.h> //character type functions
#include <math.h> //for math functions

#define IN  1 //This defines a constant, which can't be changed, called IN with the value of one.
#define OUT 0 //It is common practice to make all constant names ALL CAPS.

int external; //The external variable we will be using.

enum enumeration //enums are enumerations, which are lists of constants, and the order goes from 0, 1, etc., unless a specific value is specified.
{
    FALSE, //Has a value of 0
    TRUE //Has a value of 1
}; //enums are statements, so you need to end it with a semicolon.

enum months
{
    JAN = 1, //This starts the enum at the value of 1, meaning that the next number...
    FEB, //... is 2...
    MAR, //... 3...
    APR, //etc.
    MAY,
    JUN,
    JUL,
    AUG,
    SEP,
    OCT,
    NOV,
    DEC
};

enum escapes
{
    BELL = '\a', //Since this doesn't specify a numerical value, you must specify the value of every constant after this.
    BACKSPACE = '\b',
    TAB = '\t',
    NEWLINE = '\n',
    VTAB = '\v',
    RETURN = '\r'
};

int timesTwo(int val) //This is a function that takes the parameters of a single int. Functions and function prototypes always have to be before the main function.
{
    int doubled = val * 2; //Doubles value of the argument and sets that equal to doubled.
    return doubled; //Returns the doubled value, which is set to doubled.
}

void prototype(); //This is a prototype. If there are arguments, they don't have to have the same name, but must be the same datatype.
//Prototypes allow you to use a function after the main function or before functions that use it.

struct rectangle //A struct defines a datatype that allows you to change atributes of it.
{
    double length; //An atribute is declared inside curly braces.
    double width;
}; //A struct ends in a semicolon.

typedef struct shapes //typedef is a keyword that allows you to change the name of a datatype.
{ //In this case, typedef declares a struct called "shapes".
    char *shape; //This is another way to define a string in C. You will understand better when you learn about strings.
    struct rectangle rect; //You can have a struct within a struct.
} shapes; //The last word is what the datatype is renamed to.

int main() //The main function is the starting point of a C program. The 'int' part is not required, however recommended, and a compiler will warn you about it.
{ //Statements of a function are enclosed in braces
    //Printing
    printf("Hello, world!\n"); //printf prints whatever is in its arguments. \n means newline, which will make the output after it print on a new line.

    //Variables and Arithmetic Expressions
    int integer; //This is a variable, which holds values, the type of values depending on the type of variable. Here, we create an integer called integer.
    //Integers hold whole number values.
    integer = 32; //You change the value of a variable by putting the name of the variable equal to something.
    //Printing a variable depends on the type. An integer uses %d, and after the comma is another agument, the variable being used.
    printf("The value of integer is %d.\n", integer); //Prints "The value of integer is 4."
    //You can declare multiple variables of the same type in one statement, just put a comma in between the variables that you create.
    int value1, value2; //Creates two int variables named value1 and value2.
    //You can make the value of multiple variables the same by taking into consideration that equality is from right to left in C.
    value1 = value2 = 15; //Sets value2 to 15, then sets value1 to the value of value2, which is 15.
    printf("The value of value1 is %d, and the value of value2 is also %d.\n", value1, value2);
    //You can create a variable and assign it in the same line.
    int year = 2016; //Creates a variable called year and sets it to the value of 2016.
    printf("It's %d!\n", year); //Prints "It's 2016!"
    int equation = ((2 + 4) * 5 / 3 + 4 - 3) % 4; //You can set a variable equal to an equation, and math in C follows order of operation.
    printf("((2 + 4) * 5 / 3 + 4 - 3) %% 4 = %d\n", equation); //Prints "... = 3". If you are printing a % sign, you must put %%, or the compiler will likely warn you if you have it enabled, or send an error.
    //Equations use + for adding, - for subtracting, * for multiplication, / for division, and % for modulo (remainder after division).
    int length1, length2;
    length1 = 14;
    length2 = 42;
    //A number between a % and a 'd' mean that it will print the number in length. So, %3d means that the space will always be three in length.
    printf("%3d %6d\n", length1, length2); //You can make the output of a variable have a length. In this case, it will print " 14      42"
    //There are other types of int variables. longs hold 64 bit values, short holds 16, char hold 8 bits.
    long int big; //You can leave the int part out and it will mean the same thing; this is the same as typing "long big;", however, it is standard to put long int, but for time purposes, I will use long <VARIABLE>.
    big = 64;
    //Int like variables all use %d in their arguments.
    printf("long values are %ld bits.\n", big); //when referencing a long int, use %ld instead of %d
    short int small; //The same rules of long applies to short; same as "short small;"
    small = 16;
    printf("short values are %d bits.\n", small);
    char character;
    character = 8;
    printf("char values are %d bits, or a byte.\n", character);
    // To store a decimal value, you must create a float or double variable.
    // To print a float or double is the same way that you print an integer, but you must use %f instead of %d. Numbers between the % and the f are the same too.
    // Floats hold 32 bit decimal values.
    float decimal;
    decimal = 32.23;
    printf("Floats hold 32 bit decimal values, like %f.\n", decimal);
    //Double holds 64 bit decimal values.
    double bigDec;
    bigDec = 64.46;
    printf("Doubles hold 64 bit decimal values, like %f.\n", bigDec);
    //Printing floating points prints a lot of 0s. This can be avoided by putting a .<NUMBER> between the % and the f.
    printf("Improved: Floats can hold 32 bit decimal values, like %.2f.\n", decimal); //%.2f means to only print the first two decimal positions.
    printf("You can print float values with no decimals, like %.0f.\n", decimal); //You can print no decimals with %.0f
    //Putting a 0 before the number in between a %d or %f makes zeros fill up blank spaces.
    printf("A bunch of 0s and a number: %010d\n", integer);
    printf("This isn't tabbed\tthis is\n"); //\t represents a tab character
    //Incrementing is adding one and decrementing is subtracting one.
    int in, de;
    in = de = 45;
    printf("Before incrementation/decrementation, in and de were equal to 45.\n");
    ++in; //Put two plusses on either side of the variable that you are incrementing, but putting them in front will have different effects than in the back.
    --de; //Two minuses symbolize a decrementation.
    printf("Now, after incrementation/decrementation, in = %d and de = %d.\n", in, de);
    //Whether the ++/-- goes before or after the variable is called prefix or postfix. These can be used in different ways.
    int prepost = 8;
    int pre = ++prepost; //Increments prepost then assigns the value of prepost to pre, setting pre and prepost to 9
    printf("prepost = 8, pre = ++prepost, pre = %d, prepost = %d\n", pre, prepost);
    prepost = 8;
    int post = prepost++; //Sets post to the value of prepost, then increments prepost, setting post to 8 and prepost to 9
    printf("prepost = 8, post = prepost++, post = %d, prepost = %d\n", post, prepost);
    //Again, prefix and postfix works with both increment(++) and decrement (--).

    //Loops and Conditionals
    /* In loops and conditionals there are 6 ways to test equality:
           ==    tests if it is equal to
           !=    tests if it is not equal to
           <=    tests if it is less than or equal to
           >=    tests if it is greater than or equal to
           <     tests if it is less than
           >     tests if it is greater than */
    int whileLoop = 1;
    //While loops test the arguments in the parethasis, if they are true, the statements will trigger. It is retested and relooped until the arguments are false.
    while (whileLoop <= 5)
    {
        printf("This will print 5 times because it is in a while loop.\n");
        whileLoop++;
    }
    /* The for loop takes three arguments separated by semicolons:
           Variable assignment.
           Argument we will be testing. 
           Increment. It is called the increment step, but you can do any sort of math in it.
       Any of these steps may be omitted, but there must still be two semicolons as if it was there. */
    int forLoop; //forLoop is the integer used in the for loop
    for (forLoop = 1; forLoop <= 5; ++forLoop) //forLoop = 1, while forLoop is <= 5, loop. When loop ends ++forLoop
    {
        printf("This also prints 5 times, but is in a for loop.\n"); //This prints 5 times.
    }
    //if statements only trigger once, and the argument is only tested once. If the arguments (in parenthasis) is true, the statements trigger.
    int ifTest = 7;
    if (ifTest < 9) //Since the argument is true, the statements in the brackets are triggered.
    {
        printf("7 < 9\n");
    }
    //A conditional or loop may have no braces, if and only if there is exactly ONE statement that belongs to it. This applies to ALL conditional/loop but switch
    if (ifTest < 9)
        printf("7 is still < 9\n");
    //else statements belong to the most recent if statement. It will trigger if the corresponding if statement doesn't
    if (ifTest == 4)
    {
        printf("7 = 4\n");
    }
    else //Notice that the else statement takes no arguments.
    {
        printf("7 != 4\n");
    }
    //else if statements are like else statements
    if (4 == 3)
        printf("4 = 3\n");
    //else if statements take arguments
    else if (4 == 4)
        printf("4 != 3 but 4 = 4\n");
    else
        printf("4 != 3 and 4 != 4\n");

    //Basic user input
    long input; //Going to be the variable that we store the input in. It is a long so that we can store values as big as 64 bits.
    printf("Type things in. Until you type C-d or C-z, your output will be printed on the next line: ");
    input = getchar(); //When you set a variable equal to a getchar(), it will take user input and set the variable equal to it.
    while (input != EOF) //This will loop until input is equal to EOF, which is End Of File. You can indicate EOF with C-d on *N?X and C-z on Windows.
    {
        putchar(input); //putchar prints the value of its arguments. If you were to use printf, the output would be the ASCII value, not the one you want.
        input = getchar();
    }
    printf("\nAgain: ");
    while ((input = getchar()) != EOF) //Since we are setting the value of input to getchar() to be tested, it loops every character input.
    {
        putchar(input);
    }
    long charCount = 0;
    printf("\nAgain, but this time, I will count the amount of characters you put in: ");
    while (getchar() != EOF) //This sets getchar equal to nothing, so it just tests if the latest character input is equal to EOF.
    {
        ++charCount;
    }
    printf("\nYou put in a total of %ld characters.\n", charCount);
    printf("Again, it will count characters in an improved way: ");
    for (charCount = 0;  getchar() != EOF; ++charCount) //This does everything as the previous while statement, but only in one line.
        ; //This is a null statement. It can be used when everything is done in the arguments, like in this case.
    printf("\nYou put in a total of %ld characters.\n", charCount);
    printf("Next, we will count the amount of enter keypresses: ");
    int newLineCount;
    while ((input = getchar()) != EOF)
        if (input == '\n') //You can imbed any conditionals or loops within loops. This is called nested conditionals or loops.
            ++newLineCount; //If \n is pressed (enter in most cases), will add one to newLineCount.
    printf("\nYou pressed enter %d times.\n", newLineCount);
    int newWordCount, state;
    state = OUT;
    newWordCount = newLineCount = charCount = 0;
    printf("I will now count newlines, characters, and words: ");
    while ((input = getchar()) != EOF)
    {
        ++charCount; //Every time the loop loops, it adds one to the character count.
        if (input == '\n') //This tests if the input is equal to a newline character, RET/ENTER in most cases.
            ++newLineCount; //Adds one to the newline count.
        if (input == ' ' || input == '\n' || input == '\t') //The pipes hear mean OR, meaning that only one of the conditions have to be true.
            //Along with OR (||), there is also AND (&&), which means that all conditions have to be true instead of one.
            state = OUT; //Says that when a newline, tab, or space is entered, that we are not in a word.
        else if (state == OUT) //Is read if input != space, tab, or newline.
        {
            state = IN; //Makes it to where when input != space, tab, or newline, changes state to IN a word.
            ++newWordCount; //Adds one to newWordCount every time that there is a new word.
        }
    }
    printf("\n%ld characters, %d words, and %d new lines.\n", charCount, newWordCount, newLineCount);
    
    //Arrays are like variables that hold multiple values.
    int array[5]; // Creates an array of ints called "array" and tells it to hold 5 values.
    array[0] = 1; // Array subscripts start with 0, which means that index 0 is the first element
    array[1] = 2; // Index 1 is the second element
    array[2] = 3; //So on
    array[3] = 4;
    array[4] = 5;
    int arrVal = 0;
    for (arrVal = 0; arrVal < 5; ++arrVal)
        printf("Value of array[%d] is %d.\n", arrVal, array[arrVal]); //array[arrVal] means to print array[VALUE OF arrVal], if arrVal = 0, array[arrVal] = array[0]
    printf("I will now count the amount of times you type a specific number, from 0 - 9: ");
    int numbers[10];
    int i;
    for (i = 0; i < 10; ++i)
        numbers[i] = 0;
    int c;
    while ((c = getchar()) != '\n')
    {
        if (c >= '0' && c <= '9')
            ++numbers[c - '0'];
    }
    for (i = 0; i < 10; ++i)
        if (i < 9)
            printf("%d %ds, ", numbers[i], i);
        else
            printf("and %d %ds\n", numbers[i], i);
    
    //Functions
    printf("16 * 2 = %d\n", timesTwo(16)); //timesTwo(16) runs 16 through the timesTwo function and returns the value.
    prototype();
    
    //Character Arrays
    char string[19] = "This is a string.\n\0"; //An array of chars is called a string. \0 is the null character and marks the end of the string of characters.
    //The \0 means that it is null terminated. It counts as a character, so make sure that you take it into account when defining the size of the array.
    //The 19 length of the array means that it will hold 19 characters, escapes counting as one. This means that \n, \0, so on,
    printf("Here is a string: %s", string); //Strings in print statements are represented by %s.
    printf("The length of the string is: %zd.\n", strlen(string)); //strlen is a function declared in string.h that returns the length of a string excluding the \0.
    //You will notice that the previous line has %zd instead of %d. The z is a length specifier that says the argument will be size_t in length, as strlen returns a size_t value.
    //Only use %zd if your compiler supports C99 compiling, as it is a feature that is not in C89.
    
    //External Variables and Scope
    /* Variables in the main function are always private to the main. Since they are in main, no other function has access to them. This is also true for any
       function. To get around this, we can use external variables, which are variables that are available to any function and the change is global. */
    extern int external; //An external can't be declared and given a value in the same line.
    external = 5;
    printf("The external variable has a value of %d.\n", external);

    printf("TRUE = %d, FALSE = %d.\n", TRUE, FALSE);

    if (!FALSE) //The ! in front of a value in a condition means that a value that is false becomes true and a value that is true becomes false.
    //True is represented by 1 and false by 0.
    {
        printf("This is an example of the unary operator.\n");
    }

    printf("This the lowercase version of 'S' is %c.\n", tolower('S'));

    if (isdigit('5')) //isdigit() tests a character, meaning that the value that is tested must be a variable that is set to a character or a character itself.
    {
        printf("isdigit('5') evaluates to true.\n");
    }
    if (!isdigit('a'))
    {
        printf("isdigit('a') evaluates to false.\n");
    }

    printf("The square root of 25 is %f.\n", sqrt(25)); //sqrt and other math functions require #include <math.h>

    struct rectangle rect1; //When calling a struct, you must put struct before the name of the struct.
    rect1.length = 5.0;
    rect1.width = 6.0;
    printf("rectangle rect1;\n");
    printf("rect1.length = %.1f\n", rect1.length);
    printf("rect1.width = %.1f\n", rect1.width);

    shapes square; //Since shapes was declared with typedef, you do not have to type struct, as shapes is an alias for "struct shapes".
    square.shape = "Square";
    square.rect.length = 5.0; //When you access a struct within a struct, you just access the atributes inside of the struct that is in a struct by putting another . modifier.
    square.rect.width = square.rect.length;
    printf("shapes square;\n");
    printf("square.shape = \"%s\";\n", square.shape);
    printf("square.rect.length = %.1f;\n", square.rect.length);
    printf("square.rect.width = square.rect.length = %.1f;\n", square.rect.width);
    
    return 0; //Used to properly terminate the program.
}

void prototype()
{
    printf("This is a prototype.\n");
}
