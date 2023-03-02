#include "main.h"

/**
 * _strncpy - Copies a string from @src into
 * the @dest.
 *
 * @src: The source string to be copied
 * @dest: The destination for the copied string
 * @n: The number of bytes to be copied
 *
 * Return: The copied string in @dest
 **/
char *_strncpy(char *dest, char *src, int n)
{
	int index = 0;

	while (index < n && src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	while (index < n)
	{
		dest[index] = '\0';
		index++;
	}

	return (dest);
}
