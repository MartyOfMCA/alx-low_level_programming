#include "main.h"

/**
 * array_range - Create an array of integers from the
 * minimum and maximum given values. Values are sorted
 * from @min to @max.
 *
 * @min: The minimum value in the array (inclusive)
 * @max: The maximum value i nthe array (inclusive)
 *
 * Return: A pointer to the newly allocated array with
 * ordered data
 *
 **/
int *array_range(int min, int max)
{
	int *ptr;
	int ptr_index = 0;

	if (min > max)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(int) * ((max - min) + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	while (min <= max)
	{
		ptr[ptr_index++] = min++;
	}
	return (ptr);
}
