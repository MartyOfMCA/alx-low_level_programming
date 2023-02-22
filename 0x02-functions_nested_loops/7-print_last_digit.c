#include "main.h"

/**
 * print_last_digit - Display the last digit of
 * any given number.
 *
 * @number: The given number.
 *
 * Return: The last digit for the number given as @number
 *
 **/
int print_last_digit(int number)
{
	int remainder = number % 10;

	if (remainder < 0)
	{
		remainder = remainder * -1;
	}

	/* Add 48 to remainder to obtain ASCII for digits */
	_putchar(remainder + 48);

	return (remainder);
}
