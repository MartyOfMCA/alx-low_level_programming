#include "search_algos.h"
#include <math.h>

/**
 * interpolation_search - Search for a value
 * in an array using the interpolation search
 * algorithm.
 *
 * @array: The array to search.
 * @size: The size for the given array.
 * @value: The lookup value.
 *
 * Return: The index for the first occurence of
 * @value.
 *
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t probe = 0, high = 0, low = 0;

	if (!array)
		return (-1);

	high = size - 1;

	while (low < high)
	{
		probe = low + (((double)(high - low) /
			(array[high] - array[low])) *
			(value - array[low]));
		if (probe >= size)
		{
			printf("Value checked array[%ld] is out of range\n",
				probe);
			return (-1);
		}
		printf("Value checked array[%ld] = [%d]\n",
			probe, array[probe]);
		if (array[probe] == value)
		{
			return (probe);
		}

		if (value < array[probe])
			high = probe - 1;
		else
			low = probe + 1;
	}

	return (-1);
}
