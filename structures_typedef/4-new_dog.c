#include "dog.h"
#include <stdlib.h>

/**
* new_dog - creates a new dog
* @name: dog's name
* @age: dog's age
* @owner: dog's owner
*
* Return: pointer to new dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int i, name_len, owner_len;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	for (name_len = 0; name[name_len] != '\0'; ++name_len)
		;
	for (owner_len = 0; owner[owner_len] != '\0'; ++owner_len)
		;
	(*new_dog).name = malloc(sizeof(char) * (name_len + 1));
	if ((*new_dog).name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	(*new_dog).owner = malloc(sizeof(char) * (owner_len + 1));
	if ((*new_dog).owner == NULL)
	{
		free((*new_dog).name);
		free(new_dog);
		return (NULL);
	}
	for (i = 0; i <= name_len; ++i)
		(*new_dog).name[i] = name[i];
	for (i = 0; i <= owner_len; ++i)
		(*new_dog).owner[i] = owner[i];
	(*new_dog).age = age;
	return (new_dog);
}
