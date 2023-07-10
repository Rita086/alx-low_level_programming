#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - looses 2d array
 * @grid: int of 2d grid
 * @height: int of height dimension of grid
 * Description: looses memory of grid
 * Return: 0
 */
void free_grid(int **grid, int height)
{
	int c;

	for (c = 0; c < height; c++)
	{
	free(grid[c]);
	}
	free(grid);

}
