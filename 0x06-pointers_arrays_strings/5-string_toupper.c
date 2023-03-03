#include "main.h"

/**
 * string_toupper - Convert the entire given string
 * to an uppercase.
 *
 * @s: The string to be converted
 *
 * Return: @s as an uppercase string
 *
 **/
char *string_toupper(char *s)
{
	int start_pos = 0;

	while (s[start_pos] != '\0')
	{
		if (s[start_pos] <= 'z' && s[start_pos] >= 'a')
		{
			s[start_pos] -= 32;
		}
		start_pos++;
	}

	return (s);
}
