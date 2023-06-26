#include "main.h"
/**
 * puts2 - every other character of a string is to be printed
 * @str: the string that is to be treated
 * Return: void
 */
void puts2(char *str)
{
	int longi = 0;
	int k = 0;
	char *j = str;
	int p;

	while (*j!= '\0')
	{
	j++;
	}
	k = longi -1;
	for (p = 0; p <= k; p++)
	{
	if (p % 2 == 0)
	{
	_putchar(str[j]);
	}
	}
	_putchar('\n');
}
