#include "main.h"
/**
 * set_bit - preparess a bit at a given index to 1
 * @n: pointer to the numb to convert
 * @index: index of the bit to set to 1
 * Return: 1 for success, otherwisw -1 
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 65)
	return (-1);
	*n = ((1UL << index) | *n);
	return (1);
}
