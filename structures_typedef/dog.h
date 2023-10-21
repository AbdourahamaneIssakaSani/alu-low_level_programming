#ifndef STRUCT_DOG_H
#define STRUCT_DOG_H
/**
 * struct dog - dog's information
 * @name: dog's name
 * @owner: dog's owner
 * @age: dog's age
*/
struct dog
{
	char *name;

	char *owner;

	float age;

};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif

