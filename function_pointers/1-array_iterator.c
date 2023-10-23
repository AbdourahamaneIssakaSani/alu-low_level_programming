#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter on each element
 * @array: array to iterate through
 * @size: size of array
 * @action: function pointer
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int temp = 0;

	while (temp < size)
	{
		_putchar(array[temp]);
		temp++;
	}
}
