#include "main.h"

/**
 * print_most_numbers - Display the numbers from 0 through
 * to 9 ignoring the numbers 2 and 4.
 **/
void print_most_numbers(void)
{
	int number = '0';

	while (number <= '9')
	{
		if (number == '2' || number == '4')
		{
			number++;
			continue;
		}
		_putchar(number);
		number++;
	}

	_putchar('\n');
}
