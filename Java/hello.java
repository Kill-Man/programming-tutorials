/*
 * Using and compiling this requires you to add the CLASSPATH directory to your classpath environment variable.
 */

import java.util.Scanner; //Used to get user input.
import myPackage.packageClass; //Imports the packageClass class from the myPackage package in the CLASSPATH.
import java.awt.*; //* in this case is a wild card, which means anything. Thus, this imports all classes from the Java API.
import java.util.ArrayList; //Imports the ArrayList class.
import java.util.LinkedList; //Imports the LinkedList class.
import java.util.HashMap; //Imports the HashMap class.
import java.util.HashSet; //Lets us use the HashSet class
import java.util.Collections; //Imports the collections class
import java.util.Iterator; //Imports the Iterator class
import java.io.File; //This class lets you interact with files
import java.util.Formatter; //Lets you create files
import java.util.Random; //Imports the Random class for random numbers.

class hello
{
	//Methods
	//A method is a collection of statements grouped together to perform an operation. The beauty of a method is that you don't have to rewrite code you use often.
	static void sayHello() //Creates a method called sayHello with no parameters. void is the return type. Void means that there is no specific return type.
	{
		//The command(s) that are performed when the method is called.
		System.out.println("This is from a different class.");
	}
	//Methods that are used within the same class should be static, which you will understand in a little bit.
	static void greetUser(String usersName) //Creates a method called greetUser with a parameter, and when the method is called, the argument replaces the parameter.
	{
		System.out.println("Hello " + usersName + ".");
	}

	//Method Return Types
	static int findSum(int val1, int val2) //int is the return type. When values are returned in method, the input is ints and so is the output.
	//You may also notice that there are multiple parameters. If there are multiple parameters, and only one value is given, it will replace the first value.
	{
		return val1 + val2; //Return returns a value when the method it is in is called.
	}

	//Final
	public static final double PI = 3.14; //when a variable is final, it is marked constant, meaning that it can only be assingned once.
	//Trying to change the value of a final variable will cause a compilation error.
	
