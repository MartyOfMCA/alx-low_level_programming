#include "dog.h"
#include "main.h"

/**
 * print_dog - Display the record of the given dog
 *
 * @d: A pointer to the given dog
 *
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}

	if ((*d).name == NULL)
	{
		(*d).name = "(nil)";
	}
	if ((*d).owner == NULL)
	{
		(*d).owner = "(nil)";
	}

	printf("Name: %s\n", (*d).name);
	printf("Age: %f\n", (*d).age);
	printf("Owner: %s\n", (*d).owner);
}
