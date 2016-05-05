/* Exercise 1-17. Write a program to print all input lines that are longer than 80 characters. */

#include <stdio.h>
#define MAXLINE 1000

/* void copy(char source[], char dest[]); */

main()
{
	int c, str[MAXLINE];
	for (int i = 0; i < MAXLINE && (c = getchar()) != EOF; ++i)
	{
		if (c == '\n')
		{
			str[i + 1] = '\0';
			i = 0;
		}
		else if (i >= 80)
		{
			printf("%s", str);
		}
		str[i] = c;
	}
}
/*
void copy(char source[], char dest[])
{
	for (int i = 0; source[i] != '\0'; ++i)
	{
		dest[i] = source[i];
	}
}
*/
