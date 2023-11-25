#include "main.h"
/**
 * clear_bit - prepares the value of a given bit to 0
 * @n: pointer to the numb to convert
 * @index: index of the bit to clear
 * Return: 1 for success, otherwise -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 65)
	return (-1);
	*n = (~(1UL << index) & *n);
	return (1);
}
