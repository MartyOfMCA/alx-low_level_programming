#include "main.h"

/**
 * cap_string - Capitalize words following some delimiters.
 * Delimiters are: ,.;!?\"(){}\t\n and a whitespace.
 *
 * @s: The string to be capitalized
 *
 * Return: The capitalized string
 *
 **/
char *cap_string(char *s)
{
	char delimiters[] = {' ', '\t', '\n', ',', ';', '.',
	'!', '?', '"', '(', ')', '{', '}'};
	int size_of_delimiters = sizeof(delimiters), pos_of_s = 0, pos_of_delimiter;

	while (s[pos_of_s] != '\0')
	{
		while (!(s[pos_of_s] >= 'a' && s[pos_of_s] <= 'z'))
			pos_of_s++;
		if (pos_of_s == 0)
			s[pos_of_s] -= 32;
		pos_of_delimiter = 0;
		while (pos_of_delimiter < size_of_delimiters)
		{
			if (s[pos_of_s - 1] == delimiters[pos_of_delimiter])
				s[pos_of_s] -= 32;
			pos_of_delimiter++;
		}
		pos_of_s += 1;
	}
	return (s);
}
