#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Display all natural numbers
 * from the given number to 98
 *
 * @number: the given number
 **/
void print_to_98(int number)
{
	if (number >= 98)
	{
		while (number >= 98)
		{
			puts( number);
			number--;
			if (number > 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else
	{
		while (number <= 98)
		{
			printf("%d", number);
			number++;
			if (number < 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	printf("\n");
}
