#include <limits.h>
#include "main.h"

/**
 * prints_sign - Prints the sign of a numbe
 * @j:is the number to be checked
 *
 * Return: 1 for positive number, -1 for negative number, otherwise 0
 */
int print_sign(int j);
{
	if (j > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (j < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
