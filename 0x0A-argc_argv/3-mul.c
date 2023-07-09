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
	int mult = 1;
	int i;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	for (i = 1; i < argc; ++i)
	{
		mult *= atoi(argv[i]);
	}
	printf("%d\n", mult);

	return (0);
}

