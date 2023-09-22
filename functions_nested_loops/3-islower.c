#include "main.h"

/**
 * _islower - _islower
 *
 * Return: 1 is true, 0 is false
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
