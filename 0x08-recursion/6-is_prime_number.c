/**
 * help - help
 * @a: the main num
 * @b: the descendents
 *
 * Return: is_prime_number? 1 : 0.
 */
int help(int a, int b);

/**
 * is_prime_number - is_prime_number
 * @n: the main num
 *
 * Return: is_prime_number? 1 : 0.
 */
int is_prime_number(int n)
{
	return (help(n, n) ? 1 : 0);

}

/**
 * help - help
 * @a: the main num
 * @b: the descendents
 *
 * Return: is_prime_number? 1 : 0.
 */
int help(int a, int b)
{
	if (a < 2)
	{
		return (0);
	}
	if (b == 2)
	{
		return (1);
	}
	return (((a % (b - 1) > 0) ? 1 : 0) * help(a, b - 1));
}
