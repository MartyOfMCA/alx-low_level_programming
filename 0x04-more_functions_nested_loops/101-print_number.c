#include "main.h"

/**
 * print_number - Display the given integer
 *
 * @n: The number to be displayed
 **/
void print_number(int n)
{
	int first = n, count = 0, x = 1, i, tmp;

	tmp = n;

	if (n < 0)
	{
		_putchar('-');
		n = (n * -1) - 1;
	}
	while (first != 0)
	{
		first = first / 10;
		count++;
	}
	while (x <= count)
	{
		first = n;
		i = x;
		while (i < count)
		{
			first = first / 10;
			i++;
		}
		if (tmp < 0 && x == count)
			_putchar(((first % 10) + 48) + 1);
		else
			_putchar((first % 10) + 48);
		x++;
	}
	if (count == 0)
		_putchar('0');
}
