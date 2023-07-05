#include "main.h"

/**
 * _strlen_recursion -  The output is the  length of a string.
 * @s:  measure the string.
 *
 * Return: The   string its length.
 */
int _strlen_recursion(char *s)
{
	int longit = 0;

	if (*s)
	{
	longit++;
	longit += _strlen_recursion(s + 1);
	}
	return (longit);
}
