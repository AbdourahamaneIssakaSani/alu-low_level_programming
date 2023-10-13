#include "main.h"
#include <stdlib.h>

/**
* _strdup - returns a pointer to a newly allocated space in memory, which
* contains a copy of the string given as a parameter.
* @str: string to copy
*
* Return: pointer to the duplicated string, or NULL if insufficient memory
* available
*/
char *_strdup(char *str)
{
	char *dup;

	int i, len = 0;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; ++i)
		++len;
	dup = malloc(sizeof(char) * (len + 1));
	if (dup == NULL)
		return (NULL);
	for (i = 0; str[i]; ++i)
		dup[i] = str[i];
	dup[len] = '\0';
	return (dup);
}
