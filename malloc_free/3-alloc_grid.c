#include "main.h"
#include <stdlib.h>

/**
* alloc_grid - returns a pointer to a 2 dimensional array of integers.
* @width: width of the array
* @height: height of the array
*
* Return: pointer to the 2D array, or NULL if it fails
*/
int **alloc_grid(int width, int height)
{
	int **grid;

	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; ++i)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			for (i -= 1; i >= 0; --i)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; ++j)
			grid[i][j] = 0;
	}
	return (grid);
}
