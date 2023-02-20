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
	int ch1, ch2;

	for (ch1 = 0; ch1 < 99; ch1++)
	{
		for (ch2 = ch1 + 1; ch2 <= 99; ch2++)
		{
			putchar((ch1 / 10) + '0');
			putchar((ch1 % 10) + '0');
			putchar(' ');
			putchar((ch2 / 10) + '0');
			putchar((ch2 % 10) + '0');

			if (ch1 != 98 || ch2 != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
