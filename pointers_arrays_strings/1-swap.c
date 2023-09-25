#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: int
 * @b: int
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
    int c = *a;
    
    *a = *b;
    *b = c;
}
