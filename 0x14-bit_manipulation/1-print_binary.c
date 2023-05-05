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
	/* Move to the least significant bit */
	if (n >> 1 > 0)
	{
		print_binary(n >> 1);
	}
	/*
	 * Print bit value in the reverse order.
	 * When the least significant bit in each
	 * recursive call is 1 then the bitwise &
	 * of 1 would print the value 1 to indicate
	 * the bit is turned on
	 */
	_putchar((n & 1) + 48);
}
