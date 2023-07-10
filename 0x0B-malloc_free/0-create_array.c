#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - make array of size size and assign char c
 * @size: the size of an array
 * @c: the character to be asigned
 * Description: make array of size size and assign char c
 * Return: pointer to array, otherwise NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int j;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
	return (NULL);
	for (j = 0; j < size; j++)
	str[j] = c;
	return (str);
}
