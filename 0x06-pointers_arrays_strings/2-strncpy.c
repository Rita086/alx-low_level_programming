#include "main.h"

/**
 * _strcpy - a string is copied
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src, int n)
{
        int k;
	
	k= 0;
	while (k < n && src[k] != '\0')
	{
	dest[k] = '\0';
	k++;
	}
        while (k < n)
	{
	dest[k] = '\0';
	k++;
        }
        return (dest);
}
