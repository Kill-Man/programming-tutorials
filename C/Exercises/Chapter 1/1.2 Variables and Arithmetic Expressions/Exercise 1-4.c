/* Exercise 1-4. Write a program to print the corresponding Celsius to Fahrenheit table. */

#include <stdio.h>

main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	celsius = lower;
	while (celsius <= upper)
	{
		fahr = (celsius + 32) * (9.0 / 5.0);
		printf("%3.0f %6.1f\n", celsius, fahr);
		celsius = celsius + step;
	}
}
