#include "main.h"
#include <stdio.h>
/**
 * print_array - n elements of an array of an integers to be printed
 * @a: an array of an int
 * @n: number of elements of the array to be printed  
 * Return: void
 */
void print_array(int *a, int n)
{
	int m;

	for (m = 0; m < n; m++)
	{
	printf("%d", a[m]);
	if (m != (n - 1)
	{	
	printf(",");
	}
	printf("\n");
	}
}
