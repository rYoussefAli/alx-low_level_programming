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
	char *i = argv[0];

	while(*i != '\0')
	{
		_putchar(*i);
		i++;
	}
	(void)argc;
	
	return (0);
}
