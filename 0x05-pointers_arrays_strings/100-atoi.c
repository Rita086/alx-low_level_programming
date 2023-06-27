#include "main.h"
/**
 * _atoi - a string to an int is converted
 * @s: the pointer to convert
 * Return: an  int
 */
int _atoi(char *s)
{
	int k = 0;
	unsigned int ni = 0;
	int min = 1;
	int isi = 0;

	while (s[k])
	{
	if (s[k] == 45)
	{
	min *= -1;
	}
	while (s[k] >= 48 && s[k] <= 57)
	{
	isi = 1;
	ni = (ni * 10) + (s[k] - '0');
	k++
	}
	if (isi == 1)
	{
	break;
	}
	k++;
	}
	ni *= min;
	return (ni);
}
