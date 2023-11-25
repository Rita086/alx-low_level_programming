#include "main.h"
/**
 * binary_to_uint - outputs a binary number to unsigned int
 * @b: string which holds the binary number
 * Return: the outputed number
 */
unsigned int binary_to_uint(const char *b)
{
	int k;
	unsigned int num_val = 0;
	
	if (!b)
	return (0);
	for (k = 0; b[k]; k++)
	{
	if (b[k] < '0' || b[k] > '1')
	return (0);
	num_val = 2 * num_val + (b[k] - '0');
	}
	return (num_val);
}
