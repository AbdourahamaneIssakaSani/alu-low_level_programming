#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	/* In ASCII, 48 to 57 represent '0' to '9' */
	n = 48;

	while (n < 58)
	{
		putchar(n);
		n++;
	}

	putchar(10);

	return (0);
}