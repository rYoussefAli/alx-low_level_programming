#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - alloc_grid
 * @width: width of the grid
 * @height: height of the grid
 * Return: the pointer to the grid (free required after use)
**/
int **alloc_grid(int width, int height)
{
	int **arr = NULL;
	int i, j, a;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}

	arr = (int **)malloc(sizeof(int *) * height);

	if (!arr)
	{
		return (NULL);
	}

	for (a = 0; a < height; a++)
	{
		arr[a] = (int *)malloc(sizeof(int) * width);

		if (!arr[a])
		{
			for (; a > 1; a--)
			{
				free(arr[a - 1]);
			}
			free(arr);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}

	return (arr);
}
