#include "main.h"

/**
 * rot13 - Encodes string using rot13 algorithm
 *
 * @s: The string to be encoded
 *
 * Return: The encoded string
 *
 **/
char *rot13(char *s)
{
	char characters[] = "abcdefghijklmnopqrstuvwxyz";
	int leaps[] = {13, 13, 13, 13, 13, 13, 13, 13,
		13, 13, 13, 13, 13, -13, -13, -13,
		-13, -13, -13, -13, -13, -13, -13, -13, -13, -13};
	int index, search_contents = sizeof(characters);
	int pos_of_s = 0;
	char letter;

	while (s[pos_of_s] != '\0')
	{
		letter = s[pos_of_s];
		index = 0;

		while (index < search_contents)
		{
			if (letter == characters[index] || (letter == characters[index] - 32))
			{
				s[pos_of_s] = s[pos_of_s] + leaps[index];
			}
			index++;
		}
		pos_of_s++;
	}
	return (s);
}
