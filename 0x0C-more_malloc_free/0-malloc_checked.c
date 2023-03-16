#include "main.h"

/**
 * malloc_checked - Allocate memory for the given
 * number of bytes.
 *
 * @b: The number of bytes to be allocated
 *
 * Return: A pointer to the memory address
 * allocated
 *
 **/
void *malloc_checked(unsigned int b)
{
	const int EXIT_CODE = 98;
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(EXIT_CODE);
	}

	return (ptr);
}
