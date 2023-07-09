/**
 * mult - check the n
 * @n: the first param
 * @b: the original number
 *
 * Return: _sqrt_recursion
 */
int mult(int n, int b)
{
	if (n * n == b)
	{
		return (n);
	}
	if (n * n < b)
	{
		return (mult(n + 1, b));
	}
	return (-1);


}
/**
 * _sqrt_recursion - _sqrt_recursion
 * @n: the first param
 *
 * Return: _sqrt_recursion
 */
int _sqrt_recursion(int n)
{
	return (mult(0, n));
}
