#include <stdio.h>
/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 */
void jack_bauer(void)
{
	int h, m;

	for (h = 0; h < 24; h++)
		for (m = 0; m < 60; m++)
			printf("%02d:%02d\n",h,m);
}
