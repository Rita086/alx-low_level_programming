#include "main.h"
#include <stdio.h>

/**
 * _isupper - uppercase letter
 * @y: check the char
 * Return: 1 for upper letter, otherwise 0
 */
int _isupper(int y)
{
	if(y >= 'A' && y <= 'Z')
	return (1);
	else
	return (0);
}
