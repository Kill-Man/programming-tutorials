<!DOCTYPE html>
<html>
<body>
<?php
// This file goes in the index.php file.
// This is a single line comment.
# This is also a single line comment.
/*
 * This is a multiline comment.
 */
echo('Hello'); // echo prints its arguments. Anything in quotes will be printed.
echo '<br>'; // Will talk about this in a second.
echo "This is PHP!"; // echo needs no parenthasis, and double quotes work.
/*
 * It doesn't need parenthasis because it is part of the language, not just a
 * function of it.
 * In the case of double quotes, if you were to put the name of a variable
 * within double quotes, the value of the variable will be printed, not the
 * literal name.
 */
echo '<br>';
echo '<b>You can use HTML tags in PHP.</b>'; // You can use html tags in PHP.
echo '<br>'; // Since you can use HTML tags, you can use <br> like \n.
$var = 5; // To create a variable, put a $ before the name of it.
/*
 * Like any other scripting language, you don't have to declare the datatype,
 * and a variable can hold any datatype.
 */
echo '$var = ' . $var . '<br>'; // Next Multi
/*
 * To print a variable, just put the name of the var including the $. The '.'
 * between variables and strings allow you to print them in the same command.
 * In this case, the above command will print, "$var = 5<br>" is the same as
 * having three commands like this that do the same:
 *      echo '$var = ';
 *      echo $var;
 *      echo '<br>';
 */
define('PERMAVAR', 'This is a permavar.'); // Next Multi
/*
 * This create a variable with a permanant value.
 */
echo PERMAVAR . '<br>'; // Printing a constant doesn't require a $ before it.
define('CaseInsens', 'This constant is case insensitive.', true); // Next multi
/*
 * The third argument in the define function says whether the constant is case
 * sensitive.
 */
echo caseinsens . '<br>'; // caseinsens isn't capitalized, but it prints.
$twelve = 12;
$year = '2016';
$yearintwelve = $twelve + $year; // Next multi
/*
 * PHP can convert datatypes. This means that you can add a string and an int
 * and it will treat the string as a number. There are a few math operators,
 *      - = subtraction
 *      + = addition
 *      * = multiplication
 *      / = division
 *      % = modulo (remainder after division)
 * There are also increment and decrement operators, with prefix and postfix
 * versions of them. They work the same as in C-like languages (++ and --).
 * There are also conjunction operators, like in C-like languages:
 *      x += y is the same as x = x + y
 *      x -= y is the same as x = x - y
 *      x *= y is the same as x = x * y
 *      x /= y is the same as x = x / y
 *      x %= y is the same as x = x % y
 * Comparison operators are the same as C, with a few extra:
 *      <> is "not equal to". There is no difference between this and !=
 *      === is "identical". This will test the value AND the datatype.
 *      !== is "not identical". This is like != and === combined.
 * There are also logical operators similar to C in PHP:
 *      and = && = both conditions have to be true.
 *      or = || = only one condition needs to be true.
 *      ! = condition will evaluate to true if false, and false if true.
 *      xor = only one condition can be true, not both.
 */
echo '$twelve + $year = ' . $yearintwelve . '<br>'; // 'twelve + year = 2028.
$varvar = 'var'; // Creates a variable and sets it equal to string 'var'.
echo '$varvar = "var"; $var = 5; $$varvar = ' . $$varvar . ';<br>'; // Next mult
/*
 * $$varvar takes the value of varvar and turns it into the name of a variable.
 * Flow:
 *      $$varvar = $var = 5 ($varvar translates to var because $varvar is a
 *      string that equals 'var', so now $$varvar is $var. After this, it just
 *      translates to 5 because $var is 5)
 */
$phpArray = array('This', 'is', 'an', 'array.');
// You can set the value of array elements just like in C:
//      $phpArray[0] = 'That';
echo "$phpArray[0] $phpArray[1] $phpArray[2] $phpArray[3]<br>";
// above is an example of variables in double quotes.
$multiArr = array('An array can hold multiple datatypes: ', 15, '<br>');
echo "$multiArr[0]$multiArr[1]$multiArr[2]";
$assocArr = array('Name' => 'Kill Man', 'Age' => 16);
echo '$assocArr["Name"] = ' . $assocArr['Name'] . ', $assocArr["Age"] = ' .
     $assocArr['Age'] . '<br>';
$twoDimensArr = array(array('11', '12'), array('13', '14'));
echo '$twoDimensArr[0][1] = ' . $twoDimensArr[0][1] . ', $twoDimensArr[1][0] = '
     . $twoDimensArr[1][0] . '<br>';

$val1 = $val2 = 15;
echo '$val1 = $val2 = 15<br>';
if ($val1 == $val2) { // if tests the value in the parenthasis.
    echo '$val1 == $val2<br>'; // If true, this is executed.
}

