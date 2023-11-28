#include "main.h"
/**
 * get_endianness - looks if a machine is little or big endian
 * Return: 0 for big, 1 for small
 */
int get_endianness(void)
{
	unsigned int m = 1;
	char *c = (char *) &m;

	return (*c);
}
