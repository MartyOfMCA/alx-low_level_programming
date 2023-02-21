#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet
 * in lowercases 10 times
 **/
void print_alphabet_x10(void)
{
	char alphabets[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int caret_position = 0;
	int number_of_times_displayed = 0;

	while (number_of_times_displayed < 10)
	{
		while (caret_position < 26)
		{
			char alphabet_at_caret = alphabets[caret_position] + 32;

			_putchar(alphabet_at_caret);
			caret_position++;
		}
		caret_position = 0;
		_putchar('\n');
		number_of_times_displayed++;
	}
}
