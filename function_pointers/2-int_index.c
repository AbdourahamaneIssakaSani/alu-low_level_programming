#include "function_pointers.h"

/**
* int_index - searches for an integer
* @array: array to search
* @size: size of array
* @cmp: pointer to function
*
* Return: index of first element for which cmp doesn't return 0
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int temp = 0;

	int index = -1;

	if (size <= 0)
		return (-1);

	if (array == NULL)
		return (index);

	if (cmp == NULL)
		return (index);

	while (temp < size)
	{
		index = (*cmp)(array[temp]);
		if (index != 0)
			return (temp);
		temp++;
	}

	return (index);
}
