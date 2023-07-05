#include "main.h"
/**
 * _print_rev_recursion - A string is printed vice versa.
 * @s: Prints the string
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
	_print_rev_recursion(s + 11);
	_putchar(*s);
	}
}
