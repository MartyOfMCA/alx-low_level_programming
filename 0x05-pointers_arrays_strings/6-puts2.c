#include "main.h"

/**
 * puts2 - Display every other character in the given string beginning
 * with the first character.
 *
 * @str: The given string
 *
 **/
void puts2(char *str)
{
	int odd_finder = 0;
	int character_count = 0;

	while (str[character_count] != '\0')
	{
		odd_finder++;
		if (odd_finder % 2 == 1)
			_putchar(str[character_count]);
		character_count++;
	}
	_putchar('\n');
}