	public static void main(String[] args) //This is the main method, it is the starting point of the program.
	{
		//Hello world
		System.out.println("Hello world."); //This is the println method. It prints a line of text. Each statement must end in a semicolon.

		//Comments
		//This is a single line comment. Comments are not read by the compiler.
		/* This is a multiline comment.n
		   it spans multiple lines. */
		/** This is a Javadoc comment.
			It works like a multiline comment,
			but is used to reference to outside source code, specifically HTML. */

		//Variables and More on Printing
		int integer = 1; //This is an integer. It is used to hold whole numbers.
		System.out.println(integer + " is a whole number."); //To print a variable, you must put the name of the variable in the arguments.
		//Putting a plus without quotes around them means to print along with, the above output would be "1 is a whole number." This is called concatination.
		double decimal = 1.2; //This is a double. It is a floating point, which holds numbers with decimal points.
		System.out.println(decimal + " is a decimal number.");
		String name = "Kill Man"; //This is a string. It is used to hold text. They are enclosed in double brackets.
		System.out.println("My name is " + name + ".");
		char character = 'a'; //This is a character. It holds a single ASCII character.
		System.out.println(character + " is an ASCII character.");
		boolean bool = true; //This is a boolean. It can only hold one of two possible values: true or false.
		System.out.println("Boolean operators can hold two values: " + bool + " and false.");
		//There are others less commonly used, but can be used for certain purposes.
		byte bits = 8; //This is a byte. It can't hold nearly as big a value as other variable types, so use when you don't need big numbers and want to save space.
		System.out.println("Bytes are " + bits + " bits.");
		short small = 255; //This is a small. It can hold values bigger than a byte, but smaller than an int.
		System.out.println("The maximum value a byte can ge to is " + small + ".");
		long big = 512L; //This is a long. It is the largest variable type, but takes up more space. It requires an L at the end of its value.
		System.out.println("Half of a kilobyte is " + big + " bytes.");
		float bigdec = 12.34f; //This is a float. It holds decimal values even larger than a double. It requires an f at the end.
		System.out.println(bigdec + " is a float.");
		int multinum1, multinum2; //You can create multiple variables with one statement.
		multinum1 = multinum2 = 56; //Assignment goes from right to left, so in this case, multinum2 is set to 56, which is what multinum1 is set to.
		System.out.println("Number 1 is " + multinum1 + " and number 2 is " + multinum2 + ".");
		
		//Primitave Operators
		int add = 6 + 3; //You can set variables equal to the sum of numbers,
		System.out.println("6 + 3 = " + add);
		int sub = 6 - 3; //and subtract,
		System.out.println("6 - 3 = " + sub);
		int multiplication = 6 * 3; //and multiply,
		System.out.println("6 * 3 = " + multiplication);
		int division = 6 / 3; //and devide,
		System.out.println("6 / 3 = " + division);
		int modulo = 23 % 6; //and the remainder after division, or modulo.
		System.out.println("6 % 3 = " + modulo);
		int variable1 = 6;
		int variable2 = 3;
		int sum = variable1 + variable2; //You can use these operators on multiple variables as well,
		System.out.println("variable1 + variable2 =" + sum);
		int sum2 = variable1 + 6; //and on a mix of variables and numbers.
		System.out.println("variable1 + 6 = " + sum2);
		int multiDeclaration = 1, multiDeclaration2 = 2; //You can declare multiple variables AND assign them in the same line.
		System.out.println("multiDeclaration = " + multiDeclaration + " and multiDeclaration2 = " + multiDeclaration2);
		//Anything that has to do with these signs can work with both variables and numbers separately or at the same time.
		//For future notice, anything that has +-*/% means plus/minus/times/divided by/modulo

		//Increment Operators
		int increment = 4;
		System.out.println("Original value is " + increment + ".");
		++increment; //This is the increment. It adds one to the value of a variable.
		System.out.println("That incremented is " + increment + ".");
		--increment; //This is the decrement. It subtracts one to the value of a variable.
		System.out.println("That decremented is " + increment + ".");
		int prepost = 6;
		System.out.println("prepost = " + prepost);
		int pre = ++prepost; //This is a prefix increment. The plusses or minuses are in front, it adds/subtracts THEN prints or assigns. pre = 7
		System.out.println("pre = ++prepost, so pre = " + pre + "and prepost = " + prepost);
		int post = prepost++; //This is the postfix operator. The signs go after the name. It prints it out or assigns the value THEN adds/subs one. post = 7
		System.out.println("post = prepost++, so post = " + post + "and prepost = " + prepost);
		//Prefix and postfix work on both ++ and --.
		int value = 5;
		System.out.println("Original value: " + value);
		value += 8; //A math operator before an equal sign means "[A NUMBER] = [A NUMBER] +-*/% [VARIABLE OR VALUE]". In this case, value is 13.
		System.out.println("Original value += 8 = " + value);

		//Strings
		String programming = "Java"; //A string holds a series of characters. Assigning them need quotation marks.
		System.out.println(programming + " is fun!");

		//Getting User Input
		//This requires you to import Scanner. Look at the top of the program.
		Scanner myVar = new Scanner(System.in); //This creates an instant of the scanner class to be used in this program.
		System.out.print("Enter a whole number: "); //Print, opposed to print line, makes the next output appear on the same line as this one.
		int nextInt = myVar.nextInt();
		System.out.println("The number you entered was " + nextInt + ".");
		/* The syntax for getting user input is simple. First, you need to import the Scanner class. Then you need to create an instance for use in your program.
		   To actually store the input, with the exception of strings, you must write "[VARIABLE TYPE] [VARIABLE NAME] = [SCANNER NAME].next[VARIABLE TYPE]();"
		   For strings, "[VARIABLE TYPE] [VARIABLE NAME] = [SCANNER NAME].nextLine();" */
		/* There are 9 input types:
		       nextByte() = byte
		       nextShort() = short
		       nextInt() = int
		       nextLong() = long
		       nextFloat() = float
		       nextDouble() = double
		       nextBoolean() = boolean
		       nextLine() = String 
		       next() = word */

		//Conditional Statements
		//Test conditions and performs different actions depending on whether they are true or false.
		/* There are 6 comparison operators:
		       < less than
		       > greater than
		       != not equal to
		       == equal to
		       <= less than or equal to
		       >= greater than or equal to */
		int cond = 8;
		if (cond > 5) //This is the if statement. If the condition in the parethasis is true, then the statements in the curly braces will trigger.
		{
			System.out.println("8 > 5");
		}
		if (false) //You can put boolean values as the argument. This is mostly used in loops that you want to be infinite.
		{
			System.out.println("How the hell did you get here?");
		}
		else //This is the else statement. It triggers when its corresponding if statement doesn't trigger.
		{
			System.out.println("YOU SCARED ME!");
		}

		//Nested if statements
		Scanner age = new Scanner(System.in);
		int userGuess = 0; //You must initialize a value if you plan to use it in conditionals and loops.
		System.out.print("Enter your age: ");
		int userAge = age.nextInt();
		if (userAge == 15)
		{
			System.out.print("Enter a number between 1 and 10: ");
			Scanner userNum = new Scanner(System.in);
			userGuess = userNum.nextInt();
			if (userGuess == 7) //Conditional statements and loops can be nested within other statements and loops.
			{
				System.out.println("You win!");
			}
			else
			{
				System.out.println("You lose sorry.");
			}
		}
		else
		{
			System.out.println("GIT WITH THE PROGRAM!");
		}
		if (true) //Conditionals and loops can go without curly braces if there is only one statement.
			System.out.println("You better not have lost.");

		//else if Statements
		if (false)
		{
			System.out.println("You shouldn't be here.");
		}
		else if (true) //The else if statement is tested if the corresponding if statement turns out to be false.
		{
			System.out.println("If you lost, you suck.");
		}
		else
		{
			System.out.println("Again, you shouldn't be here.");
		}

		//Logical Statements
		if (userAge == 15 && userGuess == 7) //Two ampersands between arguments mean that BOTH arguments must be TRUE for the statements to be triggered.
		{
			System.out.println("You won the game that you played earlier.");
		}
		else if (userAge == 15 || userGuess == 7) //Two pipes between arguments mean that ONE argument must be TRUE for the statements to trigger.
		{
			System.out.println("You are either 15 or you guessed 7.");
		}
		else if (!(userAge == 15)) //The not logical operator reverses the logical state of the operand.
		{
			System.out.println("You are not 15.");
		}

		//The switch Statement
		Scanner family = new Scanner(System.in);
		System.out.print("How many family memebers, including yourself, siblings, and parents, do you have: ");
		int familyMem = family.nextInt();
		switch (familyMem) //This is the switch statement. It tests the value of a single variable. The variable is the argument.
		{
		case 1: //This is case 1, meaning that this triggers if the variable has a value of 1.
			System.out.println("Wow, that sucks. A lot."); //This is what triggers if case 1 is true. There can be as many statements as you want in a case.
			break; //This is the break statement. It stops other cases from being tested if this one is true.
		case 2:
			System.out.println("At least you aren't alone.");
			break;
		case 3:
			System.out.println("Better than some people.");
			break;
		case 4:
			System.out.println("What do you have, two parents a sister and a dog or something?");
			break;
		case 5:
			System.out.println("You have the same amount as Kill Man!");
			break;
		default: //This is the default. It triggers if no other case is true. It is also optional.
			System.out.println("You have a pretty big family.");
			break;
		}

		//While loops
		System.out.print("Guess a number between 1 and 10: ");
		Scanner whileLoop = new Scanner(System.in);
	    int whileGuess = whileLoop.nextInt();
		while (whileGuess != 6) //The while loop will trigger if the argument is true, and will loop until it is false.
		{
			System.out.print("Nope, try again: ");
			whileGuess = whileLoop.nextInt();
		}
		System.out.println("You win!");

		//For Loops
		/* The for loop has three arguments (each separated by semicolon), thus, three steps:
		       The initialization, the first argument. This tells the loop what variable we will be using, and you can initialize the variable within the loop.
		       The test. If the test is true, the statements that belong to it will trigger.
		       The incrementation. It may be called the incrementation, but any math statement can be used. It is done after all statements in the loop finish. */
		for (int forLoop = 1; forLoop <= 5; forLoop++)
		{
			System.out.println("This is going to print 5 times, see?");
		}

		//do...while Loops
		/* These are similar to the while loop, but it will execute the statements within the do part AT LEAST once.
		   Afterwards, the while part is tested, and if it is true, the do part will be executed again. */
		int dowhile = 1;
		do
		{
			System.out.println("This will also print 5 times.");
			dowhile++;
		}
		while (dowhile <= 5); //In do...while's case, while is a statement, and not a loop, so it needs a semicolon.

		//Loop control statements.
		System.out.println("Watch this: ");
		int breakLoop = 1;
		while (true)
		{
			if (breakLoop > 5)
			{
				break; //The break statement makes you leave the innermost loop that you are in.
			}
			System.out.println(breakLoop);
			++breakLoop;
		}
		System.out.println("Can you find the missing number?");
		for (int continueLoop = 1; continueLoop <= 5; continueLoop++)
		{
			if (continueLoop == 3)
			{
				continue; //Continue makes the loop restart.
			}
			System.out.println(continueLoop);
		}

		//Array
		//An array is a collection of variables of the same type.
		//Creating an array has a few different parts.
		int[] arr = new int[5]; //Capacity. In this case, arr holds up to 5 values.
		arr[2] = 42; //This sets the value of the second index to 42. Arrays follow 0th numbering, so indexes start at 0 instead of one.
		System.out.println("The second index in the array 'arr' has the value of " + arr[2] + "."); //To reference to an index, just write the array then the index.
		String[] myNames = {"A","B","C","D"}; //If you already know the values of all indexes, you can do all three steps in one. This is called an array literal.
		//In an array literal, the syntax is as follows: [VARIABLE TYPE][] [NAME] = {[INDEX 0],[INDEX 1],[INDEX 2]...};
		//When array literals are created, the brackets after the variable type may or may not be blank. If it is blank, it holds only as many values as it needs to.
		System.out.println("The first letter of the alphabet is " + myNames[0] + ".");

		//Summing Elements in Arrays
		System.out.println("The array myNames is has " + myNames.length + " indexes."); //You can use the length of arrays with [ARRAY NAME].length.
		int[] myArr = {6,42,3,7}; //Initializes array literal
		int arrSum = 0; //Number to store the sum of all values in myArr.
		for (int x = 0; x < myArr.length; ++x) //This says that while x is less than the ammount of indexes, add one to x.
		{
			arrSum += myArr[x]; //This adds the value of myArr[THE VALUE OF x] to arrSum.
		}
		System.out.println("6 + 42 + 3 + 7 = " + arrSum);

		//Enhanced for Loop
		//This is a for loop specifically made for arrays.
		int[] primes = {2,3,5,7};
		for (int t: primes) //The enhanced for loop will assign the value of t to the index of the iteration minus one. So the first iteration is index 0, then 1, etc
		{
			System.out.println(t + " is a prime number.");
		}

		//Multidimentional Arrays
		//These are arrays that contain other arrays.
		int[][] sample = {{1,2,3},{4,5,6}}; //This is a 2d array. The two pairs of square brackets mean this. The arrays within arrays are in {} and sepparated by ,.
		System.out.println(sample[1][0]); //This finds the second row and the first index in it. 2d arrays are defined by rows and columns.
		//You can have as many rows and columns as you want.
		sample[0][2] = 42; //You can change the values of an index that has already been set.

		//Intro to Object-Oriented Programming (OOP).
		/* Java is object-oriented, which is intended to make programming make you think like the real world.
		   An object is an independent unit with a unique identity. They also have characteristics, atributes, and behavior.
		       Characteristics: Used to describe objects
			   Atributes: Describe the current state of the object and what it is capable of doing.
			   Behavior: Specific to the object's type. */

		//Methods cont.
		sayHello(); //Calls method sayHello in the same class. You can call methods as many times as you want.
		greetUser("Kill Man"); //This calls the greetUser class and uses "Kill Man" as the parameter to fill.

		//Method Return Types cont.
		int methRet = findSum(2,5); //This gives the findSum method the parameters 2 and 5. findSum then returns the value and, in this case, assigns it to methRet.
		System.out.println("2 + 5 = " + methRet); //Outputs 7.
		int max = max(7,42);
		System.out.println("The bigger number between 7 and 42 is " + max + ".");

		//Creating Classes and Objects
		newClass dog = new newClass(); //This creates an object for the outsideClass class, in another file.
		System.out.println("Hey, look. A dog.");
		dog.bark(); //This uses the dog object for outsideClass and calls the bark method.

		//Class Atributes
		atributes at = new atributes();
		at.color = "red"; //Sets the value of the color atribute in the atributes class, using the at object.
		System.out.println("Look, a " + at.color + " car."); //You can call atributes using objects for their classes. Prints "Look, a red car."
		at.horn();

		//Access Modifiers cont.
		ppp ppp = new ppp();
		ppp.publicClass();
		String myThisNumber = ppp.thisMethod(5);
		System.out.println(myThisNumber);
		
		//Getters and Setters cont.
		gas gas = new gas(); //Creates an object for our get and set class.
		gas.setColor("Red"); //Sets color in object to Red.
		System.out.println(gas.getColor());

		//Constructors cont.
		construct cons = new construct("Red"); //When an object for a class is created, the arguments are thrown to the constructor.
		//Color will be red.
		constructDef conDef = new constructDef();
		//Color will be green.
		constructDef conDef2 = new constructDef("Green");

		//Value & Reference Types cont.
		int vrt = 5;
		addOneTo(vrt);
		System.out.println("vrt was originally " + vrt + " and is still " + vrt + ".");

		//The Math Class
		//Java provides other classes that you can use with specific arguments. For example, the math class, which does math operations on the arguments.
		int absolute = Math.abs(-46); //Math.abs is the absolute value (distance from 0) of the number in arguments. In this case, 46.
		System.out.println("The absolute value of -46 is " + absolute + ".");
		double ceiling = Math.ceil(7.234); //Math.ceil is the decimal number rounded up. In this case, 8.
		double floor = Math.floor(7.234); //Math.floor is the decimal number rounded down. In this case, 7.
		int maximum = Math.max(5,7); //Math.max gives you the maximum out of all of the arguments given, in this case, 7.
		double power = Math.pow(2,3); //Math.pow returns the value of the first parameter to the power of the second parameter, in this case, 8.0.
		double square = Math.sqrt(9); //Math.sqrt prints the argument's square root.
		int absofmin = Math.abs(Math.min(-6,3)); //You can you the math class within a math class.

		//Static
		System.out.println("COUNT = " + staticClass.COUNT); //staticClass has a static variable, so even though there is no object, you can still use it.
		staticClass staticClass = new staticClass(); //If you look in staticClass, the constructor adds one to COUNT every time it is called.
		System.out.println("An object for staticClass has been created, so COUNT = " + staticClass.COUNT);
		staticClass.tellThem();

		//Final cont.
		System.out.println("Pi = " + PI);

		//Packages cont.
		packageClass packageObj = new packageClass();
		packageObj.packageMethod();

		//Encapsulation
		/* Encapsulation is one of the four core concepts of OOP. The idea behind encapsulation is to ensure that implementation details are not visible to users,
		   such as the variables of a class being hidden from other classes, and only accessable through the methods in that class, which is called data hiding.
		   To achieve encapsulation in Java, declare the classes variables as private, and provide public getter and setter classes to modify and view the variable's values. In summary,
		   encapsulation can be used to control how data is accessed and modified, more flexible and easily changed code,
		   and the ability to change one part of a program without affecting other parts. */

		//Inheritance
		/* Inheritance lets one class aquire the properties of another. This means that a subclass inherits all of the superclass' non-private variables and methods. If you call the subclass,
		   the non-private variables and methods can be used. The class inheriting the properties of another class is called the subclass (or the derived class, or child class), and the class
		   that is being inherited is called the superclass (or the base class, or parent class). To inherit a class, type "extends [CLASS NAME]" after the class name, so if you wanted to
		   inherit a class called "inherit" into a public class called "sub," you would put in the class declaration, "public class sub extends inherit". When you inherit a class, you being
		   able to use methods and variables from the superclass is because you are calling both the superclass AND the subclass, the two classes don't just do a fusion dance. This means that
		   the constructor of the superclass is also used, and when you are calling methods from the superclass, that is where it is coming from. */

		//Polymorphism
		/* Polymorphism is when you inherit a class, but the subclass has a method with the same name. When you call a method from a subclass object, and the superclass has a method with the
		   same name, the method from the subclass will be called, because it has its own implementation of the method. */

        //Overriding and Overloading
		/* Polymorphism uses what is called method overriding to achieve what it does. It just changes what calling a method does. The rules for overriding is as follows:
		       - Should have the same return type and arguments.
	           - The access level can't be more restrictive than the method that is overridden
		       - A final or static method can't be overridden
		       - If a method is not inherited, (see inheritance)
		       - Constructors may not be overridden 
		   Overloading, on the other hand, is the same method with different parameters. This can only work in the same class. To overload, just name the same method with different return
		   types, so if the method declaration is "int math(int x, int y)", to overload it, make a second method: "double math(double x, double y)". Now, the math method will accept both int
		   and double arguments.
		   Overriding is called "runtime polymorphism", while overloading is called "compile-time polymorphism". */

		//Abstract Classes
		/* Data abstraction requires only essential information. It is like a book. When you hear book, you don't know how many pages or the color of the cover, but you understand the concept
		   of a book. Abstraction just uses essential qualities, and not specific characteristics. Abstraction in Java can be achieved by creating abstract classes and interfaces. To declare
		   an abstract class, the class must be defined as abstract.
		       - If a class is abstract, it can't be instantiated, meaning that you can't create objects of the class.
		       - You have to inherit an abstract class to use it.
		       - If there is an abstract method in the class, the class must be abstract. 
		   An abstract method is a method that is declared without implementation (without braces and followed by a semicolon), such as "abstract void methodName();"
		   Lets say that you have an abstract "animal" class with an abstract method called "makeSound"
		   abstract animal
		   {
		       abstract void makeSound();
		   } 
		   The above code creates an abstract animal class with the abstract makeSound method. Now, lets say that you needed a cat class that's makeSound is "Meow"
		   public class cat extends animal
		   {
		       public void makeSound()
			   {
			       System.out.println("Meow");
			   }
		   } 
		   The above code inherits the animal class, so it can use it, and makes details from the abstract method makeSound, in this case, making it print out "Meow". */

		//Interfaces
		/* An interface is an abstract class that only contains abstract methods. A few specifications:
		       - Defined using the "interface" keyword 
		       - May contain only static final variables 
		       - Can't have a constructor, as they can't be instantiated
		       - Interfaces CAN extend other interfaces
		       - A class can implement any number of interfaces
		   Since interfaces are implicitly abstract, you don't have to use the abstract keyword on any method or while declaring the class. Methods in an interface are automatically public,
		   meaning that you don't have to declare them as public. To use an interface, use the "implements" keyword instead of "extends". When you implement an interface, you MUST override
		   all methods. */

		//Type casting
		/* Type casting is changing the type of a value from one to another. */
		int typeCast = (int) 3.14; //To change the variable type, type ([TYPE]) in between the equal sign and the value.
		System.out.println("typeCast = " + typeCast);
		double typeCastVar = 17.59;
		typeCast = (int) typeCastVar; //Type cast uses the floor, so it rounds down. Also, you can use variables with typecast.
		System.out.println("typeCast = " + typeCast);

		//Downcasting
		/* There are two types of class casting, upcasting and downcasting. Upcasting is an instance of a subclass in a superclass. To upcast, when creating your object, type:
		       [SUPERCLASS] [NAME] = new [SUBCLASS]();
		   This will let you use subclass methods like it is part of the superclass. There is also downcasting. which is like upcasting, but for a single method call. For example:
		       [SUPERCLASS] [NAME] = new [SUPERCLASS]();
		       (([SUBCLASS])[OBJECT NAME]).[METHOD](); */

		//Anonymous Classes
		/* This lets you change classes while creating objects. To change the classes, when you are creating an object, put a curly brace after the arguments, then change whatever methods you
		   need to change, then end the curly brace, semicolon.
		       [CLASS] [OBJ] = new [CLASS]()
		       {
		           [METHOD]
                   {
		               [CHANGES]
		           }
               }; 
		   This only changes the object, not the class, so you can still have a class with default methods with a different object. */

		//Inner Classes
		/* You can place classes within classes. It is as simple as just declaring a class within a class. */

		//The equals() method
		System.out.println(7 == 6); //You can print equality.
		//If you were to do the above thing with objects, even if the constructors are the same, it compares the references, which are always different.
		/* There is also an equals() method, which has the following code needed. So if you wanted to test two objects, you would do the following: 
		       System.out.println(obj1.equals(obj2));*/

		//Enums are used to declare multiple constants. The enum is at the bottom of the file.
		Days mon = Days.MONDAY; //Sets mon to MONDAY in the Days enum
		if(mon == Days.MONDAY) //Tests if mon is equal to MONDAY in the Days enum
			System.out.println("It is monday.");

		//Using the Java API
		/* The Java API has classes that can be used easily. They are imported with import java.awt.*; The descriptions on those classes are found at 
		   http://docs.oracle.com/javase/8/docs/api/ */

		//Exception Handling
		/* Exceptions cause abnormal termination of the program. The way to avoid this is through exception handling. An error can occur for a few reasons, like:
		       - A user has entered invalid data
		       - A file that needs to be opened can't be found
		       - A network communication has been lost in the middle of communications
		       - Insufficient memory and other issues related to physical resources 
		   This can be fixed with the try catch blocks. */
		//Example
		try
		{
			int[] tryArr = new int[3];
			System.out.println(tryArr[5]);
		}
		catch (Exception e) //Exception e is used to catch all possible exceptions.
		{
			System.out.println("There is no element in the 5th index.");
		}
		//Try catch is like if else, but instead of "if this, else this", it is "try this, if you can't, do this instead".

		/*
		//Multiple Exceptions
		int divideProduct = divide(5, 0);
		//Throw can throw many exceptions, a list being here: http://www.tutorialspoint.com/java/java_builtin_exceptions.htm
		*/ //Commented out, read the divide method at bottom.
		//You can also use multiple catches in multiple exceptions.
		int cantDivideByZero = 14;
		try
		{
			System.out.println((cantDivideByZero / 0));
		}
		catch (ArithmeticException e) //This catch will run if there is an ArithmeticException and not an IOException
		{
			System.out.println("ArithmeticException");
		}
		catch (Exception e) //This catch will run if no other does, because it is at the bottom.
		{
			System.out.println("Unknown error.");
		}

		//Threads
		/* Java is a multi-threaded programming language. This means that a program can make use of available resources by running two or more components at the same time, and each component
		   handling a different task. You can subdivide these tasks into individual threads. Here is a diagram:
		       New Thread()   ---->   New   --Start()-->   Runnable   --Run()-->   Running   --Sleep(),wait()-->   Waiting
		                              ||                                           ||                              ||
		                              \/                                           \/                              \/
		                              Dead   <-------------------------------------End of execution-----------------
		   There are two ways to create a thread:
		       1. Extend the Thread class
			   2. Implement the Runnable interface
		   Every thread is prioritized to help the operating system determine the order in which to schedule threads. The priorities range from 1 to 10, each thread having a default of 5.
		   You can set priority with the setPriority() method in the Thread inheriting class. */
		//Example of extending the Thread class (see threads.java)
		threads threads = new threads(); //Makes an object to the threads class, which inherits Thread
		threads.start(); //To execute a thread, type [THREAD OBJECT].start();
		//Example of implementing the Runnable interface
		Thread threadsRunnable = new Thread(new threadsRunnable()); //new threadsRunnable makes the new Thread object use the threadsRunnable class for overriding.
		threadsRunnable.start();
		System.out.println("STOP (for 5 seconds)");
		try
		{
			Thread.sleep(5000);
		}
		catch (InterruptedException e)
		{
			System.out.println("Can't pause");
		}
		System.out.println("Hammer time.");

		//Runtime vs. Checked Exception
		/* There are two exception types, checked and unchecked (runtime). Checked exceptions are checked at compiletime, while unchecked are checked at runtime. */

		//ArrayList
		/* The Java API has classes that let you manipulate groups of objects. One of them is an ArrayList. Regular arrays in Java are fixed size, so they can't shrink or grow. ArrayLists, on
		   the other hand, are created with an initial size, but when the size gets bigger than what size it has, the collection grows automatically, and when it gets smaller, it shrinks. To
		   use it, make sure that you import java.util.ArrayList. */
		ArrayList ArrayList = new ArrayList(); //Creates an ArrayList object. Doesn't specify the datatype, so not recommended.
		ArrayList<String> ArrayListTypeVal = new ArrayList<String>(10); /* <String> after ArrayList says that the it will be an array of Strings. You have to write out the classtype of the 
																		     datatype, so Integer for int, Double for double, Float for float, Boolean for boolean, etc. The 10 in the agruments
																		     means that the ArrayList will have a size of 10 elements until the rules of regular arrays are broken. */
		ArrayList.add("Kill"); //[ArrayList NAME].add([ELEMENT VALUE]) will add an element of the value in the arguments to the ArrayList.
		ArrayList.add("Man");
		ArrayList.add("George");
		ArrayList.add("Orange");
		ArrayList.add(1, "Garnett"); //You can add to a specific index by putting [INDEX], [VALUE]; If there is a value already assigned to that index, it will push it and all after it over.
		ArrayList.remove("George"); //[ArrayList NAME].remove([ELEMENT VALUE]); will remove the first instance of an element value, so it will search from element 0 up for the element value.
		System.out.println("The values in ArrayList: " + ArrayList);
		System.out.println("There is an eigth element: " + ArrayList.contains(8)); //[ArrayList NAME].contains([NUMBER]); will return true if the index exists.
		System.out.println("The value in element 2 is: " + ArrayList.get(2)); //Will print out the value of the index.
		System.out.println("How many elements are there in the ArrayList: " + ArrayList.size()); //Will print out the number of indexes
		ArrayList.clear(); //Will wipe the ArrayList
		System.out.println("I just removed all of the elements in ArrayList, how many are left: " + ArrayList.size());

		//LinkedList
		/* LinkedLists are like ArrayLists, but LinkedLists are better for manipulating data, while ArrayLists are better at accessing and storing data. So, LinkedLists are better for
		   constant adding and removing data, while ArrayLists are good for rapid access to data. To create a LinkedList, just type the following:
		       LinkedList<[DATATYPE]> [OBJECT] = new LinkedList<[DATATYPE]>();
		   Like the ArrayList, you have to specify the classtype of the datatype, so Integer for int, String for String, Boolean for bool, etc. */

		//HashMap
		/* A HashMap is like an ArrayList that holds data for elements. */
		HashMap<String, Integer> hashmap = new HashMap<String, Integer>(); //Creates a hashmap that has elements that store a String and a corresponding Integer.
		//String in the above case is the index and Integer is the datatype that is stored in the HashMap
		hashmap.put("Kill Dude", 54); //This creates an index called Robert, with the value being 54.
		hashmap.put("Kill Gal", 53); //.put is like the .add method of ArrayList and LinkedList. It is sort of like you are naming an index.
		hashmap.put("Kill Man", 16);
		hashmap.put("Kill Boy", 12);
		hashmap.put("Kill Girl", 12);
		hashmap.put("Kebab", 46);
		hashmap.remove("Kebab"); //To remove an index, type the index name.
		System.out.println("The value of the \"Kill Man\" index is: " + hashmap.get("Kill Man")); //To call a value, you must put the index name.
		hashmap.put("Kill Man", 17); //You can overwrite elements by putting the same index name but a different value.
		System.out.println("In May, \"Kill Man\" will be " + hashmap.get("Kill Man"));
		System.out.println("Is there a key called \"Kill Gal\": " + hashmap.containsKey("Kill Gal")); //containsKey returns true if index [ARGUMENT] (in this case "Rose") exists.
		System.out.println("Is there a value of 54: " + hashmap.containsValue(54)); //containsValue returns true if there is an index that has a value of [ARGUMENT] (in this case, 54).
		//If you try to containsValue a value that does not exist, it returns null.
		for (String hashMapFor: hashmap.keySet()) //the keySet() method returns the key name.
		{
			int hashMapValue = hashmap.get(hashMapFor); //This line sets hashMapValue to the value of the current key.
			System.out.println("The key is " + hashMapFor + " and the value is " + hashMapValue + ".");
		}

		//Sets
		/* A set is a collection that can't contain duplicates. We will use HashSet for this example. */
		HashSet<String> HashSet = new HashSet<String>();
		HashSet.add("A");
		HashSet.add("B");
		HashSet.add("C");
		System.out.println("The values in HashSet: " + HashSet);
		System.out.println("How many indexes in HashSet: " + HashSet.size()); //.size prints the ammount of indexes in the set.

		//Sorting Lists
		/* You can sort lists with the sort method in the Collections class (imported at top). */
		ArrayList<String> animals = new ArrayList<String>();
		animals.add("Dog");
		animals.add("Snake");
		animals.add("Cat");
		animals.add("Horse");
		System.out.println("The animals ArrayList as it is: " + animals);
		Collections.sort(animals);
		System.out.println("The animals ArrayList sorted: " + animals);
		/* Collections.sort will sort in alphebetical order and numerical order. There are also other methods:
		       max([LIST]) //Prints the max value determined by natural ordering
		       min([LIST]) //Opposite of max
		       reverse([LIST]) //Does the opposite of sort
		       shuffle([LIST]) //Randomizes the elements */

		//Iterators
		/* Iterators lets you cycle through a collection, obtain, or remove elements. */
		Iterator<String> iterator = animals.iterator(); //To create an iterator, Iterator<[DATATYPE OF ARRAY/LIST]> [OBJECT] = [ARRAY/LIST].iterator()>
		String iteratorNextValue = iterator.next(); //.next returns the value of the next value in the cycle of an iterator.
		System.out.println(iteratorNextValue);
		/* There is also a hasNext() method, which returns true or false depending on whether or not there is another index after the one you are on. The remove() method removes the current 
		   index. */
		//Iterators are usually used in loops, like in this case:
		while (iterator.hasNext()) //Tests if there is a next index.
		{
			String iteratorValue = iterator.next();
			System.out.println(iteratorValue);
		}

		//Working with Files
		File file = new File("Files/file.txt"); //Creates an object of the File class using the file in the argument parens. Always in ".
		if (file.exists()) //.exists() method returns true if the file that corresponds with the object (in this case file.txt) exists.
		{
			System.out.println(file.getName() + " exists!"); //.getName() method will return the name of the file corresponding with the object.
		}
		else
		{
			System.out.println(file.getName() + " doesn't exist.");
		}

		//Reading a File
		try
		{
			File readFile = new File("Files/readFile.txt");
			Scanner fileReader = new Scanner(readFile); //To create a file reader, just create a scanner with the arguments being the name of the object for the file.
			while (fileReader.hasNext()) //Using the scanner to read a file is like reading an ArrayLists indexes, with the words being indexes.
			{
				System.out.print(fileReader.next() + " "); //This will print out the next word.
			}
			fileReader.close(); //This will close the file.
		}
		catch (Exception e) //If the file can't be found, it throws a FileNotFoundException
		{
			System.out.println("Couldn't create and use file reader.");
		}

		//Creating & Writing Files
		try
		{
			Formatter formatter = new Formatter("Files/createdFile.txt"); //Creates a file called createdFile.txt in the directory.
			//To write to a file, you need to use the format() method an the Formatter object. This is like printf for those that have used C.
			formatter.format("This is a file created by Java.\n"); //format() writes exactly how you tell it to.
			formatter.format("It uses the format method in the Formatter class to write to a file created by the Formatter class.");
			formatter.close(); //This closes the document. If you don't close it, all changes will be lost.
		}
		catch (Exception e)
		{
			System.out.println("Couldn't create file.");
		}

		//Random Values
		/* To use random values, you must import the java.util.Random class. */
		Random random = new Random();
		int randomNumber = random.nextInt(5); //nextInt(5) returns a random int between 0 and 4 (works like arrays; 0th numbering).
		//random.next*() works like the Scanner, with nextLong() being a long, nextBoolean() being a bool, etc.
		System.out.println("Your random number is " + randomNumber + ".");
		randomNumber = 1 + random.nextInt(6); //If you wanted to simulate rolling a die, with 6 sides, 6 as the argument would just return 0 - 5. A fix would be adding 1 to the returned value
		System.out.println("You roll a die. . . " + randomNumber + ".");

		//Any ammount of arguments
		double myAverage = average(4, 7, 4, 6, 1, 7, 8, 9, 5, 3, 2, 14, 15, 35, 48);
		System.out.println("The average of the numbers 4, 7, 4, 6, 1, 7, 8, 9, 5, 3, 2, 14, 15, 35, and 48 is " + myAverage);

		//toString cont.
		toStringPartTwo toString2 = new toStringPartTwo(5 ,7, 2000); //Object for toStringPartTwo with 5 day, 7 month, and 2000 year as it's constructor.
		toStringClass toString1 = new toStringClass("Kill Man", toString2); //The second argument is an object for toStringPartTwo
		System.out.println(toString1); //When you call an object to be printed, it also looks for the toString method.

		//.parse*()
		String dotParse = "52";
		int dotParseInt = Integer.parseInt(dotParse); //The Integer.parseInt() method turns the value of a string into an int.
		System.out.println(dotParseInt); //Prints 52
		dotParse = "52.5";
		double dotParseDouble = Double.parseDouble(dotParse); //You can do the same with doubles.
		System.out.println(dotParseDouble);
	}

