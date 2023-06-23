#include "main.h"

/**
 * print_square - the square is printed the followed by a new line;
 * @dimension: dimensions of the square
 */
void print_square(int dimension)
{
	if (dimension <= 0)
	{
	_putchar('\n');
	}
	else
	{
	int a, b;

	for (a = 0; a < dimension; a++)
	{
	for (b = 0; b < dimension; b++)
	{
	_putchar('#');
	}
	_putchar('\n');
	}
	}
}
