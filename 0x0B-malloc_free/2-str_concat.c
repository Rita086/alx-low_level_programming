#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - get the finals of input and sum together for size
 * @s1:  to concat the first input of the character
 * @s2:  to concat the second input o the character
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *conct;
	int c, di;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";
	c = di = 0;
	while (s1[c] != '\0')
	c++;
	while (s2[di] != '\0')
	di++;
	conct = malloc(sizeof(char) * (c + di + 1));
	if (conct == NULL)
	return (NULL);
	c = di = 0;
	while (s1[c] != '\0')
	{
	conct[c] = s1[c];
	c++;
	}
	while (s2[di] != '\0')
	{
	conct[c] = s2[di];
	c++, di++;
	}
	conct[c] = '\0';
	return (conct);
}
