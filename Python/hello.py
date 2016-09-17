import random # important when we talk about modules. This imports the random class
from math import pi # from <CLASS> import <VAR> makes a variable in a class local
from math import sqrt, cos # You can import multiple things from a single class in a single command by delimiting with commas
from math import sqrt as square_root # when you import something as something, it will create an alias for whatever you are importing
from itertools import count # The count function is an iterator that counts up starting from the value that is passed to it, and continues infinitely.
from itertools import cycle # The cycle function iterates through an iterable infinitely, so it restarts after it is done.
from itertools import repeat # The repeat function repeats its first argument the second argument ammount of times, so repeat(10, 3) -> 10 10 10
from itertools import takewhile # The takewhile function takes an item from an iterable while the first argument (a boolean returning lambda or function) returns true.
from itertools import chain # This combines a bunch of iterable elements into one long one.
from itertools import accumulate # This returns the total ammount of values in an iterable.
from itertools import product # This returns a list of all possible combinations of the first and second argument, product(['A', 'B'], range(2)) -> [('A', 0), ('A', 1), ('B', 0), ('B', 1)]
from itertools import permutations # This returns all possible arangements of the elements in the list given, permutations(['A', 'B']) -> [('A', 'B'), ('B', 'A')]

# This is a comment, anything before a # is a comment.
# This tutorial assumes you know the basics of C or any C-like language.
print("Hello.") # print does exactly what it says.
print('This is printed in single quotes.') # Strings can be in single or double quotes.

print('9 + 4 =', 8 + 4) # print is a function, so for those that know C or any C-like language, you should know that arguments are separated by commas.
# Arguments when printed are sepparated by a space.
# Addition = +, Subtraction = -, Multiplication = *, Division = /, Floor Division (Rounding down) = //, Remainder after division (modulo) = %
print('2 ** 3 =', 2 ** 3) # Two asterics (**) means to the power of.

print('This line is on\ntwo separate lines.') # There are escapes just like C.

print(input('Enter something: ')) # This will prompt the user for input with input's arguments. Input with only a string argument will just print what the user input.
# Input takes the input as strings. You will learn why this is important in a minute.

print('You can ' + 'also add strings.') # Like with values, you can also add strings. This will just combine the two strings.
# You can't add a string and a number even if the string is just a number.
print('This will be printed 3 times. ' * 3) # You can, however, multiply strings. This allows you to print strings multiple times.
# You can only multiply by integers, meaning that if you multiply by a float (decimal number), you will get an error.

print('2 + 3 =', int('3') + int('2')) # You can convert strings that contain only a number into a datatype (same as C (I told you that you need to know this -_-)).
print(float(input('Enter a number to be added: ')) + float(input('Enter the number you would like to add to the previous one: ')))
# This takes the input and converts it into a float from a string.

variable = 5 # Variables don't need a datatype on declaration. Python will determine the datatype for you!
print('The value of variable is', variable)
del variable # del before the name of a variable will completely remove the variable.

inputVar = input('Put in something that you want to store: ') # You can set a variable to user input.
print('The thing you input was', inputVar)

inPlace = 4
print('inPlace originally =', inPlace)
inPlace += 5 # Python has in-place operators, like in C. However, there is no increment or decrement operator, such as ++inPlace or inPlace--.
# You can use in-place operators for any datatype, as long as the two datatypes are the same.
print('inPlace += 5 =', inPlace)

torf = True # Python has booleans, and the two values are True or False (notice that they are capitalized).
print('I am cool:', torf)
myName = 'Kill Man'
print('myName == "Kill Man":', myName == 'Kill Man') # There are comparison operators just like in C.
# These comparison operators are the same as C: == != < > <= >=

ifStatement = 14
if ifStatement == 14: # if statements in Python are a little different than most programming languages. There are no parens required. Also, a colon is required when finished with conditions.
    print('This is from an if statement.') # All code in a conditional block MUST be indented.
# These conditions can be within other conditions as many times as you need.

if False: # Like in C, you can use boolean conditions in place of testable conditions.
    print('Impossible')
