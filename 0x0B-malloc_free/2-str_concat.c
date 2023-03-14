#include "main.h"

unsigned int get_size_of_str(char *str);
char *copy_str(char *new_str, char *str, unsigned int *start);

/**
 * str_concat - Concatenate the source string @s2 to the
 * destination string @s1.
 *
 * @s1: The destination string to be copied to
 * @s2: The source string to be copied from
 *
 * Return: The address to the concatenated string
 *
 **/
char *str_concat(char *s1, char *s2)
{
	unsigned int str_index = 0;
	unsigned int size_of_s1, size_of_s2, size;
	char *concat_str;

	size_of_s1 = get_size_of_str(s1);
	size_of_s2 = get_size_of_str(s2);

	size = size_of_s1 + size_of_s2;
	concat_str = malloc((size + 1) * sizeof(char));

	if (concat_str == NULL)
	{
		return (NULL);
	}

	copy_str(concat_str, s1, &str_index);
	copy_str(concat_str, s2, &str_index);
	concat_str[size] = '\0';

	return (concat_str);
}

/**
 * get_size_of_str - Gets the total bytes in the
 * given string @str.
 *
 * @str: The given string
 *
 * Return: Total bytes stored in @str
 *
 **/
unsigned int get_size_of_str(char *str)
{
	unsigned int size_of_str = 0;

	while (str != NULL && str[size_of_str])
	{
		size_of_str++;
	}

	return (size_of_str);
}

/**
 * copy_str - Copies characters from the source
 * string @str into the destination string @new_str.
 *
 * @new_str: The desitination for the copied bytes
 * @str: The string to be copied
 * @start: The total bytes copied into destination
 * string @new_str
 *
 * Return: The address to the new string copied
 *
 **/
char *copy_str(char *new_str, char *str, unsigned int *start)
{
	unsigned int bytes_copied = 0;

	while (str != NULL && str[bytes_copied])
	{
		new_str[*start + bytes_copied] = str[bytes_copied];
		bytes_copied++;
	}
	*start += bytes_copied;
	return (new_str);
}
