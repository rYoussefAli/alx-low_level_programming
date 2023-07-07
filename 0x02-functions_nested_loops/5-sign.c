#include <stdio.h>
# include "main.h"
/**
 * print_sign - checks the parity of the number
 * @n: the parameter
 *
 * Return: returns 1, 0, or -1 (success).
 */
int print_sign(int n)
{
	if (!n) 
	{
		_putchar('0');
		return 0;
	}
	
	else 
	{
		if (n > 0) 
		{
			_putchar('+');
			return 1;
		}
		else 
		{
			_putchar ('-');
			return -1;
		}
	}
}
