#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * _pow - pow
 * @a: the base
 * @b: the power
 * Return: a^b
 */

int _pow(int a, int b);

/**
 * calc - calc
 * @num: the number
 * @_len: number len
 * @sum: sum of n coins
 * Return: 0.
 */

int calc(char **num, int _len, int *sum)
{
	if (_len < 3)
	{
		return (0);
	}

	while (_len > 2)
	{
		*sum += (*(*num) - '0') * 4 * _pow(10, _len - 3);
		*num += 1;
		_len -= 1;
	}

	return (0);
}

/**
 * len - len
 * @w: string
 * Return: string len.
 */

int len(char *w)
{
	int n = 0;

	while (*(w++) != '\0')
	{
		n += 1;
	}
	return (n);
}

/**
 * _pow - pow
 * @a: the base
 * @b: the power
 * Return: a^b
 */
int _pow(int a, int b)
{
	if (b == 0)
	{
		return (1);
	}
	else
	{
		return (a * _pow(a, b - 1));
	}
}


/**
 * checker - checker
 * @i: the coin value used
 * @sum: the total number of coins
 * @c: the number given as argument
 * Return: 1 if done printing, 0 otherwise.
 */

int checker(int i, int *sum, int *c)
{
	int ii = i;
	int a = 0;

	while (i <= *c)
	{
		a = i;
		*sum += 1;
		i += ii;
	}
	if (a)
	{
		*c -= a;
		if (!(*c))
		{
			printf("%d\n", *sum);
			return (1);
		}
	}

	return (0);
}
/**
* main - main
* @argc: the number of arguments
* @argv: the argument vector
*
* Return: prints the minimum number of coins 25, 10, 5, 2, 1 required.
*/
int main(int argc, char *argv[])
{
	int sum = 0;
	int c, z, ln;
	char *n;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	z = atoi(argv[1]);
	n = argv[1];
	ln = len(argv[1]);

	if (z < 1)
	{
		printf("0\n");
		return (0);
	}

	if (ln > 2)
	{
		calc(&n, ln, &sum);
	}

	c = atoi(n);

	if (c < 1)
	{
		printf("%d\n", sum);
		return (0);
	}

	if (checker(25, &sum, &c))
	{
		return (0);
	}
	else
	{
		if (checker(10, &sum, &c))
		{
			return (0);
		}
		else
		{
			if (checker(5, &sum, &c))
			{
				return (0);
			}
			else
			{
				if (checker(2, &sum, &c))
				{
					return (0);
				}
				else
				{
					checker(1, &sum, &c);
					return (0); }}}}}
