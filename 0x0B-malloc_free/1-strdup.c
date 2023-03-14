#include "main.h"

/**
 * _strdup - Allocate block in memory to store a copy of
 * the given string @str.
 *
 * @str: The string to be cloned
 *
 * Return: Memory address to first byte in allocated block
 *
 **/
char *_strdup(char *str)
{
	unsigned int size_of_str = 1, new_str_index = 0;
	char *new_str;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[size_of_str])
	{
		size_of_str++;
	}

	new_str = malloc((size_of_str + 1) * sizeof(char));

	if (new_str == NULL)
	{
		return (NULL);
	}

	while (new_str_index < size_of_str)
	{
		new_str[new_str_index] = str[new_str_index];
		new_str_index++;
	}

	new_str[new_str_index] = '\0';

	return (new_str);
}
