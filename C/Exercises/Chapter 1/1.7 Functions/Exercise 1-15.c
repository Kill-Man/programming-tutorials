/* Rewrite the temperature conversion program of Section 1.2 to use a function for conversion. */

#include <stdio.h>

float fahrToCel(int fahr);
float celToFahr(int cel);

int main()
{
	printf("%.2f\n", fahrToCel(100));
	printf("%.2f\n", celToFahr(100));
	return 0;
}

float fahrToCel(int fahr)
{
	float cel = (fahr - 32) / 1.8;
	return cel;
}

float celToFahr(int cel)
{
	float fahr = cel * 1.8 + 32;
	return fahr;
}
