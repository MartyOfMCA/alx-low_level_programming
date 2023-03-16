#include "main.h"

/**
 * _realloc - Reallocate memory block
 *
 * @ptr: A pointer to the memory block to be reallocated
 * @old_size: The old size for the memory block
 * @new_size: The new size to be reallocated
 *
 * Return: A pointer to the new memory block allocated
 *
 **/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int ptr_index = 0;
	char *new_ptr;

	if (old_size == new_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	new_ptr = malloc(new_size);
	if (ptr == NULL)
	{
		return (new_ptr);
	}
	if (new_ptr == NULL)
	{
		return (NULL);
	}
	while (ptr_index < old_size)
	{
		new_ptr[ptr_index] = ((char *)ptr)[ptr_index];
		ptr_index++;
	}
	free(ptr);
	return (new_ptr);
}
