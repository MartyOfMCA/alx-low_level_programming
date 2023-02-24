#include "main.h"

/**
 * print_line - Draws a straight line in the
 * terminal.
 *
 * @n: The number of times the character for
 * drawing whould be used
 **/
void print_line(int n)
{
	int times_displayed = 0;

	while (times_displayed < n)
	{
		_putchar('_');
		times_displayed++;
	}
	_putchar('\n');
}