else: # else works just like in C.
    print('This is from an else.')
    
if False:
    print('Impossible')
elif True:
    print('From elif')
else:
    print('Unreachable')

# Boolean operators are the same as C, but written out.
if True and True: # and = &&
    print('Both True.')
else:
    print('One is false')
if True or False: # or = ||
    print('At least one is true.')
else:
    print('Both are false.')
if not False: # not !(CONDITION)
    print('Not false')

print('I\'m going to print out 1 - 5.')
i = 1

while i <= 5: # while loops are the same, and you can make them infinite with while True: aswell.
    print(i)
    i += 1

print('\nI will do this again... but skip a number and go to 10.')
i = 1
while i > 0:
    print(i)
    i += 1
    if i == 2:
        print('Skipping 2')
        continue # Continue works the same as in C.
    if i > 10:
        break # Break works the same as in C.

lists = ['\nThis', 'is', 'a', 'list', '!'] # Lists are like arrays, but are a little different, but we will discuss the difference when we talk about arrays. They follow 0th numbering.
i = 0
while i < 5:
    print(lists[i]) # Calling a list item is the same as calling an array.
    i += 1
lists = [] # A list can be empty.
print('This is an empty list:', lists)
lists = ['This list holds multiple datatypes:', 4, 3.14, True, ['This is a list in a list', 4, 7.46]] # A list can hold multiple datatypes.
i = 0
while i < 5:
    print(lists[i])
    i += 1
print(lists[4][1]) # Calling list items in a list within a list is the same as multidimentional arrays.
hello = 'Hello' # Like in C, strings are treated as a list of characters...
i = 0
while i < 5:
    print(hello[i]) # ...this means that you can call a character from a string.
    i += 1
    
beast = [6, 4, 6]
print(beast)
beast[1] = 6 # You can reasign values in a list.
print(beast)
print(beast + [1, 2, 3]) # You can add lists like you can add strings.
print(beast * 3) # You can also multiply them, again, like strings.
food = ['Spam', 'eggs', 'sausage']
print('Spam' in food) # You can use the in operator to test if an item is in a list. It returns true or false.
print('tomato' in food)
print('tomato' not in food) # Either this way...
print(not 'sausage' in food) # ... or this way is a way to test if something is NOT in a list.
order = [1, 2, 3]
print(order)
order.append(4) # <LIST_NAME>.append(<NUMBER>) lets you add a value to a list.
print(order)
print(len(order)) # len(<LIST>) is like <ARRAY_NAME>.length in Java.
order.insert(2, 'spam') # Insert takes two arguments, the index, then the value. It places the value at the index then moves everything over to fit it in.
print(order)
print(food.index('sausage')) # This takes the argument then prints out the index that it is located in.
# There are a few other methods and functions that we need to go over: max(<LIST>) will print the maximum value of the list, min(<LIST>) does the opposite of max()
# <LIST>.count(<VALUE>) will return the ammount of times the arguments occur in <LIST>, <LIST>.remove() is self explanitory, <LIST>.reverse() is also self explanitory.
numbers = list(range(10)) # list(range(<NUMBER>)) creates a list with a range of 10 numbers, 0 - 9.
print(numbers)
numbers = list(range(3, 8)) # 2 arguments will create a list from the first argument to the second. In this case, 3 - 7.
print(numbers)
numbers = list(range(5, 20, 2)) # The third argument is the interval of the list, so this is 5, 7, 9, 11... so on.
print(numbers)

words = ['Hello', 'world', 'Kill Man', 'Real Name']
for i in words: # For lets you loop with lists. This will loop as many times as the amount of items in the list words, and will set the value of i to whatever index in words.
    print(i)
for i in range(5): # This will loop 5 times and set i to
    print('hello')

def func(): # def means that you are defining a function
    print('This is printed from a function')
func()


def args(arg1): # This function takes an argument, and uses it in the function.
    print(arg1 + 1)
args(5)

