#include "main.h"

/**
 * main - The main function of the code
 * params: string
 *
 * Return: void (success)
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else 
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}