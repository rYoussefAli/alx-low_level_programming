#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * count - count
 * @s: the string to be counted
 * Return: number of chars in string
*/
int count(char *s)
{
	int i = 0;

	while (*(s++))
	{
		i += 1;
	}
	return (i);
}

/**
 * argstostr - argstostr
 * @ac: n of elements
 * @av: the args string
 * Return: string includes all args (free required after use)
**/
char *argstostr(int ac, char **av)
{
	int a, t, tt, n = 0;
	char *b = NULL, *str = NULL;

	if (!(ac && av))
	{
		return (NULL);
	}

	for (a = 0; a < ac; a++)
	{
		n += count(av[a]);
	}

	t = n + ac + 1;
	str = (char *)malloc(sizeof(char) * t);

	if (!str)
	{
		return (NULL);
	}

	tt = 0;
	for (a = 0; a < ac; a++)
	{
		b = av[a];
		while (*b)
		{
			str[tt] = *b;
			tt += 1;
			b++;
		}
		str[tt] = '\n';
		tt += 1;
	}

	return (str);
}
