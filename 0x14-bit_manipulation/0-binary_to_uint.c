#include <stdio.h>
#include "main.h"
/**
 * binary_to_uint - changess a binary number to unsigned int
 * @b: string that holds the binary number
 * Return: the changed number
 */
unsigned int binary_to_uint(const char *b)
{
	int q;
	unsigned int numb_val = 0;

	if (!b)
	return (0);
	for (q = 0; b[q]; q++)
	{
	if (b[q] < '0' || b[q] > '1')
	return (0);
	numb_val = 2 * numb_val + (b[q] - '0');
	}
	return (numb_val);
}
