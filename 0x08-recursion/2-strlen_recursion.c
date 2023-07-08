#include "main.h"

/**
 * main - The main function of the code
 * params: string
 *
 * Return: len (success)
 */
int l = 0;

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return l;
	}
	else 
	{
		l = l + 1;
		return _strlen_recursion(s + 1);
		/*return l;*/
	}
}