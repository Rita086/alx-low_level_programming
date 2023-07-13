#include "main.h"
#include <stdlib.h>
/**
 * *malloc_checked -  using malloc memory tobe allocated
 * @b: number of bytes to allocate from this unsigned interger
 * Return:  the allocated memory to the pointer
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	exit(98);
	return (ptr);
}
