#include "main.h"

/**
 * times_table - Print the 9 times table
 *
 **/
void times_table(void)
{
	int factor = 0;
	int times = 0;
	int x = 1;
	int result;

	while (times < 10)
	{
		_putchar('0');
		while (x <= 9)
		{
			if (x <= 9)
			{
				_putchar(',');
			}
			result = factor * x;

			if (result < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(result + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(result / 10 + '0');
				_putchar(result % 10 + '0');
			}
			x++;
		}
		x = 1;
		_putchar('\n');
		times++;
		factor++;

	}
}
