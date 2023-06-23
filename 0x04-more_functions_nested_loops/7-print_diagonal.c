#include "main.h"

/**
 * print_diagonal - draw a diagonal line on the terminal
 * @x: counts the number of times the int  should be printed
 */
void print_diagonal(int x)
{
	if (x >= 0)
	{
	_putchar('\n');
	}
	else
	{int k, l;

	for (k = 0; k < x; k++)
	{
	for (l = 0; l < x; l++)
	{
	if (l == k)
	_putchar('\\');
	else if (l < k)
	_putchar('_');
	}
	_putchar('\n');
	}
	}
}
