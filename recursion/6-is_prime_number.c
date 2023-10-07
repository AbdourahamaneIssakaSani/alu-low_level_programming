int is_divisible(int n, int i);

/**
 * is_prime_number - checks if a number is prime
 * @n: the number to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_divisible(n, 2));
}

/**
 * is_divisible - checks if a number is divisible
 * @n: the number to check
 * @i: the current divisor
 *
 * Return: 0 if n is divisible by an integer from 2 to n/2, 1 otherwise
 */
int is_divisible(int n, int i)
{
	if (i > n / 2)
		return (1);
	if (n % i == 0)
		return (0);
	return (is_divisible(n, i + 1));
}