def bigger(x, y): # multiple comments are delimited by comments.
    if x > y:
        return x # if a value is returned, the rest of the function isn't executed.
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
printDoc = var_fun() # You can treat functions as normal variables
printDoc

def do_twice(func): # A function can be used as an argument
    func()
    func()
do_twice(func)

print(random.randint(1, 6))
print(pi)
print(cos(65))
print(square_root(25))

try:
	print(6 / 0)
except ZeroDivisionError: # If an error happens in the try block, it is cought by the except block
	print('Unable to divide by 0.')
	
try:
	value = 5
	print(value + ' = value')
except (ValueError, TypeError): # You can have multiple exceptions using parenthasis and commas.
	print('Error')
	
try:
	print(9 / 0)
except: # You can have an except block without any exception. This will catch all exceptions.
	print('Error, divided by 0.')
finally: # finally contains code that will execute no matter what.
	print('This code will run no matter what.')
	
# raise ZeroDivisionError #This will cause the program to throw an error and quit. It's commented out so it doesn't stop the program all of a sudden.
# raise ErrorName('Error Reason') #This will throw a user created error
# You can use raise without anything after it. This should be used in an except block, as it throws the previous exception again.

assert 1 + 1 == 2 # Will test the condition given, if it returns false, program ends
# This is usually put at the beginning of a function to test if the user put the right arguments.
# assert 1 + 4 == 6, 'Doesn't evaluate true' #assert can have multiple arguments, the second being the message if it evaluates false.

myFile = open('file.txt') # The open method takes the argument of a file name. If the file doesn't exist already, you must create it. Python doesn't do it automatically.
# open has two possible arguments, the first being the name of the file, the second is the mode of the opening, 'w' for write, 'r' for read, 'a' to append to the end of file, and a 'b' at the end to specify that it is binary, so 'wb' would write binary.
print(myFile.read()) # file.read() will return the value of the files.
# If you read from a file that has already been read to the end of a file, then nothing will print, because you are reading the end of it.
myFile.close() # If you open a file, you must close it.
myFile = open('file.txt')
print(myFile.readline()) # The readline function will read a single line from a file.
print(myFile.readline()) # If you read a line already, then you read the next line after that.
myFile.close()
myFile = open('file.txt')
print(myFile.readlines()) # readlines function will read out all lines.
myFile.close()
myFile = open('file.txt')
helloString = ''
for line in myFile: # You can use a for loop to evaluate each line in a file.
    print(line)
    if line == 'Hello\n':
        helloString = helloString + 'The file says hello'
myFile.close()
print(helloString)

myFile = open('writeFile.txt', 'w') # In write mode, any content is overwritten
myFile.write('This is writen by the Python program') # This method returns the ammount of bytes writen to the file.
myFile.close()

# You can ensure that a file is closed even if an error occurs while it is open or being opened by using try and finally, with try being what to do with the file, and finally being the code to close it.
# You can also use a with block to open, read, and write files easily.
with open('file.txt') as f: # at the end of a with block, the file is always closed, so no f.close is needed. In with blocks, usually the file is represented as f.
    print(f.read())

# The None datatype is used to represent a variable not having a value. When used in boolean operation, it returns false. A function that does not explicitly return anything returns None.

# A dictionary is like a list but instead you can use an immutable object as a key to a value. In this example, the immutable object key is a string.
ages = {"Kill Man": 16, "Brothers": 12, "Some twenty year old": 20} # Accessing a value through a dictionary key is like accessing a list item in a list.
print("Kill man is", ages["Kill Man"], " years old.")
print("My brothers are", ages["Brothers"], "years old.")
print("Some twenty year old is", ages["Some twenty year old"], "years old.")
ages["King"] = "Kill Man" # A dictionary can also have multiple datatypes as keys and values. Also, you can ADD key:value sets.
print("King" in ages) # The in keyword can be used to test if a key is in a dictionary. It returns true if the key is in the dictionary.
print("Loser" not in ages) # not in is simply the opposite of in.
print(ages.get("King")) # The get dictionary method is the same as indexing, but returns a certain value if it returns false, None by default.
print(ages.get("Loser", "There are no losers in the King Room."))

