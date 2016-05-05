/* Exercise 1-2. Experiment to find out what happens when printf's argument string contains \c, where c is some character not listed above. */

#include <stdio.h>

main()
{
	printf("\\a\a Alarm (beep, bell) \\b Backspace \b \\f Formfeed\f \\r Cairrage Return\r \\t Tab\t \\v Verticle Tab\v \\' Single Quote \\\" Double Quote \\\\ Backslash \\\? Question Mark \\n\n");
}
