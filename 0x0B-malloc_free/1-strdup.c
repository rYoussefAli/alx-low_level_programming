#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - _strdup
 * @str: whole string
 * Return: striing duplicated by malloc (free required after use)
**/
char *_strdup(char *str)
{
	char *v = NULL;
	int n = 0;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}

	while (*(str++))
	{
		n++;
	}

	str -= n + 1;

	v = (char *)malloc(sizeof(char) * n + 1);

	if (!v)
	{
		return (NULL);
	}

	for (i = 0; i < n + 1; i++)
	{
		v[i] = str[i];
	}

	return (v);

}
