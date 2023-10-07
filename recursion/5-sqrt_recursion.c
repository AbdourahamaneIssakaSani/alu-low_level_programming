#include "main.h"

int sqrt_search(int n, int low, int high);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to get the square root of
 *
 * Return: the natural square root, or -1 if n has no natural square root
 */
int _sqrt_recursion(int n)
{
    if (n < 0)
        return (-1);
    return sqrt_search(n, 0, n);
}

/**
 * sqrt_search - helper function to search for the square root recursively
 * @n: the number to find the square root for
 * @low: lower limit of the search
 * @high: upper limit of the search
 *
 * Return: the square root or -1 if there isn't one
 */
int sqrt_search(int n, int low, int high)
{
    if (low > high)
        return (-1);

    int mid = (low + high) / 2;
    int mid_squared = mid * mid;

    if (mid_squared == n)
        return mid;

    if (mid_squared < n)
        return sqrt_search(n, mid + 1, high);

    return sqrt_search(n, low, mid - 1);
}
