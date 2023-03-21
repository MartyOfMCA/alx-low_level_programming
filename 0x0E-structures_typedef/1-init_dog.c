#include "main.h"
#include "dog.h"

/**
 * init_dog - Initialize a dog record with the given
 * arguments.
 *
 * @d: A pointer to the dog record to be initialized
 * @name: The dog's name
 * @age: The dog's age
 * @owner: The dog's owner
 *
 **/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
	}
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
