#include "main.h"

/**
 * _memset - Writes some bytes of the specified size @n
 * into the specified memory address.
 *
 * @s: The address to be written to
 * @b: The byte to be set
 * @n: The bytes to be written
 *
 * Return: The address to the memory area the
 * bytes were written.
 *
 **/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i  = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
