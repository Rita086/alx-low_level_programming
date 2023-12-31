#include "main.h"

/**
 * factorial - takes the factorial of a number
 * @n: number to take back the factorial from
 *
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n < 0)
	return (-1);
	if (n == 0)
	return (1);
	return (n * factorial(n - 1));
}
