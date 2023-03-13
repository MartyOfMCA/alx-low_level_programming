#include "main.h"

/**
 * create_array - Create an array of chars and populate
 * array bytes with the specified character.
 *
 * @size: The size of array to be allocated
 * @c: The character to be written to the array
 *
 * Return: Memory address to first element in array
 *
 **/
char *create_array(unsigned int size, char c)
{
	char *arr = malloc(size * sizeof(char));
	unsigned int arr_index = 0;

	if ((arr == NULL) || (size == 0))
	{
		return (NULL);
	}
	while (arr_index < size)
	{
		arr[arr_index] = c;
		arr_index++;
	}
	return (arr);
}
