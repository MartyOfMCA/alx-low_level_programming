#include "main.h"

/**
 * jack_bauer - Display numbers in time format from 00:00 to 23:59
 *
 **/
void jack_bauer(void)
{
	int hour = '0', minute = '0', second_prefix = '0',
	    second_suffix = '0';

	while (hour <= '2' && minute <= '9'
			&& second_prefix <= '5'
			&& second_suffix <= '9')
	{
		_putchar(hour);
		_putchar(minute);
		_putchar(':');
		_putchar(second_prefix);
		_putchar(second_suffix);
		_putchar('\n');
		second_suffix++;
		if (second_suffix > '9')
		{
			second_suffix = '0';
			second_prefix++;
			if (second_prefix > '5')
			{
				second_prefix = '0';
				minute++;
				if (minute > '9')
				{
					minute = '0';
					hour++;
				}
			}
		}
		if (hour == '2' && minute == '4'
				&& second_prefix == '0'
				&& second_suffix == '0')
		{
			break;
		}
	}
}
