#include "search_algos.h"
#include <math.h>

int _binary_search(int*, int, int, int);

/**
 * exponential_search - Search for a value
 * in an array using the exponential search
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
int exponential_search(int *array, size_t size, int value)
{
	size_t index = 0, exp_index = 1;

	if (!array)
		return (-1);

	while (exp_index < size)
	{
		if (array[exp_index] > value)
			break;

		printf("Value checked array[%ld] = [%d]\n",
			exp_index, array[exp_index]);
		exp_index *= 2;
	}

	 printf("Value found between indexes [%ld] and [%ld]\n",
		exp_index / 2,
		(exp_index > size - 1 ? size - 1 : exp_index)
		);

	 index = exp_index / 2;
	 exp_index = (exp_index > size - 1) ? size - 1 : exp_index;

	return (_binary_search(array, index, exp_index, value));
}

/**
 * _binary_search - Search for @value in @array and
 * return the index where @value can be found.
 *
 * @array: The memory address to the first element in
 * the array to search.
 * @low: The index of the lowest element in the search
 * range.
 * @high: The index of the highest element in the search
 * range.
 * @value: The lookup value.
 *
 * Return: The index for @value in @array.
 *
 */
int _binary_search(int *array, int low, int high, int value)
{
	int index = 0, mid;

	while (low <= high)
	{
		printf("Searching in array: ");
		index = low;
		while (index <= high)
		{
			printf("%d", array[index]);
			if (index < high)
				printf(", ");
			index++;
		}
		printf("\n");

		mid = (low + high) / 2;
		if (value == array[mid])
			return (mid);
		if (value < array[mid])
			high = mid - 1;
		else
			low = mid + 1;
	}

	return (-1);
}
