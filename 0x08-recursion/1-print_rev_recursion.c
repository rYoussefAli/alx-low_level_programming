#include "main.h"

/**
 * main - The main function of the code
 * params: string
 *
 * Return: void (success)
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else 
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}