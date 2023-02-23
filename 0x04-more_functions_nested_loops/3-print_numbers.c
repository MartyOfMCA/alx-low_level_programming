#include "main.h"

/**
 * print_numbers - Display the numbers 0 through to 9
 **/
void print_numbers(void)
{
	int number = '0';

	while (number <= '9')
	{
		_putchar(number);
		number++;
	}
	_putchar('\n');
}
