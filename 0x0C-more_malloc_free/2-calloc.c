#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _calloc - _calloc
 * @nmemb: number of bytes of type
 * @size: size of type
 * Return: address to memory filled with 0s (free required after use)
**/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m = NULL;
	unsigned int i;

	if (!(nmeb && size))
	{
		return (NULL);
	}

	m = malloc(nmemb * size);

	if (m == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < nmemb * size; i++)
	{
		m[i] = 0;
	}

	return (m);
}
