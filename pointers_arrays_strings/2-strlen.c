#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: char
 *
 * Return: int
 */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count))
	{
		count++;
	}

	return (count);
}
