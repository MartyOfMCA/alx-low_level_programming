#include "main.h"

/**
 * _puts - Print a string to the standard output.
 *
 * @str: The string to be displayed
 *
 **/
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(str[0]);
		str++;
	}
	_putchar('\n');
}
