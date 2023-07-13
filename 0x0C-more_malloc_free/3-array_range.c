#include <stdlib.h>
#include "main.h"

/**
 * array_range - an array of integers is created
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 *
 * Return: new array pointer
 */
int *array_range(int min, int max)
{
	int *ptr;
	int g, size;

	if (min > max)
	return (NULL);
	size = max - min + 1;
	ptr = malloc(sizeof(int) * size);
	if (ptr == NULL)
		return (NULL);
	for (g = 0; min <= max; g++)
		ptr[g] = min++;
	return (ptr);
}
