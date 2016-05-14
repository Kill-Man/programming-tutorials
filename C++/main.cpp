//This is a comment
/*
 * This is a
 * multiline comment. 
 */ //For multiline comments, anything between a /* and a */ is a comment.

/*
 * It is recommended that you read the C tutorial before the C++ tutorial, as
 * some of the things that aren't descussed are already implemented in C, such
 * as structs, typedefs, etc.
 */

#include <iostream> //Explained in next multiline.
/*
 * This is the iostream, which is the basic input and output commands. This
 * section of the code is called the preprocessor directive.
 */

#include <fstream> //Header for file I/O.

#include <string> //Used for getline
#include <sstream> //Used for string streams.
#include <ctime> //Used for the time metho
#include <cstdlib> //Next multiline
/* 
 * Anything with a c in front of it is MOST OF THE TIME a C library. This
 * means you can use C functions.
 */
 
#include "functions.hpp" //Next Multi
/* 
 * This includes all of the functions inside the functions.h file in the
 * current directory.
 */

#include "class.hpp" //Next Multi
/*
 * A class is a group of variables, atributes and methods that group
 * together certain parts of the code. It acts as a framework for whatever
 * the classes purpose may be.
 */

#include "tempClass.hpp" //Holds information for the tempClass class
 
#define PI 3.1415926 //This makes a variable have a permanant value.

using namespace std; //Next Multi
/*
 * Makes it less tedious to write commands. This means that the default
 * namespace for commands is the standard library (what std stands for).
 */

const string name = "Kill Man"; //This is like define, but it has a datatype.
//You can use const to create global objects as well.
//When using const objects, you can only use const methods with that object.
//A const variable must be defined on declaration
const myClass constClass(3, 14, 6);

int globalVariable = 5;

//Void means that there is no return type in this function.
void printHello() //The different return types are the same as the datatypes.
{
	cout << "This is from another method!" << endl;
} //All functions must go before the main function for them to work.

void prototype(); //Next Multi
/*
 * This is a function prototype. If you want to call a
 * function before it has been created, you have to put a
 * function prototype before any methods that use it.
 */

