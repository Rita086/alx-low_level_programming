#include "main.h"
#include <stdio.h>
/**
 * _puts - a string to be printed
 * @str: prints the string
 * Return: void
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
	_putchar(*str);
	}
	_putchar('\n');
}
