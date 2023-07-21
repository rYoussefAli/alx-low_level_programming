#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - sum_them_all
 * @n: number of args
 * Return: sum args
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int sum;
	unsigned int a;

	if (!n)
		return (0);

	sum = 0;

	va_start(ap, n);
	for (a = 0; a < n; a++)
		sum += va_arg(ap, int);
	va_end(ap);

	return (sum);
}
