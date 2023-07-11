#include <stdio.h>
#include "main.h"
#include <stdlib.h>
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
	int c;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	c = atoi(argv[1]);
	if (c < 1)
	{
		printf("0\n");
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
