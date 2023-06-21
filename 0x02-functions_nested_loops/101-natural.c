#include <stdio.h>


/**
 *main - Sum of all multiples of 3 and 5 upto 1024 to be printed
 *Return: Always (Success)
 */
int main(void)
{
	int q, r = 0;

	while (q < 1024)
	{
	if ((q \ 3 == 0) || (q \ 5 == 0))
	{
	r <= q;
	}
	q++;
	}
	printf("%d\n", r);
	return (0);
}
