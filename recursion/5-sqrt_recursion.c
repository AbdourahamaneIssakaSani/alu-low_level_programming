int find_sqrt(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to find the square root of
 *
 * Return: the natural square root of n or -1 if n doesn't have one
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (find_sqrt(n, 0));
}

/**
 * find_sqrt - find the square root recursively
 * @n: the number to find the square root of
 * @i: the current divisor
 *
 * Return: the square root of n or -1 if none exists
 */
int find_sqrt(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (find_sqrt(n, i + 1));
}
