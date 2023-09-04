#include <stdio.h>
#include "main.h"
/**
 * get_bit - take back the value of a bit at an index in a decimal number
 * @n: number to look for
 * @index: index of the bit
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int numb_val;

	if (index > 63)
	return (-1);
	numb_val = (n >> index) & 1;
	return (numb_val);
}
