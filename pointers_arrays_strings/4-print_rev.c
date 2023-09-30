#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: char
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i = 0;
	/* count string len */
	while (*(s + i))
	{
		i++;
	}

	/*Remove the \0 count*/
	i--;

	while (i >= 0)
	{
		_putchar(*(s + i));
		i--;
	}

	_putchar('\n');
}