# A tuple is like a list, but it's values cannot be changed.
tuple = ("This", "is", "a", "tuple") # Parens are not required
print(tuple[0])
# tuple[0] = "That" # This would throw an error.

# A list slice is a way of getting a range of indexes from a list or tuple.
listSlice = ["This", "list", "will", "be", "sliced"]
print(listSlice[1:4]) # Will print "["list", "will", "be"]", which is index 1 - 3. The first argument is included, but not the second.
print(listSlice[:4]) # If there is no first value, it is assumed to be the beginning.
print(listSlice[2:]) # If there is no second value, it is assumed to be the end.
print(listSlice[0:4:2]) # There can also be a third value, which represents the step at which the values are taken, so #:#:2 will print out every two values.
print(listSlice[:-1]) # You can use a negative value, which will start at the end. So if the last index is 18, -1 is index 17
print(listSlice[::-1]) # Using ::-1 is an easy way to reverse a list.

listCoprehension = [i + 2 for i in range(10)] # A list comprehension allows you to automatically create a list.
# It works as if there is a for loop being used to fill up the list.
print(listCoprehension)
listComprehensionIf = [i ** 2 for i in range(50) if i % 2 == 0] # You can put an if statement in a list comprehension, so the value will only be added if the if statement returns true.
print(listComprehensionIf)
# Make sure that the list isn't too big, as a list comprehension that is too big will throw a MemoryError.

formatted = "This {0} is {1}.".format("string", "formatted") # The format method formats it's cooresponding string. Each number inside the { and } is the cooresponding argument of format, {0} being the first, {1} being second.
print("My name is {name} and my age is {age}.".format(name = "Kill Man", age = "a good number")) # Named arguments can also be used with format.

# There are many more string methods than what you have already known.
print(", ".join(["Cat", "Dog", "Horse", "Fourth animal"])) # The join method takes a list of strings and prints them, sepparated by its cooresponding string.
print("Kill Man is a loser!".replace("loser", "KING")) # The replace method replaces all instances of the first argument with the second argument.
print("King Kill Man".startswith("King")) # The startswith method returns true if the string starts with its argument.
print("King Kill Man".endswith("Man")) # The endswith method returns true if the string ends with its argument.
print("this is all caps".upper()) # The upper method will make all characters in the string uppercased.
print("THIS IS ALL LOWERCASE".lower()) # The lower method will make all characters in the string lowercase.
print("this, is, a, list".split(", ")) # The split method will read the string, and sepparate the string into a list of strings, each list item sepparated by the argument passed to split.

print(min(3, 7, 4, 5, 8, 6)) # The min function will return the lowest value out of a series of arguments, or a list.
print(max([1, 2, 3, 4, 6, 8, 10, 5, 9, 7])) # The max function is the opposite of min, and returns the HIGHEST value.
print(abs(-36)) # abs returns the absolute value of its argument.
print(sum([1, 2, 3, 4, 5, 6, 7, 8, 9, 10])) # The sum function returns the sum of all of it's arguments, and can be passed a list.

listfuns = [11, 22, 33, 44, 55]
if all([i > 5 for i in listfuns]): # The all function takes a list as an argument, and returns true if all of the values in the list are coorespondent to the conditional. A simple way to think of it:
    # all([<CONDITION> for <VALUE ALIAS> in <LIST>])
    print("All values in listfuns are greater than 5.")
if any([i % 2 == 0 for i in listfuns]): # any is like all, but will return true if ANY of the values in the list coorespond to the conditional.
    print("At least one value in listfuns is even.")
for i in enumerate(listfuns): # enumerate will the list that is passed into individual enumerations.
    print(i)

# There are two types of functions, pure, and impure.
# A pure function has no side affects and returns a value based just on the arguments.
# An impure function has side affects, and relies on outside things other than the arguments.
# A side affect is the state of the program outside of the function being changed.

