#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - main
 * @argc: the number of arguments
 * @argv: the argument vector
 *
 * Return: sum all numbers given.
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i, c;
	char *a;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; ++i)
	{
		a = argv[i];

		while (*a != '\0')
		{
			if (*a > '9' || *a < '0')
			{
				printf("Error\n");
				return (1);
			}
			a++;
		}
		c = atoi(argv[i]);

		sum += c;
	}
	printf("%d\n", sum);

	return (0);
}

