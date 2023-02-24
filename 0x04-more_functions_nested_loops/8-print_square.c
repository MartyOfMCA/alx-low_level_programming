#include "main.h"

/**
 * print_square - Display a square
 *
 * @size: The size for the square
 **/
void print_square(int size)
{
	int times_displayed;
	int row_count = 0;

	if (size < 1)
		_putchar('\n');
	while (row_count < size)
	{
		times_displayed = 0;
		while (times_displayed < size)
		{
			_putchar('#');
			times_displayed++;
		}
		_putchar('\n');
		row_count++;
	}
}
