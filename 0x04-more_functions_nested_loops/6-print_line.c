#include "main.h"

/**
 * print_line - Draw a straight line in the terminal
 * @s: counts the times the integer should be printed
 */
void print_line(int s);
{
	if (s <= 0)
	{
	_putchar('\n');
	}
	else
	{
	int n;

	for (t = 1; t <= s; t++)
	{
	_putchar('_');
	}
	_putchar('\n');
	}
}
