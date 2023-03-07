#include "main.h"

/**
 * _strchr - Locate the character @c in the
 * given string @s.
 *
 * @s: The given string
 * @c: The character to locate
 *
 * Return: The memory address to the first
 * occurence of the character @c in the
 * string @s or NULL.
 *
 **/
char *_strchr(char *s, char c)
{
	int i = 0;

	for ( ; s[i]; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	if (s[i] == c)
	{
		return (&s[i]);
	}
	return (NULL);
}
