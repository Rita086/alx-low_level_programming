#include "main.h"

/**
 * print_numbers - numbers 0-9 to be printed
 * Return: void
 */
void print_numbers(void)
{
	char a;

	for (a = '0';a <='9',a++)
	{
		_putchar(a);
	}
	_putchar('\n')
}
