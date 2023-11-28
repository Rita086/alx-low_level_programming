#include "main.h"
/**
 * print_binary - outputs the binary equivalent of a decimal number
 * @n: number to outputt in binary
 */
void print_binary(unsigned long int n)
{
	int e, count = 0;
	unsigned long int current;

	for (e = 63; e >= 0; e--)
	{
	current = n >> e;
	if (current & 1)
	{
	printf('1');
	count++;
	}
	else if (count)
	printf('0');
	}
	if (!count)
	printf('0');
}
