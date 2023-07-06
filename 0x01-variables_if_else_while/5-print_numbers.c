#include <stdlib.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */

/**
 * main - Entry point
 *
 * Description: Here should be a description
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch;

	for (ch = 0; ch <= 9; ch++)
		printf("%d", ch);

	putchar('\n');

	return (0);
}
