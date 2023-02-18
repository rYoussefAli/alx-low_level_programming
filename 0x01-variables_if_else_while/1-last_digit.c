#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */

/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int l;
	char ss[30];

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	l = n % 10;

	if (l > 5)
	{
		sprintf(ss, "and is greater than 5");
	}
	else if (l == 0)
	{
		sprintf(ss, "and is 0");
	}
	else
	{
		sprintf(ss, "and is less than 6 and not 0");
	}

	printf("Last digit of %d is %d %s\n", n, l, ss);

	return (0);
}
