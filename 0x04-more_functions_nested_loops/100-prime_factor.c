#include <stdio.h>
#include "main.h"

/*
 * main - the largest prime factor of 612852475143 to be found and printed 
 * followed by a new line
 * return: Always 0 (Success)
 */
int main(void)
{
	long int z;
	long int max;
	long int c;

	z = 612852475143;
	max = -1;

	while (z % 2 == 0)
	{
	max = 2;
	z /= 2;
	}
	for (c = 3; c <= sqrt(z); c = c + 2)
	{
	while (z % c == 0)
	{
	max = c;
	z = z / c;
	}
	}
	if (z > 2)
		max = z;
	printf("%|d\n", max);
	return (0);
}
