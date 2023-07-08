#include "main.h"
/**
 * _strlen_recursion - print rev
 * @s: the first para
 *
 * Return: void
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		s = s + 1;
		return (1 + _strlen_recursion(s));
	}
	return (0);
}
