#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _realloc - _realloc
 * @ptr: the pointer
 * @old_size: old size of pointer
 * @new_size: new size of pointer
 * Return: different size of pointer (free required after use)
**/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *v = NULL;
	char *mv = NULL, *mptr = NULL;
	unsigned int i;

	if (old_size == new_size)
	{
		return (ptr);
	}

	if (new_size == 0)
	{
		if (ptr)
		{
			free(ptr);
		}
		return (NULL);
	}

	v = malloc(new_size);

	if (!v)
	{
		return (NULL);
	}
	if (ptr)
	{
		mv = (char *)v;
		mptr = (char *)ptr;

		for (i = 0; i < (old_size < new_size ? old_size : new_size); i++)
		{
			mv[i] = mptr[i];
		}

		free(ptr);
	}

	return (v);
}
