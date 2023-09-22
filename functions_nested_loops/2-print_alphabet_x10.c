#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets x10
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char character = 'a';
	int freq = 0;

	while (freq < 10)
	{
		character = 'a';
		while (character <= 'z')
		{
			_putchar(character);
			character++;
		}
		_putchar(10);

		freq++;
	}
}
