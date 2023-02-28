#include "main.h"

/**
 * puts_half - Display half of the given string.
 *
 * @str: The given string
 *
 **/
void puts_half(char *str)
{
	int length = 0;
	int start_position;

	while (str[length] != '\0')
	{
		length++;
	}
	start_position = length / 2;
	if (length % 2 == 1)
	{
		start_position = (length - 1) / 2;
		start_position++;
	}
	while (start_position < length)
	{
		_putchar(str[start_position]);
		start_position++;
	}
	_putchar('\n');
}
