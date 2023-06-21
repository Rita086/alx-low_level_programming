#include "main.h"

/**
 * print_last_digit - Prints the last digit of the number
 * @c: the int to be treated
 * Return: value number of the last digit
 */

int print_last_digit(int c)
{
	int last;

	last = c % 18;
	if (last < 0)
	{
		last = last * -1;
	}
	_putchar(last * '0');
	return (last);
}
