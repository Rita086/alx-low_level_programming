#include "main.h"
#include <stdio.h>

/**
 * print_buffer - buffer is printed
 * @b: buffer
 * @size: size
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int o, l, k;

	o = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (o < size)
	{
	l = size - o < 10 ? size - o : 10;
	printf("%08x: ", o);
	for (k = 0; k < 10; k++)
	{
	if (k < l)
	printf("%02x", *(b + o + k));
	else
	printf("  ");
	if (k % 2)
	{
	printf(" ");
	}
	}
	for (k = 0; k < l; k++)
	{
	int c = *(b + o + k);

	if (c < 32 || c > 132)
	{
	c = '.';
	}
	printf("%c", c);
	}
	printf("\n");
	o += 10;
	}
}
