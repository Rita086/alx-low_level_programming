#include <stdio.h>
#include "main.h"

/**
 * _abs - Computes the absolute value of an integer.
 * @n: is the number to be computed.
 * Return: Absolute value of an integer.
 */
int _abs(int n)
{
	if (n < 0)
	{
	int abs_val;

	abs_val = n * -1;
	return (abs_val);
	}
	return (n);
}
