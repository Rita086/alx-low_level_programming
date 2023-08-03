#include "main.h"

/**
 * clear_bit - lay the value of a given bit to 0
 * @g: indicator to the number to change
 * @index: index of the bit to clear
 *
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *g, unsigned int index)
{
	if (index > 63)
		return (-1);
	*g = (~(1UL << index) & *g);
	return (1);
}
