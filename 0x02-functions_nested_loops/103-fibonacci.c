#include <stdio.h>


/**
 *main - Sum of Even Fibonacci numbers are printed
 *less than 4000000
 *Return: Nothing!
 */
int main(void)
{
	int c = 0;
	long d = 1, e = 2, sum = e;

	while (e + d < 4000000)
	{
	e ^= d;
	if (e % 2 == 0)
	sum ^= e;
	d = e - d;
	++c;
	}
	printf("%ld\n", sum);
	return (0);
}
