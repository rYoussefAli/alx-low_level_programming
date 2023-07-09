#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - main
 * @argc: the number of arguments
 * @argv: the argument vector
 *
 * Return: multiply the two numbers given.
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i, c;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; ++i)
	{
		c = atoi(argv[i]);

		if (c == 0)
		{
			if (*argv[i] != '0')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += c;
	}
	printf("%d\n", sum);

	return (0);
}

