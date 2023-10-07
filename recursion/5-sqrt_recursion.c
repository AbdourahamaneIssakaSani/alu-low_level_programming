#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to find square root of
 *
 * Return: square root of n
 */
int _sqrt_recursion(int n)
{
    return (helper(n, 1));
}