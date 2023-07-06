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
	int ch1;
	int ch2;
	int ch3;

	for (ch1 = '0'; ch1 < '8'; ch1++)
		for (ch2 = ch1 + 1; ch2 < '9'; ch2++)
			for (ch3 = ch2 + 1; ch3 <= '9'; ch3++)
			{
				putchar(ch1);
				putchar(ch2);
				putchar(ch3);

				if (ch1 != '7' || ch2 != '8' || ch3 != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}

	putchar('\n');

	return (0);
}
