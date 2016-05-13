#!/bin/bash
#A bash script is like an interpreted programming language for the terminal.
#This is a single comment
########################
# My First Bash Script #
########################
echo "This is a bash script!" #'echo' is the command to print things out.

echo "Hello, $USER!" #You can print out environment variables, which are preset. To do this, just type a '$' in front of the environment variable in capital letters.

String="This is a string." #You can make strings, which are variables that are equal to a letter, word, sentance, and farther beyond that.
echo "$String" #Printing out an string is just like printing an environment variable, but it has the have the same capitalization of the string name.

l="ls -al" #You can make a string equal a bash command. This can be useful when you need to use a long command with a lot of options multiple times, and doing it multiple times can be tedious. To do this, put a ` (the key above tab) instead of quotes.
$l

e="echo $String" #You can also make strings equal script commands that do multiple things. Again if you have to do something more than once, might as well shorten it.
$e

#Variables cannot be numbers, but they can be commands or strings that need numbers. This is because it is automatically assumed as a string or command.
#Since numbers are not strings or commands, they cannot be used in variables. If you print it with 'echo' however, you can make numbers print, however there is no math in bash scripting.

#Next few lines lets the user create a file
echo "What do you want your new file to be named?"
read newfile
touch $newfile #While it is can be useful to set strings to commands, it is better to just put the commands as lines in the script, because if it is in bash, it can be run in a terminal, so a bash file is simply a list of commands to run.

#Next, there is an example of using strings to use the bash command 'cat'.
echo "What file do you want to display the contents of?" #This tells the user what to do.
read file #This takes the input of the user and names it file. The read command has the following syntax: 'read [VARIABLE INPUT IS ASSIGNED TO]'
cat $file #This creates a variable called read, that represents the command 'cat [THE FILE THAT THE USER PUT]'
#This executes variable read.

#This takes the input of the user, and if they get it right, it prints the message.
echo "What is 1 + 2? Enter answer below."
read number
                                 #########################################################################
if [ $number -eq 3 ]; then       #                        This is an if statement.                       #
	echo "#####################" #              It is used to test the values of variables.              #
	echo "# You got it right! #" #   The syntax goes as follows: if[$VARIABLE NAME -eq CONDITON]; then   #
	echo "#####################" #                    After starting the if statement,                   #
fi                               #   the commands that you want to happen will be put under it, tabbed.  #
                                 #            To end an if statement, type fi, or if backwards.          #
                                 #########################################################################
