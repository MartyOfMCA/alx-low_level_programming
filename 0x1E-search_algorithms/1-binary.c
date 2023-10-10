#include "search_algos.h"

/**
 * binary_search - Search for a value in an array
 * using the binary search algorithm.
 *
 * @array: The array to search.
 * @size: The size for the given array.
 * @value: The lookup value.
 *
 * Return: The index for the first occurence of
 * @value.
 *
 */
int binary_search(int *array, size_t size, int value)
{
	size_t midpoint = 0, lower_bound = 0,
	       upper_bound = 0, index = 0;

	if (!array)
		return (-1);

	upper_bound = size - 1;
	while (lower_bound <= upper_bound)
	{
		midpoint = (lower_bound + upper_bound) / 2;

		printf("Searching in array: ");
		index = lower_bound;
		while (index <= upper_bound)
		{
			printf("%d", array[index]);
			if (index < upper_bound)
				printf(", ");
			index++;
		}
		printf("\n");
		if (array[midpoint] == value)
			return (midpoint);

		if (value < array[midpoint])
			upper_bound = midpoint - 1;
		else
			lower_bound = midpoint + 1;
	}

	return (-1);
}
