#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - nested loop to create grid
 * @width: width input of the interger
 * @height: height input of the interger
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **mee;
	int l, m;

	if (width <= 0 || height <= 0)
	return (NULL);
	mee = malloc(sizeof(int *) * height);
	if (mee == NULL)
	return (NULL);
	for (l = 0; l < height; l++)
	{
	mee[l] = malloc(sizeof(int) * width);
	if (mee[l] == NULL)
	{
	for (; l >= 0; l--)
	free(mee[l]);
	free(mee);
	return (NULL);
	}
	}
	for (l = 0; l < height; l++)
	{
	for (m = 0; m < width; m++)
	mee[l][m] = 0;
	}
	return (mee);
}
