#include "main.h"

/**
 * _strncat - Concatenates @n number of characters
 * from the @str string into the @dest string.
 *
 * @dest: The destination string that holds the
 * concatenation
 * @src: The source string to be appended to
 * @dest
 * @n: The number of bytes to be concatenated
 *
 * Return: The @dest concatenated string
 **/
char *_strncat(char *dest, char *src, int n)
{
	int dest_index = 0;
	int src_index = 0;

	while (dest[dest_index] != '\0')
		dest_index++;
	while (src_index < n)
	{
		if (src[src_index] == '\0')
			break;
		dest[dest_index] = src[src_index];
		dest_index++;
		src_index++;
	}
	dest[dest_index] = '\0';

	return (dest);
}
