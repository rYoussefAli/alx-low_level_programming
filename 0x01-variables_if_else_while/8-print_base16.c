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
	int ch;

	for (ch = 0; ch < 16; ch++)
		ch < 10 ? putchar(ch + '0') : putchar(ch - 10 + 'a');

	putchar('\n');

	return (0);
}
