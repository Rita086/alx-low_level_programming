#include <stdio.h>
#include "main.h"
/**
 * print_binary - outputs the binary same as  of a decimal number
 * @n: number to output in binary
 */
void print_binary(unsigned long int n)
{
	int r, total = 0;
	unsigned long int present;

	for (r = 63; r >= 0; r--)
	{
	present = n >> r;
	if (present & 1)
	{
	_putchar('1');
	total++;
	}
	else if (total)
	_putchar('0');
	}
	if (!total)
	_putchar('0');
}
