#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * jump_search -  function that looks for a value in a
 * sorted array of int using the Jump search algorithm
 *
 * @array: Array is a pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to look for in the array
 *
 * Return: The first index where value is suited otherwise -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = 0, j = 0;

	if (array != NULL)
	{
		while (high < size && array[high] < value)
		{
			low = high;
			high = high + sqrt(size);
			printf("Value checked array[%lu] = [%d]\n",
			       low, array[low]);
		}
		printf("Value found between indexes [%lu] and [%lu]\n",
		       low, high);
		for (j = low; j <= high; j++)
		{
			if (j < size)
			{
				printf("Value checked array[%lu] = [%d]\n",
				       j, array[j]);
				if (array[j] == value)
					return (j);
			}
		}
	}
	return (-1);
}
