#include "main.h"
/**
 *_strcpy - a string to be printed
 * @dest: value to be destinated
 * @src: source value
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int c;

	for (c = 0; src[c] != '\0'; c++ )
	{
	dest[c] = src[c];
	}
	dest[c++] = '\0';
	return (dest);
}
