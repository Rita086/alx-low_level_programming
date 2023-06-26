#include "main.h"
#include <stdio.h>
/**
 * print_rev - a string in reverse to be printed
 * @s: the string to be printed
 * Return: void
 */
void print_rev(char *s)
{
	int d = 0;
	while (s[d] != '\0')
	
	{
	d++;
	}

	for (d -= 1; d >= 0; d--)
	{
	_putchar(s[d]);
	}
	_putchar('\n');
}
