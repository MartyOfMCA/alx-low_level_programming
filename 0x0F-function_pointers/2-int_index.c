#include "function_pointers.h"

#define EXIT_CODE -1

/**
 * int_index - Search for an integer using the callback
 * @cmp from the given array.
 *
 * @array: The given array
 * @size: The size for the array
 * @cmp: The callback function to perform comparison
 *
 * Return: The index of the element searched for
 *
 **/
int int_index(int *array, int size, int (*cmp)(int))
{
	int array_index = 0;

	if (cmp == NULL || array == NULL || size <= 0)
	{
		return (EXIT_CODE);
	}

	while (array_index < size)
	{
		if (cmp(array[array_index]))
		{
			return (array_index);
		}
		array_index++;
	}
	return (EXIT_CODE);
}
