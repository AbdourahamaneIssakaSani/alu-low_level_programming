#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int z = 122;

	while (z > 96)
	{
		putchar(z);
		z--;
	}
	putchar(10);

	return (0);
}
