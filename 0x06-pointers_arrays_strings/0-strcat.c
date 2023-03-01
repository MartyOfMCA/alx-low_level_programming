#include "main.h"

/**
 * _strcat - Concatenates the @src string into the
 * @dest string.
 *
 * @dest: The destination string that holds the
 * concatenation
 * @src: The source string to be appended to
 * @dest
 *
 * Return: The @dest concatenated string
 **/
char *_strcat(char *dest, char *src)
{
	int dest_index = 0;
	int src_index = 0;

	while (dest[dest_index] != '\0')
		dest_index++;
	while (src[src_index] != '\0')
	{
		dest[dest_index] = src[src_index];
		dest_index++;
		src_index++;
	}
	dest[dest_index] = '\0';

	return (dest);
}
