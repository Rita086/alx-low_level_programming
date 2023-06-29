#include "main.h"

/**
 * string_toupper - all lowercase letters are changed to uppercase
 * @n: pointer
 *
 * Return: n
 */
char *string_toupper(char *)
{
	int d;

	d = 0;
	while (n[d] != '\0')
	{
	if (n[d] >= 'a' && n[d] <='z')
	n[d] = n[d] - 32;
	d++;
	}
	return (n);
}
