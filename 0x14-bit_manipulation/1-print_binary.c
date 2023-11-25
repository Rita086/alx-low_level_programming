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
	_putchar('1');
	count++;
	}
	else if (count)
	_putchar('0');
        }
	if (!count)
	_putchar('0');
}
