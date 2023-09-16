#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	/* Loop from 48 to 102 using the ASCII table */
	for (c = '0'; c <= 'f'; c++)
	{
		/* Print before 58 or between 97 and 102 included */
		if ((c < ':') || (c >= 'a' && c <= 'f'))
		{
			putchar(c);
		}
	}

	putchar('\n');

	return (0);
}
