#include <stddef.h>
#include "function_pointers.h"
#include <stdlib.h>

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
	if (action == NULL)
		return;
	size_t temp = 0;

	while (temp < size)
	{
		(*action)(array[temp]);
		temp++;
	}
}
