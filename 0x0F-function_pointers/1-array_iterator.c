#include "function_pointers.h"

/**
 * array_iterator - Display the first @size from the given array
 * using callback @action
 *
 * @array: The given array
 * @size: The number of items to be retrieved from @array
 * @action: The callback function to display an element
 *
 **/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t arr_index = 0;

	if (action == NULL || array == NULL)
	{
		return;
	}
	while (arr_index < size)
	{
		action(array[arr_index++]);
	}
}
