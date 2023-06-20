#include "main.h"

/**
* _islower - Checks if character is lowercase
* @c: is the char to be checked
* Return: 1 for lowercase character, otherwise 0.
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);
}
