#include "main.h"

/**
 * print_sign - Display the sign for a number
 *
 * @n: the number whose sign is to be
 * displayed
 *
 * Return: 1 when @n is greater than zero, 0
 * when @n is zero otherwise -1
 **/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
