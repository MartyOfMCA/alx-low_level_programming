#include "dog.h"
#include "main.h"

/**
 * free_dog - Free the memory allocated
 * for the given dog record.
 *
 * @d: The dog record
 *
 **/
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}
	free((*d).name);
	free((*d).owner);
	free(d);
}
