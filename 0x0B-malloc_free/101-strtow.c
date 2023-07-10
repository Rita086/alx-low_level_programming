#include <stdlib.h>
#include "main.h"

/**
 * count_word - help function to count the numb of words in a string
 * @s: string to evaluate
 *
 * Return: numb of words
 */
int count_word(char *s)
{
	int flag, g, h;

	flag = 0;
	h = 0;

	for (g = 0; s[g] != '\0'; g++)
	{
	if (s[g] == ' ')
	flag = 0;
	else if (flag == 0)
	{
	flag = 1;
	h++;
	}
	}
	return (h);
}
/**
 * strtow - a string is splitted into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success) or NULL (Error)
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int m, k = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
	len++;
	words = count_word(str);
	if (words == 0)
	return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
	return (NULL);
	for (m = 0; m <= len; m++)
	{
	if (str[m] == ' ' || str[m] == '\0')
	{
	if (c)
	{
	end = m;
	tmp = (char *) malloc(sizeof(char) * (c + 1));
	if (tmp == NULL)
	return (NULL);
	while (start < end)
	*tmp++ = str[start++];
	*tmp = '\0';
	matrix[k] = tmp - c;
	k++;
	c = 0;
	}
	}
	else if (c++ == 0)
	start = m;
	}
	matrix[k] = NULL;
	return (matrix);
}
