#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - str_concat
 * @s1: string 1
 * @s2: string 2
 * Return: concatenated string (free required after use)
**/
char *str_concat(char *s1, char *s2)
{
	int i;
	int n1 = 0;
	int n2 = 0;
	char *v = NULL;

	while (*(s1++))
	{
		n1 += 1;
	}

	s1 -= n1 + 1;

	while (*(s2++))
	{
		n2 += 1;
	}

	s2 -= n2 + 1;

	v = (char *)malloc(sizeof(char) * (n1 + n2 + 1));

	if (!v)
	{
		return (NULL);
	}

	for (i = 0; i < n1; i++)
	{
		v[i] = s1[i];
	}

	for (; i < n1 + n2 + 1; i++)
	{
		v[i] = s2[i - n1];
	}

	return (v);
}
