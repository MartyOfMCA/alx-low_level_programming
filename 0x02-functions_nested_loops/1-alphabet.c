#include "main.h"

/**
 * print_alphabet - prints the alphabet
 * in lowercase
 **/
void print_alphabet(void)
{
	char alphabets[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int caret_position = 0;

	while (caret_position < 26)
	{
		char alphabet_at_caret = alphabets[caret_position] + 32;

		_putchar(alphabet_at_caret);
		caret_position++;
	}

	_putchar('\n');
}
