#include "main.h"

/**
 * print_binary - Display the binary representation
 * for the given number
 *
 * @n: An unsigned int to be converted to
 * binary format
 *
 **/
void print_binary(unsigned long int n)
{
	unsigned int bit_val, shift_val = n;

	if (n == 0)
	{
		_putchar('0');
	}
	while (shift_val > 0)
	{
		bit_val = (n & shift_val);
		(bit_val == 0) ? _putchar('0') : _putchar('1');
		shift_val >>= 1;
	}
}
