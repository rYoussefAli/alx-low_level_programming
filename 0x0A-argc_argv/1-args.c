#include <stdio.h> 
#include "main.h"

/**
 * main - main
 * @argc: the number of arguments
 * @argv: the argument vector
 *
 * Return: print the farggument counter -1.
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc-1);

	(void)argv;

	return (0);
}

