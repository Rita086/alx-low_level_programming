#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - tells if an int is a prime number or not
 * @n: evaluate this numb
 * Return: 1 if n is a prime number, otherwise 0 
 */
int is_prime_number(int n)
{
	if (n <= 1)
	return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime -  if  this numb is prime recursively to be calculated
 * @n:  to evaluate this numb
 * @i: iterator
 * Return: 1 if n is prime, otherwise 0 
 */
int actual_prime(int n, int i)
{
	if (i == 1)
	return (1);
	if (n % i == 0 && i > 0)
	return (0);
	return (actual_prime(n, i - 1));
}
