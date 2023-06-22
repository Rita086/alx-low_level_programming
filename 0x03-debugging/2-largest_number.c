#include "main.h"

/**
 * largest_number - Outputs the greatest of 3 numbers
 * @c: First number
 * @d: second number
 * @e: third number
 * Return: largest number
 */
int largest_number(int c, int d, int e)
{
	int largest;

	if (c >= d && c >= e)
	{
	largest = c;
	}
	else if (d >= c && d >= e)
	{
	largest = d;
	}
	else
	{
	largest = e;
	}
	return (largest);
}
