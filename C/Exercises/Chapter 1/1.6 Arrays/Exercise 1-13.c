/* Exercise 1-13. Write a program to print a histogram of the lengths of words in its input. It is easy to draw the histogram with the bars horizontal; a vertical orientation is more 
   challenging*/

#include<stdio.h>

#define IN        1
#define OUT       0
#define MAXLENGTH 11

main()
{
	int i = 0;
	int j =0;  /* i and j are simply index counters */  
	int c = 0;
	int nchar = 0;  /* number of characters in a word */
	int inspace = IN; /* a flag to know whether we are inside of outside the word */ 
	int wordlen[MAXLENGTH]; /* counts how many words of a particular length we have seen */
	
	for(i = 0; i < MAXLENGTH; ++i)
		wordlen[i] = 0;
	
	while((c = getchar()) != EOF)
    {
		if(c == ' ' || c == '\t' || c == '\n')
		{
			if (inspace == OUT)
			{
				if(nchar < MAXLENGTH)
					++wordlen[nchar];
			}
			
			inspace = IN;
			nchar = 0;
		}
		else
		{
			++nchar;
			if(c == '"' || c == '\'')
				--nchar;
			inspace = OUT;
		}
    }
	
	
	/* printing the Horizontal-Histogram */
	for(i = 1; i < MAXLENGTH; ++i)
    {
		printf("%2d| ", i);
		for(j = 0; j < wordlen[i]; ++j)
			putchar('*');
		
		putchar('\n');
    }
}
