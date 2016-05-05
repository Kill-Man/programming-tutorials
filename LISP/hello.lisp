;;;; Comments at the top of a source file usually has four semicolons. Comments that define a large part of the program also have four.
;;; We will be using four for every chapter.
;;; Lisp has many different dialects. This is common lisp. It can be very useful if used to it's full extent.
;;; Anything that comes after a semicolon (;) will be commented out, meaning that anything said there is not read by the interpreter.
#|
Anything between #| and |# is a comment, but a lot of people use #|| and ||#
It can span multiple lines, and also be nested within other comments, however,
depending on the editor you are using, it may not look like it.
|#
;;; There are standard ways to comment different parts of a program, but if it is for your eyes only, comment however you want.
;;; Comments that are at the beginning of the line often are written with three semicolons.
;;; To run a lisp program, run the interpreter, then write what is on the next line.
;;; If you are using gcl, you can load it up and type the following command to read and write a file:
                                        ; >(load #p"THIS IS WHERE THE PATH TO THE .lisp FILE SHOULD GO")
                                        ; OR, you can have the load argument: $ gcl -load <FILE || PATH>
;;; However, I prefer to use Clisp, but you need backports if you are using Debian or some other debian based distro.

;;;; Printing
(write-line "Hello, world!")            ; write-line is the command to print strings. It will automatically add a new line to the end. Comments on the same line as a something have one semicolon and indented to colomn 40.

;;;; How Lisp interprets code.
(WRITE-LINE "This is LISP!")            ; Lisp is case insensitive, so commands and variables can be capitalized or lowercase.
(write (+ 7 9 11))                      ; In lisp, math is simple but different. In this case, this line prints the sum of the numbers 7, 9, and 11.
;;; Printing any math operations require you to use write instead of write-line.
;;; The write command prints what you want it to, but the output after is on the same line.
;;; The best way to counter this is to use the terpri command. This prints a new line
(terpri)
(write (+ 32 (* (/ 9 5) 60)))           ; All math operations work like above. Here, 32 + (60 * (9 / 5))
(terpri)

;;; This is whitespace. It is not interpreted and causes no syntax error, but don't overdo it.

;;;; Lisp building blocks
;;; There are three building blocks of lisp.
;;; These are atoms, numbers or sets of characters that represent something.
;;; Lists, a set of atoms.
;;; And strings, groups of characters enclosed in double quotes.
;;; Lisp tries to evaluate everything except numbers, t (logical true), and nil (logical false), all of which return their own value.
(write '(* 7 6)) ;;; Any time you don't want an atom or list to be evaluated, you put a single quote in front of it. In this case, it is literally printed.
;;; The above line is the same as writing (write-line "(* 7 6)")
(terpri)

;;;; Variables and Data Types
;;; Creating variables is easy. You do not have to declare the type, like most scripting languages.
(setq whole 10)                         ; This creates a variable called whole and sets it to the value of 10.
(print whole)                           ; To print a variable, you have to use the print command. The print works like write-line, so next output is on different line
(setq decimal 12.34)                    ; This creates a variable called decimal and sets it to 12.34
(print decimal)
(setq false nil)                        ; This creates a variable called false and sets it to nil (nil is like boolean false in C-like languages).
(print false)
(setq true t)                           ; This creates a variable called true and sets it to t (t is like boolean true in C-like languages).
(print true)
(setq euler 11.0e+4)                    ; This creates a variable called euler and sets it to 11 * (10^4).
(print euler)
(setq division 124/2)                   ; This creates a variable called division and sets it to 124 / 2, 62.
;;; When seting variables equal to equations, make sure that they have no space in between. If it were (setq division 124 / 2), division would equal 2.
;;; Math like before doesn't work when using it to set a variable. (setq division (* 124 2)) would think that it is being set equal to a variable called (* 124 2)
(print division)
(setq variable whole)                   ; This creates a variable called variable and sets it equal to the value of the variable whole.
(print variable)
(print (type-of whole))                 ; (print (type-of whole)) prints the datatype of whole
(print (type-of decimal))               ; (print (type-of decimal)) prints the datatype of decimal
(print (type-of false))                 ; You get it...
(print (type-of true))
(print (type-of euler))
(print (type-of division))
(print (type-of variable))

;;;; Macros
;;; Macros allow you to do something with data, like methods in Java or functions in C
(defmacro setTo10(num)                  ; The syntax for a macro is (defmacro <NAME OF MACRO>(ARGUMENTS) (STEP 1) (STEP 2) (ETC.)) You can have as many steps as you need in a macro, from 1 to 100
  "Creates a macro called setTo10. It sets its parameters to 10, then prints it." ; This string acts like a comment. It must go directly after the list of arguments in order for it to be interpreted as a comment.
  (setq num 10)
  ;; Comments that are indented with lisp has two semicolons (;;)
  (print num))                          ; This statement spans multiple lines, but it can all be contained in one single line, it just makes it easier to read.
(setq defMacroTest 25)                  ; Sets defMacroTest to 25
(print defMacroTest)                    ; prints defMacroTest's value
(setTo10 defMacroTest)                  ; Uses setTo10 on defMacroTest, with defMacroTest being the parameters.
(terpri)
;;; Above command sets defMacroTest to 10 then prints it.

;;;; More on variables
(defvar defVarTest 234)                     ; Defvar is a safer way to create variables, as most people use defvar to create variables, and setq to assign them.
;;; Remember that defvar only creates variables, trying to change the value of a variable will not work, but will not cause an error.
(write defVarTest)                          ; You can use print or write to print out a variable value.
(format t "defVarTest = ~d~%" defVarTest)   ; format t is like printf, for those that know C-like languages. ~d for decimals, ~f for float, ~% for newline, Google more.
;;; Anything that you could do with printf statements, like %2d, also work here as ~2d.

(let ((one 1)                               ; Let allows you to create temporary variables that belong to only that let set.
	  (two 2)
	  (three 3))
;;; Above line creates three variables, one = 1, two = 2, and three = 3.
(format t "~a ~a ~a~%" one two three))  ;Printing a let statement requires you to use ~a, which means any type.
(let ((letterX 'x)                      ; Since the letters have a ' in front of them, lisp knows that you want it to be set to the letter x instead of variable x.
	  ;; Any statement, not just defmacro, can span multiple lines
	  (letterY 'y)
	  (letterZ 'z))
  (format t "~a ~a ~a~%" letterX letterY letterZ)) ; Sets letterX to x, letterY to y, and letterZ to z, then prints it.

;;;; Constants
(defconstant PI 3.141592)               ; Defconstant creates a contstant, which is a variable that cannot be changed.
(defun area-circle(rad)                 ; defun is like defmacro, but is usually safer to use, much like defvar is safer than setq
  (terpri)                              ; (terpri) prints a new line in an output stream.
  (format t "Radius: ~5f~%" rad)
  (format t "Area: ~10f~%" (* PI rad rad))) ; The formula for finding the area of a circle is PI * (radius squared)
(area-circle 10)                        ; area-circle takes argument 10 and executes the function. More in depth explanation of defun later.

;;;; Operators
;;; There are 7 arithmetic operators; +, -, *, /, mod for modulo, rem for remainder after division, incf for increment, decf for decrement.
#||
There are 8 comparison operators; = for equal, /= for not equal, >, <, >= for greater than or equal to, <= for less than or equal to, max returns maximum value,
min returns minimum value.
||#
;;; There are three logical operations on boolean values; and means all have to be true, or means only one has to be true, not means than none must be true.
;;; Finally, there are three basic bitshift operators, which move the bits of a byte; logand, logior, and logxor.

;;;; cond
;;; Syntax for cond is (cond (test1 action1)(test2 action2)(test3 action3)...(testFoo actionFoo)) Remember that action can be actions.
(defvar condTest 10)
(cond ((> condTest 20)                  ; This line contains the test for the first condition that is evaluated.
	   (format t "condTest is less than 20~%")) ; This line finishes the first set of test and action. The test being the line above and the action being this.
	  ;; Next line has t as its test. Remember that t always evaluates as itself, true. So, if no tests evaluate true, this one does, and will trigger.
	  (t (format t "Value of condTest is ~d" condTest)))

;;;; when
(defvar whenTest 100)
(when (> whenTest 20)                   ; when is like the if statement but without an else. It is ofter used in loops
  (format t "whenTest is greater than 20~%"))
(format t "Value of a is ~d~%" whenTest)

;;;; case
;;; case works like the switch of C-like programming languages. It uses the variable for testing and puts it against many different values.
(defvar day 4)
(case day                               ; case uses variable day
	  (1 (format t "Monday~%"))         ; Concequence if day = 1
	  (2 (format t "Tuesday~%"))        ; Concequence if day = 2
	  (3 (format t "Wednesday~%"))      ; etc.
	  (4 (format t "Thursday~%"))
	  (5 (format t "Friday~%"))
	  (6 (format t "Saturday~%"))
	  (7 (format t "Sunday~%")))

;;;; if
(defvar ifTest 10)
(if (> ifTest 20)                       ; if tests the test in the first pair or parenthasis, then does the next set of parens if it is true.
	(format t "ifTest is less than 20~%")) ; What happens if the condition is true.
(format t "value of ifTest is ~d ~%" ifTest)
;;;; if with else
(if (> ifTest 20)
	(format t "ifTest is greater than 20~%")
  (format t "ifTest is less than 20~%")) ; This is in the third set of parenthasis, so it is the else, which triggers if the condition is false.
;;; The above statement is still part of the if statement.
(format t "value of ifTest is still ~d~%" ifTest)

;;;; Loops
;;;; Loop function
(defvar loopTest 10)
(loop                                   ; The loop function will loop until it finds a return statement
 (setq loopTest (+ loopTest 1))         ; Every time this loop loops, it adds one to loopTest.
 (write loopTest)
 (terpri)
 (when (> loopTest 17) (return loopTest))) ; The return statement is like the print that stops loops. Once loopTest is greater than 17, the return is triggered.
;;; Above loop prints 11-17 on different lines.

;;; loop for in
(loop for forTest in '(this is for loop) ; loop for ___ in will loop once for every item in the list at the end. The ___ will be equal to the item on the list.
	  ;; So, first loop, in this case, forTest will be equal to "this", second loop forTest will be equal to "is", and so on.
	  do (format t "~s~%" forTest))     ; Every time the loop initiates, the do is triggered.

;;; loop for from
(loop for loopFrom from 10 to 20        ; loop for ___ from will loop from the first value to the second value, with each initialization being equal to the loop.
	  ;; So, first loop, in this case, loopFrom will be equal to 10, second loop loopFrom will be equal to 11, and so on, until 20.
	  do (print loopFrom))              ; Prints the value of loopFrom until the loop ends.

;;; loop for with if statement
(loop for ifLoop from 10 to 20          ; Will loop from 10 to 20
	  if (evenp ifLoop)                 ; You can put if statements in a loop, in this case, it tests if ifLoop is even and if it is...
	  do (print ifLoop))                ; It will print it.
(terpri)                                ; Should always be last line. So last line of program doesn't have the GCL info on the same line.
