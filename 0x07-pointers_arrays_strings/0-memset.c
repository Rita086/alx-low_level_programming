#include "main.h"

/**
 * _memset -  a block of memory with a specific value to be filled
 * @s: starting address of memory to be filled
 * @b: the convinent value
 * @n: Changes to be made in the numb of bytes
 * Return: array with new value for n bytes to have some changes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int j = 0;

	for (; n > 0; j++)
	{
	s[j] = b;
	n--;
	}
	return (s);
}
