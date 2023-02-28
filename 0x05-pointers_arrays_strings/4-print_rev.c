#include "main.h"

/**
 * print_rev - Displays given string in the reverse order
 *
 * @s: The given string
 *
 **/
void print_rev(char *s)
{
	char *reversed_str = s;
	int index_reversed = 0;

	while (*s != '\0')
	{
		index_reversed++;
		s++;
	}
	while (index_reversed > 0)
	{
		_putchar(reversed_str[index_reversed - 1]);
		index_reversed--;
	}
	_putchar('\n');
}
