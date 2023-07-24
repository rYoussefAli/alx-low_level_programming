#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range - array_range
 * @min: min
 * @max: max
 * Return: array range (free required after use)
**/
int *array_range(int min, int max)
{
	int t, i, *arr;

	if (min > max)
	{
		return (NULL);
	}

	t = max - min + 1;
	arr = malloc(sizeof(*arr) * t);

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; min < max + 1; i++)
	{
		arr[i] = min;
		min++;
	}

	return (arr);
}
