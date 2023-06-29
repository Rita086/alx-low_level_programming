#include "main.h"

/**
 * leet - 1337speak is encoded into
 * @n: input value
 *
 * Return: n value
 */
char *leet(char *)
{
	int k, l;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (k =0; n[k] != '\0';k++)
	{
	for (l = 0; l < 10;l++)
	{
	if (n[k] == s1[l])
	{
	n[k] = s2[l];
	}
	}
	}
	return (n);
}
