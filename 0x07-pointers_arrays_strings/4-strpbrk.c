#include "main.h"

/**
 * _strpbrk - Locate the first occurence in the given
 * string  @s of any of the bytes in the string @accept.
 *
 * @s: The given string
 * @accept: The search string
 *
 * Return: A pointer to the byte in @s that matches one
 * of the bytes in @accept or NULL
 *
 **/
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;

	for ( ; s[i]; i++)
	{
		j = 0;
		for ( ; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
	}
	return (NULL);
}
