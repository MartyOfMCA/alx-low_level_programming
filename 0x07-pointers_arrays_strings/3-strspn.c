#include "main.h"

/**
 * _strspn - Get the length for a substring.
 *
 * @s: The string to search
 * @accept: The substring
 *
 * Return: The number of bytes contained in the
 * substring
 *
 **/
unsigned int _strspn(char *s, char *accept)
{
	int a_i = 0, s_i = 0;

	for ( ; s[s_i]; s_i++)
	{
		a_i = 0;
		for ( ; accept[a_i]; a_i++)
		{
			if (s[s_i] == accept[a_i])
			{
				break;
			}
		}
		if (accept[a_i] == '\0')
		{
			break;
		}
	}
	return (s_i);
}
