#include "main.h"

/**
 * is_prime_number - checks if a number is prime
 * @n: number to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
    return (helper(n, 2));
}
