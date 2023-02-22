#include "main.h"

/**
 * print_to_98 - Display all natural numbers
 * from the given number to 98
 *
 * @n: the given number
 **/
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			if (n < 10)
				_putchar(n + 48);
			else
			{
				_putchar(n / 10 + 48);
				_putchar(n % 10 + 48);
			}
			if (n < 98)
				_putchar(',');
			n++;
		}
		_putchar('\n');
	}
	else
	{
		while (n  >= 98)
		{
			if (n < 10)
				_putchar(n + 48);
			else
			{
				_putchar(n / 10 + 48);
				_putchar(n % 10 + 48);
			}
			if (n > 98)
				_putchar(',');
			n--;
		}
		_putchar('\n');
	}
}
