#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Description: prints the 9 times table
 *
 * Return: void
 */
void times_table(void)
{
    int row = 0;
    int column = 0;
    int product = 0;

    while (row < 10)
    {
        column = 0;
        while (column < 10)
        {
            product = row * column;
            if (product < 10)
            {
                if (column != 0)
                {
                    _putchar(' ');
                    _putchar(' ');
                }
                _putchar('0' + product);
            }
            else
            {
                _putchar(' ');
                _putchar('0' + product / 10);
                _putchar('0' + product % 10);
            }

            if (column != 9)
            {
                _putchar(',');
                _putchar(' ');
            }
            column++;
        }
        _putchar('\n');
        row++;
    }
}
