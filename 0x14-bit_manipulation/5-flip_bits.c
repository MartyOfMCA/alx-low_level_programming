#include "main.h"

/**
 * flip_bits - Finds the number of bits to flip to
 * convert @n to @m. No reqal conversion happens.
 *
 * @n: The original number that would be flipped
 * @m: The resulting number after flipping
 *
 * Return: The number of bits that needs to be
 * flipped
 *
 **/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flipped_bits = 0;
	unsigned long int original_number_bit_mask = n;
	unsigned long int resulting_number_bit_mask = m;

	while (original_number_bit_mask !=
		resulting_number_bit_mask)
	{
		if ((original_number_bit_mask & 1) !=
			(resulting_number_bit_mask & 1))
		{
			flipped_bits++;
		}
		original_number_bit_mask >>= 1;
		resulting_number_bit_mask >>= 1;
	}
	return (flipped_bits);
}
