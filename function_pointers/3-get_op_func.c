#include "3-calc.h"
#include <stdlib.h>

/**
* get_op_func - selects the correct function to perform the operation
* @s: operator passed as argument
*
* Return: pointer to the function that corresponds to the operator given as a
* parameter
*/
int (*get_op_func(char *s))(int a, int b)
{
	int i = 0;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}};

	while (i < 5)
	{
		if (*(ops[i].op) == (*s) && s[1] == '\0')
		{
			return (ops[i].f);
		}
		i++;
	}

	return (ops[5].f);
}
