#include <stdio.h>
#include "main.h"

/**
 * main - main
 * @argc: the number of arguments
 * @argv: the argument vector
 *
 * Return: print all arguments.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; ++i)
	{
	printf("%s\n", argv[i]);
	}

	return (0);
}

