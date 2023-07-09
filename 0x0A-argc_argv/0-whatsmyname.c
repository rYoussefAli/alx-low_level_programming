#include <stdio.h>
#include "main.h"
/**
 * main - main
 * @argc: the number of arguments
 * @argv: the argument vector
 *
 * Return: print the file name.
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}