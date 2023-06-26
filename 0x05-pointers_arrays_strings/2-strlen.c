#include <stdio.h>
/*
 * _strlen - the length of a string to be returned
 * @s: - the string to get the length of
 * Return: the length of @str
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
	longi++;
	s++;
	}
	return (longi);
}
