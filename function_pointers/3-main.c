#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
* main - performs simple operations
* @argc: number of arguments
* @argv: array of arguments
*
* Return: 0 if successful
*/
int main(int argc, char *argv[])
{
	int (*op)(int, int);
	int a, b;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	op = get_op_func(argv[2]);

	if (op == NULL)
	{
		printf("Error\n");
		return (99);
	}

	if ((strcmp(argv[2], "/") == 0 || strcmp(argv[2], "%") == 0) &&
	atoi(argv[3]) == 0)
	{
		printf("Error\n");
		return (100);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	printf("%d\n", op(a, b));

	return (0);
}
