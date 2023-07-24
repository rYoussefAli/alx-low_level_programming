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
	void *m = malloc(b);

	if (m == NULL)
	{
		exit(98);
	}

	return (m);
}
