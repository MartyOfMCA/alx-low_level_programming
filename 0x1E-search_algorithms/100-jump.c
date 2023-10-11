#include "search_algos.h"
#include <math.h>

/**
 * jump_search - Search for a value in an array
 * using the jump search algorithm.
 *
 * @array: The array to search.
 * @size: The size for the given array.
 * @value: The lookup value.
 *
 * Return: The index for the first occurence of
 * @value.
 *
 */
int jump_search(int *array, size_t size, int value)
{
	size_t index = 0, hop = 0, scan_index = 0;

	if (!array)
		return (-1);

	hop = (int)sqrt(size);
	while (index < size)
	{
		if (array[index] >= value)
		{
			scan_index = index - 3;
			printf("Value found between indexes [%ld] and [%ld]\n"
				, scan_index, index);
			while (scan_index <= index)
			{
				printf("Value checked array[%ld] = [%d]\n", scan_index, array[scan_index]);
				if (array[scan_index] == value)
					return (scan_index);

				scan_index++;
			}
		}
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);

		index += hop;
	}

	scan_index = index - hop;
	printf("Value found between indexes [%ld] and [%ld]\n", scan_index, index);
	while (scan_index < size)
	{
		printf("Value checked array[%ld] = [%d]\n", scan_index, array[scan_index]);
		scan_index++;
	}

	return (-1);
}
