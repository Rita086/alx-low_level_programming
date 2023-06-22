#include "main.h"
#include <stdio.h>

/**
 * main - prints the integers for 1 to 100 accompanied by a new line
 * for multiples of three prints prints Fizz as a substitute of the number
 * for the multiples of five prints Buzz
 * Return: Always 0 (Success)
 */
int main(void)
{
	int m;

	for (m = 1; m <= 100; m++)
	{
	if (m % 3 == 0 && m % 5 != 0)
	{
	printf("Fizz");
	}
	else if (m % 5 == 0 && m % 3 != 0)
	{
	printf("Buzz");
	}
	else if (m % 3 == 0 && m % 5 == 0)
	{
	printf("FizzBuzz");
	}
	else if (m == 1)
	{
	printf("%d", m);
	{
	else 
	{
	printf(" %d", m);
	}
	}
	printf("\n");
	return (0);
}