int main() //Next Multi
/*
 * The main function is the method the C++ compiler looks for. It has a
 * return type of int.
 */
{ //Everything within brackets is a part of a function.
    //cout and the Standard Library
    std::cout << "Hello, world!" << std::endl; //Next Multi
    /*
     * If you didn't put "using namespace std;" at the top of the program, you
     * would have to put std:: before any standard library commands. There will
     * be a single line comment that says "std::<THING>" to signal that the
     * command would require you to put std:: in front of it if there is no
     * "using namespace std" (a program without this line has benifits).
     */
    cout << "The world says hello back!" << endl; //Next Multi
    /*
     * cout (Character OUTput) is used for printing, and endl (END Line) means
     * to move the next output to a new line. << is the insertion operator,
     * and indicates that what follows it is inserted into cout.
     */

     //Variables and Datatypes
    int integer = 32; //Next Multi
    /*
     * This creates an integer named integer. An integer is a 32 bit whole
     * number. In this case, integer is set to a value of 32.
     */
    cout << "The value of integer is " << integer << "." << endl; //Next Multi
    /*
     * When something is not in quotes in printing or testing, it represents
     * the value of the variable with that name.
     */
    float aFloat = 32.23; //Next Multi
    /*
     * A float is a 32 bit value that can hold decimal numbers.
     */
    cout << "The value of aFloat is " << aFloat << "." << endl;
    long int big = 64; //Next Multi
    /*
     * This creates a long int named big. A long int is a 64 bit whole number.
     * The long keyword signals double the default size of the datatype of
     * int.
     */
    cout << "big = " << big << endl;
    short int small = 16; //Next Multi
    /*
     * This creates a short int named small. The short keyword signals half the
     * default size of the datatype of int.
     */
    cout << "small = " << small << endl;
    signed int sign = -9001; //A signed int can hold negative values.
    cout << "sign = " << sign << endl;
    unsigned int unsign = 9001; //Next Multi
    /*
     * An unsigned int holds twice the size as a regular int, but can't be
     * negative.
     */
    cout << "unsign = " << unsign << endl;
    /*
     * short and long can be mixed with signed and unsigned. Sign type always
     * goes before datatype.
     */
    double decimal = 64.46; //Next multi
    /*
     * A double is twice the size of a float. It holds up to 64 bits.
     */
    cout << "decimal = " << decimal << endl;
    long double longDouble = 128.821; //Next multi
    /*
     * A long double is 128 bits. long double is the only long or short decimal
     * datatype.
     */
    cout << "longDouble = " << longDouble << endl;
    char character = 'a'; //Characters store a single ascii character.
    cout << "character = " << character << endl;
    char charNum = 5; //Characters can also store 8 bit numbers.
    cout << "charNum = " << charNum << endl;
    bool trueBool = true; //Next multi
    /*
     * A bool is short for boolean, which holds only one of two values, true or
     * false.
     */
    cout << "trueBool = " << trueBool << endl;
    int multi1, multi2; //Next multi
    /*
     * You can declare multiple variables of the same type in the same line, as
     * long as they are comma separated.
     */
    multi1 = 7;
    multi2 = 14;
    cout << "multi1 = " << multi1 << " and multi2 = " << multi2 << endl;
    int multiVal1 = 7, multiVal2 = 14; //Next Multi
    /*
     * You can declare and assign values of multiple variables of the same type
     * as long as they are separrated by commas.
     */
    cout << "multiVal1 = " << multiVal1 << ",multiVal2 = " << multiVal2 << endl;
    auto myAuto = integer; //Next Multi
    /*
     * auto is used when setting variables equal to other variables. It sets
     * the datatype to the same as the variable it is being assigned to.
     */
    cout << "myAuto = " << myAuto << endl;
    decltype(integer) myDecltype = integer; //Next multi
    
    /*
     * decltype takes the datatype of the parameters (in parenthasis), and uses
     * that to determine the datatype of the variable. Since the variable
     * "integer" is an int, it would make the next var creation as if it were
     * an int. It would be the same as writing auto myDecltype = integer in this
     * case.
     */
    cout << "decltype(integer) myDecltype = integer = " << myDecltype << endl;
    
    string myString = "This is a string!"; //Next multi
    /*
     * A string is a set of characters. Unlike strings in languages like Java,
     * strings can be declared without value, AND its value can change.
     */
    cout << "myString = " << myString << endl;

    //Escape characters.
    cout << "This is not tabbed\tthis is tabbed.\nThis is on a new line. This is \
backspa\bced. This makes a sound\a." << endl; //Next multi
    /*
     * \t is a tab, \n is a newline \b is a backspace, \a makes a sound when
     * the program is run. You can also put a backslash before continuing a
     * string on the next line, while when it is printed, it will be like the
     * string continued on the same line.
     */

     //#define, const, and math with variables.
    cout << "My name is " << name << endl;
    cout << "Pi = " << PI << endl;
    int one = 1, two = 2;
    int three = one + two; //Next multi
    /*
     * Sets three equal to the sum of the one and two variables. It is the same
     * as writing int three = 1 + 2;
     */
    cout << "one = " << one << ",two = " << two << ",1 + 2 = " << three << endl;
    int varAs = 5; //Sets varAs (variable assignment) to 5.
    int varAsPt2 = varAs; //Next multi
    /*
     * Sets varAsPt2 to the value of varAs. It is as if you typed varAsPt2 = 5;
     */
    cout << "varAs = " << varAs << ", and varAsPt2 = " << varAsPt2 << endl;
    int five;
    int seven = 2 + (five = 5); //Next multi
    /*
     * This is the equivelant of writing five = 5 on one line and
     * int seven = 2 + five on another one. Only works with already existing
     * variables.
     */
    cout << "seven = " << seven << ", and five = " << five << endl;
    int zero1, zero2, zero3;
    zero1 = zero2 = zero3 = 0; //Next multi
    /*
     * Since assignment goes from right to left, this statement sets all of the
     * variables to 0.
     */
    cout << "zero1, zero2, and zero3 = " << zero1 << endl;

    /*
     * Basic math: + adds, - subtracts, * multiplies, / divides, and % returns
     * the remainder after division.
     */
    int compAs = 4;
    cout << "compAs = " << compAs;
    compAs += 5; //Next multi
    /*
     * Adds 5 to compAs. The same as compAs = compAs + 5. This works with any
     * math sign, +=, -=, *=, /=, and %=.
     */
    cout << ", compAs += 5 = " << compAs << endl;
    int inc = 5;
    cout << "inc = " << inc;
    ++inc; //Adds one to inc. It is called incrementing.
    cout << ", ++inc = " << inc << endl;
    int inc2 = --inc; //Next multi
    /*
     * -- subtracts. This is called decrementing. The -- going in the beginning
     * represents prefix, meaning that it in/decrements before assigning.
     */
    cout << "inc = " << inc << ", and inc2 = " << inc2 << endl;
    inc2 = inc++; //This sets the value, THEN increments.
    cout << "inc = " << inc << ", and inc2 = " << inc2 << endl;
    int condTest = 4;
    int cond = (condTest < 3) ? 8 : 4; //Next multi
    /*
     * This is an if else statement one one line. The stuff in parens is the
     * condition. You will understand what these are in a second. (condTest < 3)
     * is the condition and the value after the ? is what happens if it is true,
     * and the value after : is the else statement if it is not true.
     */
    cout << "cond = (condTest < 3) ? 8 : 4 = " << cond << endl;

    int comma;
    int commaOp = (comma = 6, comma); //Next multi
    /*
     * You can put multiple expressions in parenthasis where only one is
     * expected, sepparated by commas.
     */
    cout << "comma = " << comma << ", and commaOp = " << commaOp << endl;
    int myFloat = 3.14;
    int floatToInt = (int)myFloat; //Next multi
    /*
     * Parens around a datatype means that it will convert the value of a
     * variable to that datatype. The parens can go around the datatype or the
     * variable.
     */
    cout << "myFloat = 3.14" << endl;
    cout << "floatToInt = (int)myFloat = " << floatToInt << endl;

    int sizeOf = sizeof(char); //Next multi
    /*
     * sizeof (DATATYPE) returns the ammount of bytes in a datatype. char = 1
     * in this case. You can use variables and their assigned datatypes.
     */
    cout << "sizeOf = sizeof(char) = " << sizeOf << endl;

    //Basic IO
    cout << "Enter your first name: ";
    string userName;
    cin >> userName; //Next multi //std::cin
    /*
     * cin is the character input. Whatever the user enters until they press
     * RET (enter on most keyboards). The input is stored in the variable.
     * cin will use spaces as termination. This means that you can only get one
     * word before nothing else is stored. There is a way that we will use
     * later.
     */
    cout << "Nice to meet you, " << userName << "." << endl;
    cout << "Enter your age and a random number. \
Press enter or space before entering a second number: ";
    int age, number;
    cin >> age >> number; //Next multi
    /*
     * This is the same as putting [cin >> age] and [cin >> number] on
     * consecutive lines. Since spaces are considered terminations, this means
     * that you can press space between values and it will take the input of
     * those two numbers and put them in their correct variable.
     */
    cout << "Okay, so you are " << name << ", you are " << age << " years \
old, and your number was " << number << endl;
    cout << "Now, enter your first AND last name: ";
    string fullName;
    cin.ignore(); //Next multi
    /*
     * Use cin.ignore ONLY if there has been use of the >> operator before.
     */
    getline(cin, fullName); //Next multi
    /*
     * This tells the getline method to use cin on fullName. getline requires
     * the <string> library or (cin.) before it.
     */
    cout << "Okay, " << fullName << ", you are " << age << " years old and \
your number was " << number << "." << endl;
    cout << "Enter a number: ";
    string stringStream;
    int theirNum;
    getline(cin, stringStream);
    stringstream(stringStream) >> theirNum; //Next multi
    /*
     * This converts a string into another datatype. In this case, a string to
     * an int.
     */
    cout << "You entered a string, but I converted it into a number, the value \
of the string: " << stringStream << ", and the value of the \
number: " << theirNum << "." << endl;

    //if
    if (7 != 4) { //Next multi
    /*
     * if will test what is in the parenthasis, and if it is true, will trigger
     * the statements in the block. You will understand what != means in a
     * minute.
     */
        cout << "7 != 4" << endl;
    } //Anything between curly braces is a block.

    //else
    if (7 < 4) {
        cout << "7 < 4" << endl;
    }
    else { //else triggers if the if statement doesn't.
        cout << "7 >= 4" << endl;
    }

    //else if
    if (7 < 4)
        cout << "7 < 4" << endl; //Next multi
    /*
     * If there is only one statement in a block, it does not require braces.
     */
    else if (7 > 4) //Next multi
    /*
     * else if is like an else that tests a condition. You can have as many
     * else if statments as you need, but remember that they are read in order.
     */
        cout << "7 > 4" << endl;
    else
        cout << "7 = 4" << endl;

    /*
     * Conditions: < means less than, > greater than, <= less than or equal to,
     * >= greater than or equal to, == equal to, != not equal to.
     */

     //while
    int whileLoop = 1;
    while (whileLoop <= 5) { //Next multi
    /*
     * A while loop will loop until the condition evaluates to false.
     */
        cout << "whileLoop = " << whileLoop << endl;
        ++whileLoop;
    }

    //for
    for (int forLoop = 1; forLoop <= 5; ++forLoop) { //Next multi
    /*
     * For loop has three main parts (Variable initialization; condition;
     * operation).
     */
        cout << "forLoop = " << forLoop << endl;
    }

    //do while
    int doWhile = 1;
    do { //The do while loop is like while, but it always runs at least once.
        cout << "doWhile = " << doWhile << endl;
        ++doWhile;
    } while (doWhile <= 5); //While goes after the do block. It has a semicolon.

    //Switch
    int switchStatement = 3;
    switch (switchStatement) { //Next multi
    /*
     * The switch is a replacement for multiple if statements. It tests the
     * variable in parenthasis.
     */
    case 1: //Next multi
        /*
         * This will trigger if the value is one. Everything until the next
         * case is a single block.
         */
        cout << "switchStatement = " << switchStatement << endl;
        break; //Next multi
        /*
         * break will be discussed later, but for know, just know that if you
         * do not include this, switch will continue to test conditions.
         */
    case 2:
        cout << "switchStatement = " << switchStatement << endl;
        break;
    case 3:
        cout << "switchStatement = " << switchStatement << endl;
        break;
    default: //default is like the else.
        cout << "I don't know the value of switchStatement." << endl;
        break;
    }

    //Boolean operators
    if (1 < 5 && 1 > 0) //Next multi
        /*
         * && means that the conditions that are on either side of && must
         * evaluate to true.
         */
        cout << "1 < 5 && 1 > 0" << endl;
    if (1 < 5 || 1 < 0)
        cout << "1 < 5 || 1 < 0" << endl;
    if (!(1 > 5)) //Next multi
        /*
         * Anything between !( and ) will have their conditions flipped.
         */
        cout << "!(1 > 5)" << endl;

    //Scope resolution
    cout << "The value of globalVariable in Global Scope is " << \
        ::globalVariable << endl;
    int globalVariable = 10;
    cout << "The value of globalVariable in main() scope is" << \
        globalVariable << endl;

    //Arrays
    /*
     * Arrays are like regular variables that hold multiple values. Each
     * individual value is called an element, and is accessed and stored in an
     * index. Indexes start at 0.
     */
    int array[5]; //Creates an array that holds 5 integers called "array".
    array[0] = 1; //Sets index 0 of array to 1.
    array[1] = 2; //Sets index 1 of array to 2.
    array[2] = 3; //So on...
    array[3] = 4;
    array[4] = 5;
    //This next for loop is one way to print the values of an array.
    for (int arrayFor = 0; arrayFor < 5; ++arrayFor)
        cout << "array[" << arrayFor << "] = " << array[arrayFor] << endl;
    int easyArray[] = { 1, 7, 21, 4, 8 }; //Next multi
    /*
     * This creates an array with no known length (nothing in square brackets
     * ([])),  and assigns index 0 to 1, index 1 to 7, so on.
     */
     //The above array will be used in a range based for loop
    int range = 0;
    for (int rangeBased : easyArray) { //Next multi
    /*
     * This kind of for loop changes the value of, in this case, rangeBased
     * depending on how many times it has looped.
     */
        cout << "easyArray[" << range << "] = " << rangeBased << endl;
        ++range;
    }

    //Multidimentional arrays
    //Multidimentional arrays are just arrays within arrays.
    int multiArr[2][5] = { {1, 2, 3, 4, 5},{6, 7, 8, 9, 10} }; //Next Multi
    /*
     * This declares an array with 2 sets of 5 elements.
     */
    cout << "multiArr[0][2] = " << multiArr[0][2] << endl;
    int triAr[3][2][4] = { {{1, 2, 3, 4},{5, 6, 7, 8}},{9, 0, 1, 2} }; //Next mult
    /*
     * There can be as many dimensions as you need.
     */
    cout << "triAr[1][2][3] = " << triAr[1][2][3] << endl;

     //Pointers
     /*
      * Every variable is just an alias for a memory location, which has it's
      * address defined. You can get the memory address by putting a &, called
      * the address-of operator.
      */
    int memAddr = 5;
    cout << "The value of memAddr = " << memAddr << ", and the memory address \
it is located in is " << &memAddr << "." << endl;
    /*
     * A ponters job is to be a variable that has the value of another
     * variable's memory address.
     */
    int *memAddrPtr; //Creates a pointer for an integer.
    memAddrPtr = &memAddr; //You can point to ponters' memory addresses.
    cout << "The memory address belonging to the pointer memAddrPtr \
is " << memAddrPtr << "." << endl;
    cout << "Contents of memAddrPtr = " << *memAddrPtr << endl; //Next multi
    /*
     * A * before a pointer value returns the contents of the address that the
     * pointer points to.
     */

     //Dynamic memory
     /*
      * Pointers can be used for dynamic memory, which is what lets you know how
      * much memory you will be using.
      */
    int *dynamicP = new int; //Next multi
    /*
     * If you have ever written in Java, you would recognize this style when
     * creating objects. This requests memory from the heap.
     */
    *dynamicP = 5; //Store value in pointer.
    cout << "The value of dynamicP is " << *dynamicP << "." << endl;
    delete dynamicP; //Next Multi
    /*
     * Free up memory. This creates a dangling pointer. Since the memory
     * allocated is gone but not the pointer, the pointer still takes up space,
     * so reuse it if possible.
     */
    dynamicP = new int; //Recreates dynamicP
    *dynamicP = 7; //Reassigns dynamicP
    delete dynamicP;

    //Functions
    /*
     * A function is a set of statements that perform a task, most times using
     * information that you give it.
     */
    printHello(); //Next multi
    /*
     * This calls the function printHello() and executes the code block.
     */
    prototype();

    //Parameters cont.
    cout << "46 + 10 = " << numPlusTen(46) << endl; //Next multi
    /*
     * You can call functions while printing.
     */

     //Multiple parameters cont.
    cout << "50 + 45 = " << addNums(50, 45) << endl;

    //rand()
    cout << "A random number: " << rand() << endl; //Next multi
    /*
     * rand() requires #include <cstdlib>, and will print a random number.
     */
    cout << "Random num 1 - 6: " << 1 + (rand() % 6) << endl; //Next multi
    /*
     * Rand generates a number, and 0 is included. To counter this, you should
     * add one, like in this case.
     * Modulo also allows you to alter the way that rand works. For example:
     * say that you put (rand() % 5), this means that you want a number that is
     * from 0 to 5.
     * rand() is psudo random, meaning that the number that is chosen from the
     * random method is chosen at COMPILE TIME not RUN TIME, thus, it never
     * changes, no matter how many times you run it.
     */
    srand(50); //Next multi
    /*
     * srand() helps make numbers truly random, so numbers are a little more...
     * random. What it does is it uses the arguments as a seed, so that the
     * random number generated in the next rand() is based off of the seed.
     * It is still not fully random.
     */
    cout << "This number is based on a seed: " << 1 + (rand() % 6) << endl;

    srand(time(0)); //Next multi
    /*
     * The time function is in the <ctime>, and returns the ammount of seconds
     * since the beginning of UNIX time.
     */

    cout << "This will change every run, it is based off of \
time: " << rand() << endl;

    cout << "3 + 5 = " << defaultArg(3) << ", \
3 + 7 = " << defaultArg(3, 7) << endl;

    overload(2, 7);
    overload(2.5f, 3.8f); //Next multi
    /*
     * If you are using raw decimal numbers, you need to tell the function
     * whether the numbers are floats or doubles. To do this, you need to put an
     * 'f' at the end, lowercase or capital. When inputing longs, you also need
     * to put an 'L' at the end. Again lower or caps, but preferably caps, as it
     * looks like a 1 when you use an 'l'.
     */

    cout << "!5 = " << recursion(5) << endl;

    int arrayArg[5] = { 5, 3, 8, 9, 4 };
    printArray(arrayArg, 5); //Next multi
    /*
     * When passing an array, you just need to put the name of the array, no
     * need for brackets or the size in said brackets.
     */

    int notTen = 27;
    int *pNotTen = &notTen;
    setToTen(pNotTen);
    cout << "notTen was originally 27, but now it is " << notTen << endl;

    myClass aClass(5, 18, 3); //Creating an object is like creating a variable.
    /*
     * If your class has a constructor with arguments, put your arguments in
     * parens after the object name.
     */
    aClass.method(); //Calling methods is the same in C++ as in Java.
    myClass *pAClass = &aClass; //You can create pointers to classes.
    pAClass->selectionOperator();
    constClass.printConst();

    friendFun(aClass, 13);

    myClass bClass(4, 7, 6);
    myClass operover = aClass + bClass;
    cout << "operover.oper = " << operover.oper << endl;

    aClass.oopPrint();

    aClass.printProtectedPrint();

    oop *oopP = &aClass; //creates a pointer to the memory address of aClass
    //to alter its members
    oopP->setValue(7); //Uses setvalue to change the value of value in aClass
    aClass.printValue();

    oopP->saySomething(); //Since saySomething was changed in myClass, this
    //should print the myClass version of saySomething.

    oopP->pureVirtual();

    int temInt = 4, temInt2 = 3;
    cout << "temInt (4) + temInt2 (3) = " << temFun(temInt, temInt2) << endl;
    double temDoub = 6.73, temDoub2 = 4.56;
    cout << "temDoub (6.73) + temDoub2 (4.56) = " << temFun(temDoub, temDoub2) << endl;

    int a = 6;
    tempClass<int> templateClass(a); //When you pass arguments to a class' constructor,
    //you must specify the datatype passed in angle brackets after the class type.
    templateClass.printFirst();

    char letterK = 'K';
    tempClass<char> charClass(letterK); //This will specify that you want to use the char version of the tempClass and not template.

    try {
        int smallerNum = 6, biggerNum = 4;
        if (smallerNum > biggerNum) {
            throw 53; //If the test above evaluates to true, then 53 will be thrown
        }
        else if (smallerNum == biggerNum) {
            throw 54; //If the test above evaluates to ture, 54 will be thrown.
        }
    } catch (int x) { //A thrown value is cought by the catch block. In this case, it catches an int.
        cout << "smallerNum >= biggerNum, Error " << x << endl;
    } //If you were to throw without a try/catch block, the program will terminate.
    //If you didn't want any specific datatype to be cought, you could just put an elipsis (...).

    ofstream myFile;
    myFile.open("files/file.txt");
    myFile << "This file was generated by a C++ program.";
    myFile.close();

    ofstream aFile("files/another_file.txt"); //In ofstream's constructor, you can pass a file and it will automatically open if it can.
    if (aFile.is_open()) {
        aFile << "This file was opened successfully!";
    } else {
        cout << "files/another_file.txt can't be accessed." << endl;
    }
    aFile.close();
    
    return 0; //Next multi
	/*
	 * Return 0 is called "Zero termination," which means that this just
	 * represents the end of a program. If return 0 is read, the program ends
	 * with no errors.
	 */
}

void prototype()
{
	cout << "This is a prototype!" << endl;
}
