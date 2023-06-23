#include <ctype.h>
#include "main.h"
#include <stdio.h>

/**
 * _isupper - uppercase letter
 * @c: check the char
 * Return: 1 for upper letter, otherwise 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	return (1);
	else
	return (0);
}
