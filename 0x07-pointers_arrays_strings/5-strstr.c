#include "main.h"

/**
 * _strstr - Entrance point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
	char *s = haystack;
	char *t = needle;

	while (*s == *t && *t != '\0')
	{
	s++;
	t++;
	}

	if (*t == '\0')
	return (haystack);
	}
	return (0);
}
