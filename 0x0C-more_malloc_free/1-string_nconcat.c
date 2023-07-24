#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - malloc_checked
 * @b: size
 * Return: address to memory (free required after use)
**/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
		int i;
	int n1 = 0;
	int n2 = 0;
	char *v = NULL;

	if (s1)
	{
		while (*(s1++))
		{
			n1 += 1;
		}
		s1 -= n1 + 1;
	}

	if (s2)
	{
		while (*(s2++))
		{
			n2 += 1;
		}
		s2 -= n2 + 1;
	}

	if (n < n2)
	{
		n2 = n;
	}

	v = (char *)malloc(sizeof(char) * (n1 + n2 + 1));
	if (!v)
	{
		return (NULL);
	}

	for (i = 0; i < n1; i++)
	{
		v[i] = s1[i];
	}
	for (; i < n1 + n2; i++)
	{
		v[i] = s2[i - n1];
	}

	v[i] = '\0';
	return (v);

}
