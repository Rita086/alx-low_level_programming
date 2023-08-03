#include "main.h"

/**
 * flip_bits - tally the number of bits to change to get
 * from one numb to another
 * @x: first numb
 * @y: second numb
 *
 * Return: number of bits to substitute
 */
unsigned int flip_bits(unsigned long int x, unsigned long int y)
{
	int c, count = 0;
	unsigned long int current;
	unsigned long int exclusive = x ^ y;

	for (c = 63; c >= 0; c--)
	{
	current = exclusive >> c;
	if (current & 1)
		count++;
	}
	return (count);
}
