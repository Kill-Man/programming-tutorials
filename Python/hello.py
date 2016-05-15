import random #important when we talk about modules. This imports the random class
from math import pi #from <CLASS> import <VAR> makes a variable in a class local
from math import sqrt, cos #You can import multiple things from a single class in a single command by delimiting with commas
from math import sqrt as square_root #when you import something as something, it will create an alias for whatever you are importing

#This is a comment, anything before a # is.
#This tutorial assumes you know the basics of C or any C-like language.
print("Hello.") #print does exactly what it says.
print('This is printed in single quotes.') #print doesn't need the string it prints to be in double quotes.

print('9 + 4 =', 8 + 4) #print is a function, so for those that know C or any C-like language, you should know that arguments are separated by commas.
#Arguments when printed are sepparated by a space.
#Addition = +, Subtraction = -, Multiplication = *, Division = /, Floor Division (Rounding down) = //, Remainder after division (modulo) = %
print('2**3 =', 2**3) #Two asterics (**) means to the power of.

print('This line is on\ntwo separate lines.') #There are escapes just like C.

print(input('Enter something: ')) #This will prompt the user for input with input's arguments. Input with only a string argument will just print what the user input.
#Input takes the input as strings. You will learn why this is important in a minute.

print('You can ' + 'also add strings.') #Like with values, you can also add strings. This will just combine the two strings.
#You can't add a string and a number even if the string is just a number.
print('This will be printed 3 times. ' * 3) #You can, however, multiply strings. This allows you to print strings multiple times.
#You can only multiply by integers, meaning that if you multiply by a float (decimal number), you will get an error.

print('2 + 3 =', int('3') + int('2')) #You can convert strings that contain only a number into a datatype (same as C (I told you that you need to know this -_-)).
print(float(input('Enter a number to be added: ')) + float(input('Enter the number you would like to add to the previous one: ')))
#This takes the input and converts it into a float from a string.

variable = 5 #Variables don't need a datatype on declaration. Python will determine the datatype for you!
print('The value of variable is', variable)
del variable #del before the name of a variable will completely remove the variable.

inputVar = input('Put in something that you want to store: ') #You can set a variable to user input.
print('The thing you input was', inputVar)

inPlace = 4
print('inPlace originally =', inPlace)
inPlace += 5 #Python has in-place operators, like in C. However, there is no increment or decrement operator, such as ++inPlace or inPlace--.
#You can use in-place operators for any datatype, as long as the two datatypes are the same.
print('inPlace += 5 =', inPlace)

torf = True #Python has booleans, and the two values are True or False (notice that they are capitalized).
print('I am cool:', torf)
myName = 'Kill Man'
print('myName == "Kill Man":', myName == 'Kill Man') #There are comparison operators just like in C.
#These comparison operators are the same as C: == != < > <= >=

ifStatement = 14
if ifStatement == 14: #if statements in Python are a little different than most programming languages. There are no parens required. Also, a colon is required when finished with conditions.
    print('This is from an if statement.') #All code in a conditional block MUST be indented.
#These conditions can be within other conditions as many times as you need.

if False: #Like in C, you can use boolean conditions in place of testable conditions.
    print('Impossible')
else: #else works just like in C.
    print('This is from an else.')
    
if False:
    print('Impossible')
elif True:
    print('From elif')
else:
    print('Unreachable')

#Boolean operators are the same as C, but written out.
if True and True: #and = &&
    print('Both True.')
else:
    print('One is false')
if True or False: #or = ||
    print('At least one is true.')
else:
    print('Both are false.')
if not False: #not !(CONDITION)
    print('Not false')

print('I\'m going to print out 1 - 5.')
i = 1

while i <= 5: #while loops are the same, and you can make them infinite with while True: aswell.
    print(i)
    i += 1

print('\nI will do this again... but skip a number and go to 10.')
i = 1
while i > 0:
    print(i)
    i += 1
    if i == 2:
        print('Skipping 2')
        continue #Continue works the same as in C.
    if i > 10:
        break #Break works the same as in C.

lists = ['\nThis', 'is', 'a', 'list', '!'] #Lists are like arrays, but are a little different, but we will discuss the difference when we talk about arrays. They follow 0th numbering.
i = 0
while i < 5:
    print(lists[i]) #Calling a list item is the same as calling an array.
    i += 1
