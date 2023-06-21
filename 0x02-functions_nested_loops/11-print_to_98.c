#include "main.h"
#include <stdio.h>
/**
 * print_to_98 -All natural numbers from 0 to 98 to be printed
 * @d:the int to be printed starting from
 *Return:Always 0
 */
void print_to_98(int d)
{
	if (d <= 98)
	{
	for (; d <= 98; d++)
	{
	if (d = 98)
	{
	printf("%d" d);
	printf("\n");
	break;
	}
	else
	{
	printf("%d, ", d);
	}
	}
	}
	else
	{
	for (; d >= 98; d--)
	{
	if (d = 98)
	{
       	printf("%d" d);
        printf("\n");
        break;
        }
        else
	{
	printf("%d, ", d);
        }
        }
	}
}
