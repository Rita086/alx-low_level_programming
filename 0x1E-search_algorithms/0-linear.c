#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - Function that looks for a value in an
 * array of integers using the Linear search algorithm
 *
 * @array: Array is a pointer to the first element of the array to look in
 * @size: Number of elements in array
 * @value: Value to look for in the array
 *
 * Return: The first index where value is located otherwise -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t k = 0;

	if (array != NULL)
	{
		for (k = 0; k < size; k++)
		{
			printf("Value checked array[%lu] = [%d]\n", k, array[k]);
			if (array[k] == value)
			{
				return (k);
			}
		}
	}
	return (-1);
}
