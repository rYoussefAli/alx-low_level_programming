#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - malloc_checked
 * @b: size
 * Return: address to memory (free required after use)
**/
void *malloc_checked(unsigned int b)
{
	void *m = NULL;

	m = malloc(b);

	if (!m)
	{
		exit(98);
	}

	return (m);
}