# A function is automatically assigned to a variable, at least, when it is used with def. Any other object can be created on the fly, with literal values, with a literal string being in "quotes", a literal int being a number, etc.
# A lambda is like a function literal value.
def useLambda(func, arg):
    return func(arg)
print(useLambda(lambda x: 2 * x, 5)) # This lambda takes an argument, x, and the steps that are done to it come after the colon. This line will print ten.
print((lambda x: x ** 3)(5)) # Should print 125. This is because the value in the second set of parenthasis are the arguments for the lambda in the first.
lambdafun = lambda x: x / 2
print(lambdafun(20)) # The reason the output after the math is done is returned is because a lambda only has one line of code, and that line is returned.

mapfun = [11, 22, 33, 44, 55]
print(mapfun)
mapfunmaped = list(map(lambda x: x * 2, mapfun)) # The map function returns an iterable, with each iteration being the second argument being passed to the first argument. The list function takes an iterable and turns it into a list.
print(mapfunmaped)

filterfun = [11, 22, 33, 44, 55]
print(filterfun)
filterfunfiltered = list(filter(lambda x: x % 2 == 0, filterfun)) # filter only returns an iterable that contains values that abide to the function in the first, which should return a boolean.
print(filterfunfiltered)

# A generator is a function that acts like an iterator, and uses yield to do so.
def countdown(x):
    while x > 0:
        yield x # Yield returns a value, but will continue to run the function until it is left.
        x -= 1
for i in countdown(10):
    print(i)
print(list(countdown(30)))

# decorate is what is called a "decorator", which is simply a function that modifies a function.
def decorate(func):
    def decoration():
        print("############")
        func()
        print("############")
    return decoration
def print_hello():
    print("Hello world!")
decoratedfun = decorate(print_hello())
print(decoratedfun)

@decorate # The @ operator is makes the next function created modified by a decorator.
def print_king():
    print(" Kill Man!")
print_king()

# Recursion is a function calling itself. A good example of this is a factorial function.
def factorial(num):
    if num == 1:
        return 1 # This is the base case, or where the recursion ends. It ends because the function is no longer called. Not having a base case throws an error, as the function will go on infinitely.
    else:
        return factorial(num - 1) # This is where the recursion starts.
print(factorial(5))

val_set = {1, 2, 3, 4, 5} # A set is like a list, but can only store one of each value, so there cannot be two 5s in a set.
# You can also create a set out of the set function and a list passed to it.
print(val_set)
val_set.add(6) # Instead of append, a set has add.
val_set.remove(1) # You can remove an element
val_set.pop() # The pop method removes an arbitrary element.
print(val_set)
other_set = {3, 4, 5, 6, 7}
print(val_set | other_set) # The pipe combines two sets to create a new one that has elements from both.
print(val_set & other_set) # The ampersand creates a new set that contains only the elements that both sets contain.
print(val_set - other_set) # The hyphen operator gets items from the first set that aren't in the second.
print(val_set ^ other_set) # The carat operator gets items from the sets that are not in both.

class person: # A class is a set of data, variables (atributes) and functions (methods), that is like a blueprint for an object. Classes are the basis for what is called "Object Oriented Programming (OOP)".
    def __init__(self, name, age): # The init method sets everything up in the class. It sets the values to the variables and does everything to prepare the class for use. It is called when an instance of the class is created. self is the first parameter, but isn't necessary when calling the method. self refers to the instance calling a method. It is the constructor of the class.
        self.name = name # Here, name is an atribute, or a variable that belongs to a class.
        self.age = age # self.age is the atribute that belongs to the class, while age is the method parameter.
        # All atributes should be declared in the __init__ method.
    def name_change(self, new_name): # Defining a method is just defining a function inside of a class.
        self.name = new_name
    def become_older(self):
        self.age += 1
Jerry = person("Jerry", 69420) # This creates an instance of the person class called Jerry, with the name atribute being "Jerry", and his age being 69420.
print(Jerry.name)
print(Jerry.age)
Jerry.name_change("Jerry Sienfeld")
Jerry.become_older()
print(Jerry.name)
print(Jerry.age)
input('')