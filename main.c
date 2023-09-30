#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n = 98;
    int *p = &n;

    *p++;

    printf("%p\n", p);
    printf("value in p: %d\n", *p);

    printf("%d\n", n);
    return (0);
}
