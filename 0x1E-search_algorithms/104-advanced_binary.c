#include "search_algos.h"

int _binary_search(int *array, size_t low, size_t high, int value);

/**
 * advanced_binary - Search for a value in
 * an array using the binary search algorithm.
 *
 * @array: The array to search.
 * @size: The size for the given array.
 * @value: The lookup value.
 *
 * Return: The index for the first occurence of
 * @value.
 *
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (!array)
		return (-1);

	return (_binary_search(array, 0, size - 1, value));
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
int _binary_search(int *array, size_t low, size_t high, int value)
{
	size_t midpoint = 0, index = 0;

	midpoint = (low + high) / 2;

	if (low >= high)
	{
		if (array[midpoint] == value)
			return (midpoint);
		printf("Searching in array: %d\n", array[midpoint]);
		return (-1);
	}

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

	if (array[midpoint] == value)
		return (_binary_search(array, low, midpoint, value));
	if (value > array[midpoint])
		return (_binary_search(array, midpoint + 1, high, value));
	return (_binary_search(array, low, midpoint - 1, value));
}
