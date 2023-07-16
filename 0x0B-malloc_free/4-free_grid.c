#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - free_grid
 * @grid: the grid
 * @height: height of the grid
 * Return: free the grid
**/
void free_grid(int **grid, int height)
{
	int a;

	for (a = height; a > 0; a--)
	{
		free(grid[a - 1]);
	}
	free(grid);
}
