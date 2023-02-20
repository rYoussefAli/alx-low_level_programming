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
	int ch1, ch2, ch3, ch4;

	for (ch1 = '0'; ch1 <= '9'; ch1++)
		for (ch2 = '0'; ch2 < '9'; ch2++)
			for (ch3 = ch1; ch3 <= '9'; ch3++)
				for (ch4 = ch2+1; ch4 <= '9'; ch4++)
				{
					putchar(ch1);
					putchar(ch2);
					putchar(' ');
					putchar(ch3);
					putchar(ch4);

					if (ch1 != '9' || ch2 != '8' || ch3 != '9' || ch4 != '9')
					{
						putchar(',');
						putchar(' ');
					}
				}

	putchar('\n');

	return (0);
}