lists = [] #A list can be empty.
print('This is an empty list:', lists)
lists = ['This list holds multiple datatypes:', 4, 3.14, True, ['This is a list in a list', 4, 7.46]] #A list can hold multiple datatypes.
i = 0
while i < 5:
    print(lists[i])
    i += 1
print(lists[4][1]) #Calling list items in a list within a list is the same as multidimentional arrays.
hello = 'Hello' #Like in C, strings are treated as a list of characters...
i = 0
while i < 5:
    print(hello[i]) #...this means that you can call a character from a string.
    i += 1
    
beast = [6, 4, 6]
print(beast)
beast[1] = 6 #You can reasign values in a list.
print(beast)
print(beast + [1, 2, 3]) #You can add lists like you can add strings.
print(beast * 3) #You can also multiply them, again, like strings.
food = ['Spam', 'eggs', 'sausage']
print('Spam' in food) #You can use the in operator to test if an item is in a list. It returns true or false.
print('tomato' in food)
print('tomato' not in food) #Either this way...
print(not 'sausage' in food) #... or this way is a way to test if something is NOT in a list.
order = [1, 2, 3]
print(order)
order.append(4) #<LIST_NAME>.append(<NUMBER>) lets you add a value to a list.
print(order)
print(len(order)) #len(<LIST>) is like <ARRAY_NAME>.length in Java.
order.insert(2, 'spam') #Insert takes two arguments, the index, then the value. It places the value at the index then moves everything over to fit it in.
print(order)
print(food.index('sausage')) #This takes the argument then prints out the index that it is located in.
#There are a few other methods and functions that we need to go over: max(<LIST>) will print the maximum value of the list, min(<LIST>) does the opposite of max()
#<LIST>.count(<VALUE>) will return the ammount of times the arguments occur in <LIST>, <LIST>.remove() is self explanitory, <LIST>.reverse() is also self explanitory.
numbers = list(range(10)) #list(range(<NUMBER>)) creates a list with a range of 10 numbers, 0 - 9.
print(numbers)
numbers = list(range(3, 8)) #2 arguments will create a list from the first argument to the second. In this case, 3 - 7.
print(numbers)
numbers = list(range(5, 20, 2)) #The third argument is the interval of the list, so this is 5, 7, 9, 11... so on.
print(numbers)

words = ['Hello', 'world', 'Kill Man', 'Austin']
for i in words: #For lets you loop with lists. This will loop as many times as the amount of items in the list words, and will set the value of i to whatever index in words.
    print(i)
for i in range(5): #This will loop 5 times and set i to
    print('hello')

def func(): #def means that you are defining a function
    print('This is printed from a function')
func()


def args(arg1): #This function takes an argument, and uses it in the function.
    print(arg1 + 1)
args(5)

def bigger(x, y): #multiple comments are delimited by comments.
    if x > y:
        return x #if a value is returned, the rest of the function isn't executed.
    else:
        return y
print(bigger(15, 65))

def docstring():
    """
    This is an example of a docstring.
    It allows for you to explain the
    function without commenting.
    """
    print('docstring example')
docstring()

def var_fun():
    print('This is a function that is printed as a variable.')
printDoc = var_fun() #You can treat functions as normal variables
printDoc

def do_twice(func): #A function can be used as an argument
    func()
    func()
do_twice(func)

print(random.randint(1, 6))
print(pi)
print(cos(65))
print(square_root(25))

try:
	print(6 / 0)
except ZeroDivisionError: #If an error happens in the try block, it is cought by the except block
	print('Unable to divide by 0.')
	
try:
	value = 5
	print(value + ' = value')
except (ValueError, TypeError): #You can have multiple exceptions using parenthasis and commas.
	print('Error')
	
try:
	print(9 / 0)
except: #You can have an except block without any exception. This will catch all exceptions.
	print('Error, divided by 0.')
finally: #finally contains code that will execute no matter what.
	print('This code will run no matter what.')
	
#raise ZeroDivisionError #This will cause the program to throw an error and quit. It's commented out so it doesn't stop the program all of a sudden.
#raise ErrorName('Error Reason') #This will throw a user created error
#You can use raise without anything after it. This should be used in an except block, as it throws the previous exception again.

assert 1 + 1 == 2 #Will test the condition given, if it returns false, program ends
#This is usually put at the beginning of a function to test if the user put the right arguments.
#assert 1 + 4 == 6, 'Doesn't evaluate true' #assert can have multiple arguments, the second being the message if it evaluates false.
