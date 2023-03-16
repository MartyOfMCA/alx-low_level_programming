#include "main.h"

/**
 * _calloc - Allocate memory for an array.
 *
 * @nmemb: The number of elements in the array
 * @size: The size for the array type
 *
 * Return: A pointer to the array allocated
 *
 **/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int ptr_index = 0;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	size *= nmemb;
	ptr = malloc(size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	while (ptr_index < size)
	{
		ptr[ptr_index] = 0;
		ptr_index++;
	}

	return (ptr);
}
