#include "main.h"

/**
 * string_nconcat - Concatenates the first number of
 * bytes @n in @s2 into @s1.
 *
 * @s1: The destination string to be appended
 * @s2: The source string to be copied from
 * @n: The total number of bytes to be copied
 *
 * Return: A pointer to a new memory address with
 * concatenated string
 *
 **/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int len;
	int s1_pos = 0;

	len = _strlen(s2);
	if (n > len)
	{
		n = len;
	}
	len = _strlen(s1);
	ptr = malloc(sizeof(char) * (len + n + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}
	_strconcat(ptr, s1, &s1_pos, len);

	_strconcat(ptr, s2, &s1_pos, n);
	ptr[s1_pos] = '\0';
	return (ptr);
}

/**
 * _strlen - Find the length of the given
 * string ignoring the NULL terminating
 * character at the end of the string.
 *
 * @str: The given string
 *
 * Return: The number of characters in @str
 *
 **/
int _strlen(char *str)
{
	int len = 0;

	if (str == NULL)
	{
		return (0);
	}

	while (str[len])
	{
		len++;
	}

	return (len);
}

/**
 * _strconcat - Copies the specified number of bytes
 * @bytes of characters from the given string @str
 * into the specified destination.
 *
 * @dest: The destination to be copied to
 * @str: The source string to be copied from
 * @s1_pos: The index of @dest to start write
 * operation.
 * @bytes: The number of characters to copy
 *
 **/
void _strconcat(char *dest, char *str, int *s1_pos, int bytes)
{
	int str_index = 0;

	if (str == NULL)
	{
		return;
	}

	while (str_index < bytes)
	{
		dest[*s1_pos] = str[str_index];
		*s1_pos += 1;
		str_index++;
	}
}
