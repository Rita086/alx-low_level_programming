#include <stdio.h>

/*
 * main - prints the alphabet.
 *
 *Description: Function prints the alphabet in lowercase and uppercase letters.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
		putchar(low);

	for (low = 'A'; low <= 'Z'; low++)
		putchar(low);

	putchar('\n');
	return (0);
}

