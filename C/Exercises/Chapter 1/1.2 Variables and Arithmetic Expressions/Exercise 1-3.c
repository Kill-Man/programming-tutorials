/* Exercise 1-3. Modify the temperature conversion program to print the heading above the table. */

#include <stdio.h>

main()
{
	printf("Fahrenheit to celsius conversion table:\n"); /* Not too much of a chalenge */
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
	while (fahr <= upper)
	{
		celsius = (5.0 / 9.0) * (fahr - 32.0);
		printf("%3.0f %6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
}
