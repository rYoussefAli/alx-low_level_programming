#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - str_concat
 * @s1: string 1
 * @s2: string 2
 * Return: concatenated string (free required after use)
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
