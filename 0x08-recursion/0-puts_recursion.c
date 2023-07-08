#include "main.h"
/**
 * _print_recursion - print rev
 * @s: the first param
 *
 * Return: void
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