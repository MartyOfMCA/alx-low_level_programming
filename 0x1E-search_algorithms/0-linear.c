#include "search_algos.h"

/**
 * linear_search - Search for a value in an array
 * using the linear search algorithm.
 *
 * @array: The array to search.
 * @size: The size for the given array.
 * @value: The lookup value.
 *
 * Return: The index for the first occurence of
 * @value.
 *
 */
int linear_search(int *array, size_t size, int value)
{
	size_t index = 0;

	if (!array)
		return (-1);

	while (index < size)
	{
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);

		index++;
	}

	return (-1);
}
