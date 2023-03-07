#include "main.h"

/**
 * _memcpy - Copy the specified number of bytes from
 * the source to the destination memory area.
 *
 * @dest: The destination memory area to be written
 * @src: The source memory to be copied
 * @n: Total bytes to be copied
 *
 * Return: The destination memory area
 *
 **/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
