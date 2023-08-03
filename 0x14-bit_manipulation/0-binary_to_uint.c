#include <stdio.h>
#include "main.h"
/**
 * binary_to_uint - changess a binary number to unsigned int
 * @b: string that has the binary number
 * Return: the changed number
 */
unsigned int binary_to_uint(const char *b)
{
	int j;
	unsigned int numb_val = 0;

	if (!b)
	return (0);
	for (j = 0; b[j]; j++)
	{
	if (b[j] < '0' || b[j] > '1')
	return (0);
	numb_val = 2 * numb_val + (b[j] - '0');
	}
	return (numb_val);
}