	//Method Return Types cont.
	static int max(int a, int b) //Methods can be anywhere in a class, as long as they do not interfere with other methods.
	{
		//Returns the higher value.
		if (a > b) //Anything that can be done in the main, along with a few more things, can be done in a method.
		{
			return a;
		}
		else
		{
			return b;
		}
	}

	//Value & Reference Types
	static void addOneTo(int num)
	{
		num += 1; //Because this method takes the argument and stores it in a different datatype, the actual variable that is input is not affected.
		//There is no return value, so this method will operate on the variable, then store the output here without returning
	}

	//Enum cont.
	enum Days
	{
		MONDAY,
		TUESDAY,
		WEDNESDAY,
		THURSDAY,
		FRIDAY,
		SATURDAY,
		SUNDAY
	}

	//Multiple Exceptions Cont.
	/*
	static int divide(int num1, int num2) throws ArithmeticException //throws between the method and { means that the method has the ability to throw whatever exception it has
	{
		if (num2 == 0)
			throw new ArithmeticException("Division by zero"); //This method will throw an ArithmeticException
		return num1 / num2;
	}
	*/ //This method had to be commented out, as it threw an exception, which stops the program.

	//Any ammount of arguments cont.
	static double average(double...numbers) //The elipse lets you pass in as many values as you want.
	{
		double total = 0;
		for (double addition: numbers) //You can use enhanced for loops on your arguments as if they were an array.
		{
			total += addition;
		}
		double average = total / numbers.length;
		return average;
	}
}
