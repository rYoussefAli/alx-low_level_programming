#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - print_numbers
 * @n: num args
 * @separator: separator
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int a;
	int b;

	b = 0;

	va_start(ap, n);
	for (a = 0; a < n; a++)
	{
		b = va_arg(ap, int);
		if (separator != NULL && a < n - 1)
			printf("%d%s", b, separator);
		else
			printf("%d", b);
	}
	va_end(ap);
	putchar('\n');
}
