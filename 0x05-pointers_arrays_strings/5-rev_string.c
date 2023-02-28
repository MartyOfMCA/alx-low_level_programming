#include "main.h"

/**
 * rev_string - Reverses the given string.
 *
 * @s: The given string
 *
 **/
void rev_string(char *s)
{
	int index_reversed = 0;
	int index = 0;
	char letter;

	while (s[index_reversed] != '\0')
	{
		index_reversed++;
	}
	while (index_reversed > index)
	{
		letter = s[index];
		index_reversed--;
		s[index] = s[index_reversed];
		s[index_reversed] = letter;
		index++;
	}
}
