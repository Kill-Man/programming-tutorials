//Like Java, everything behind a // is a single line comment.
alert("This is JavaScript!"); //Every statement in JavaScript ends in a semicolon.
/* And everything between a set of forward slash and asteric
   is a multiline comment */
document.write("Welcome to JavaScript!<br>"); //To print a new line, just put a <br> tag, because, if you remember correctly, you can use HTML tags in JavaScript.

//JavaScript has variables, which holds a value and keeps it until it is changed.
var variable = 10; //JavaScript doesn't need a datatype when declaring variables. It is simply a variable that holds a value. Var names must start with $, _, or a letter.
//The equal sign is used as an assignment operator, so if you were to type var x = y, you would be assigning the value of y to x.
document.write("The value of variable is " + variable + "<br>"); //To print out the value of a variable, just type document.write, and in the arguments, put no quotation marks around the name.
//Like java, you can print out multiple variables or a combination of strings and variables by putting a plus between the variable name and the string.
//There are no quotes around a variable name because if there were, JavaScript assumes that you are printing it literally, so the output in this case would be variable instead of 10.
var decimal = 55.55; //Variables are always stored as double precision floating points.
document.write("The value of decimal is " + decimal + "<br>");
var programming = "JavaScript"; //To create a string, just put the variable value in quotes, single or double.
document.write(programming + " is fun.<br>");
var quotes = "'<--These-->'"; //You can use quotes within quotes, as long as they are not the same as the quotes that they are held in.
//If you want to make a string that has single quotes, you may want to put the value in double quotes, and vice versa.
document.write(quotes + " are quotes.<br>");
var moreQuotes = "\"<--These-->\""; //If you do put the same quotes around the inside quotes, you have to escape them by putting a \ before it.
document.write(moreQuotes + " are also quotes.<br>");
//Escape characters include \' if surrounded by single quotes, \" if surrounded by double quotes, \\ if you want to show a single backslash, and all other C like escape characters.
var bool = true; //A variable can be true or false. This is called a boolean
document.write("A boolean can be either " + bool + " or false.<br>");
//Arithmetic operators are the same as in Java, + for add, - for subtract, * for multiply, / for divide, % for modulo, ++ increment, -- decrement.
var math = 4 + 5;
document.write("math = " + math + "<br>");
++math;
document.write("math + 1 = " + math + "<br>");
var increment = math++; //Incrementing works like it does in other C like languages.
document.write("math = " + math + " and increment = " + increment + "<br>");
//Assignment operators use arithmetic operators to reasign a variable.
var asop = 14;
document.write("asop = " + asop);
asop += 5; //Put the operator that you want to use in front of an equal sign. This statement is equal to asop = asop + 5. You can use it with +=, -=, *=, /=, and %=.
document.write("asop += 5 = " + asop);