if ($val1 < $val2) {
    echo '$val1 < $val2<br>';
} else { // The else block will execute if it's cooresponding if is false.
    echo '$val1 >= $val2<br>';
}

$val2 = 16;
echo '$val1 = $val2 = 16<br>';
if ($val1 > $val2) {
    echo '$val1 > $val2<br>';
} elseif($val1 < $val2) { // elseif will trigger if its cooresponding if doesn't
    echo '$val1 < $val2<br>';
} else {
    echo '$val1 == $val2<br>';
}

if (true) // If there is only one line executed if the condition is true. . .
    echo 'Condition is true<br>'; // . . . then you don't need braces ({}). . .
// . . . this is true for any condition block.

$whileVar = 1;
while ($whileVar < 6) { // The while loop will execute the block until false.
    echo '$whileVar = ' . $whileVar . '<br>';
    $whileVar++;
}

$i = 0;
do { // do is like while but it will ALWAYS run at least once.
    echo 'This will print 5 times<br>';
    $i++;
} while ($i < 5); // This is tested AFTER the first do.

for ($forVar = 0; $forVar < 5; $forVar++) { // for works like in C.
    echo 'This is printed by a for loop<br>';
}

/*
 * foreach will take an array and make each value in it equal to the var after
 * the as keyword.
 */
foreach (array('Alpha', 'Bravo', 'Charlie') as $name) {
    echo '$name = ' . $name . '<br>';
}

// Another way you can use the foreach loop is (array() as $key => $name), where
// $name is the name of the element in array[$key].
foreach (array('Delta', 'Echo', 'Foxtrot') as $key => $name) {
    echo '$name = ' . $name . ', $key = ' . $key . '<br>';
}

$switchVar = 5;
switch ($switchVar) { // switch works just like in C.
case 1:
    echo '$switchVar = 1.<br>';
    break; // break works just like in C.
case 2:
    echo '$switchVar = 2<br>';
    break;
case 3:
    echo '$switchVar = 3<br>';
    break;
default:
    echo '$switchVar is not 1, 2, or 3.<br>';
}

// To save space, the continue statement works just like in C.

function sayHello() { // A function is a block that can be used repeatedly.
    echo 'Hello<br>'; // Everything inside the braces are part of the function.
}
// This line calls the function sayHello.
sayhello(); // php functions are not case sensitive.

function say($string) { // $string is a parameter. This lets you . . .
    echo $string; // . . . pass a value that will be used in the function.
}
say('This is printed by a function.<br>');

// A default argument allows you to give a parameter a value if none is given.
function defaultArg($string = 'No argument passed<br>') {
    echo $string;
}
defaultArg(); // We can use defaultArg without a parameter because it defaults.

function add($val1, $val2) {
    return $val1 + $val2; // The return statement works like in C.
}
echo add(7, 15) . '<br>';

/*
 * $_SERVER is a superglobal, a variable that can be accessed everywhere,
 * no matter the scope. The $_SERVER superglobal is an array that holds info
 * about the server, such as headers, script locations, or paths.
 */
echo 'The name of this script is ' . $_SERVER['SCRIPT_NAME'] . '<br>';
# A full list of elements here: https://api.sololearn.com/DownloadFile?id=2378

$file = fopen('file.txt', 'w'); // fopen opens an existing file, or if it. . .
// . . . doesn't exist yet, when opened with 'w' or 'a', it is created. 'w'
// stands for write, which overwrites all contents of a file, 'a' stands for
// append, 'r' stands for read. 'x' creates a file for writing. You can add a
// '+' to make it read and write.
fwrite($file, "This was written to\n"); // fwrite writes. . .
// . . . the string to the file variable. \n means newline.
// When using escape characters, put them in double quotes.
fwrite($file, "the file using php.\n");
fclose($file); // fclose closes the file.

$file = fopen('file.txt', 'a');
fwrite($file, "This was appended\n");
fwrite($file, "to the file.\n");
fclose($file);

echo 'Write to a file:<br>';
?>

<form method="POST">
  <input type="text" name="text" />
  <input type="submit" name="submit" value="Write" />
</form>

<?php
if (isset($_POST['text'])) {
    $file = fopen('input.txt', 'w');
    fwrite($file, $_POST['text']);
    fclose($file);
    echo 'Content of your input (written to the first line of input.txt):<br>';
    // Next three lines will be talked about soon.
    $file = file('input.txt');
    foreach ($file as $line) {
        echo $line . '<br>';
    }
}

echo 'Contents of file.txt:<br>';
$file = file('file.txt'); // file reads from a file and puts each line as. . .
// . . . an element in an array.
foreach($file as $line) {
    echo $line . '<br>';
}
// count() counts how many elements there are in an array.
echo 'There are ' . count($file) . ' lines in file.txt.<br>';
// Notice that $file was never closed. This is because $file is an array, not a
// file pointer.
?>
</body>
</html>
