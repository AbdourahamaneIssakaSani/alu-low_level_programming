#include <stdlib.h>
#include "main.h"

/**
 * print_last_digit - prints last digit
 *
 * Return: last digit
 */
int print_last_digit(int n)
{
	int r = abs(n % 10);

	_putchar(r + '0');

	return (r);
}
