#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* In ASCII, 97 to 122 represent 'a' to 'z' */
	int a = 97;

	while (a < 123)
	{
		putchar(a);
		/* Incrementing 'a' to get the next character in the ASCII sequence */
		a++;
	}
	/* Prints newline */
	putchar(10);

	return (0);
}
