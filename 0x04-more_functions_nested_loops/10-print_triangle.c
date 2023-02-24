#include "main.h"

/**
 * print_triangle - Display a triangle with the given size.
 *
 * @size: The size for the triangle
 **/
void print_triangle(int size)
{
	int hashes_to_be_displayed;
	int spaces_to_be_displayed;
	int row_count = 1;
	int times_displayed;

	if (size < 1)
		_putchar('\n');

	while (row_count <= size)
	{
		spaces_to_be_displayed = size - row_count;
		times_displayed = 0;
		while (times_displayed < spaces_to_be_displayed)
		{
			_putchar(' ');
			times_displayed++;
		}
		hashes_to_be_displayed = size - spaces_to_be_displayed;
		times_displayed = 0;
		while (times_displayed < hashes_to_be_displayed)
		{
			_putchar('#');
			times_displayed++;
		}
		_putchar('\n');
		row_count++;
	}

}
