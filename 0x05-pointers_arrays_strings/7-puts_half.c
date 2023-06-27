#include "main.h"
/**
 * puts_half - half of a string to be printed
 * @str: the string to be printed
 * Return: void
 */
void puts_half(char *str)
{
	int k = 0;
	int j;

	while (str[k] != '\0')
	{
	k++;
	}
	if (k % 2 == 1)
	{
	j = (k - 1) / 2;
	j += 1;
	}
	else
	{
	j = k  / 2;
	}

	for (; j < k; j++)
	{
	_putchar(str[j]);
	}
	_putchar('\n');
}
