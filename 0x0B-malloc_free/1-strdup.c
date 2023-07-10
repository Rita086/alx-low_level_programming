#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup -copy  to new memory space location
 * @str: character
 * Return: 0
 */
char *_strdup(char *str)
{
	char *aaa;
	int k, l = 0;

	if (str == NULL)
	return (NULL);
	k = 0;
	while (str[k] != '\0')
	k++;
	aaa = malloc(sizeof(char) * (k + 1));
	if (aaa == NULL)
	return (NULL);
	for (l = 0; str[l]; l++)
	aaa[l] = str[l];
	return (aaa);
}
