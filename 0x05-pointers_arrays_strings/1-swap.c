#include <stdio.h>
/*
 * swap_int - the value of two int to be swapped
 * @a: the first int to be swapped
 * @b: the second int to be swapped
 */
void swap_int(int *a, int *b)
{
	int k;

	k = *a;
	*a = *b;
	*b = k;
}
