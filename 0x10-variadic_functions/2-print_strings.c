#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - print_strings
 * @separator: separator char
 * @n: num strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int a;
	char *s;

	va_start(ap, n);
	for (a = 0; a < n; a++)
	{
		s = va_arg(ap, char *);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
		if (separator != NULL && a < n - 1)
			printf("%s", separator);
	}
	va_end(ap);
	putchar('\n');
}
