#include "main.h"

/**
 * _isalpha - is alpha
 * @c: int
 *
 * Return: 1 is true, 0 is false
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
