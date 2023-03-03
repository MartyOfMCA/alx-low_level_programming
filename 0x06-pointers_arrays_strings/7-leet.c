#include "main.h"

/**
 * leet - Encodes a string into 1337.
 *
 * @s: The given string to be encoded
 *
 * Return: The encoded string
 *
 **/
char *leet(char *s)
{
	int pos_of_s = 0, index;
	char search[] = "aeotl";
	char replace[] = "43071";
	char character;
	int search_contents = sizeof(search);

	while (s[pos_of_s] != '\0')
	{
		character = s[pos_of_s];
		index = 0;
		while (index < search_contents)
		{
			if (character == search[index] || (character + 32) == search[index])
				s[pos_of_s] = replace[index];
			index++;
		}
		pos_of_s++;
	}


	return (s);
}
