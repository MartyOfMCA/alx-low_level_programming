#include "main.h"

/**
 * binary_to_uint - Convert the given binary
 * number to an unsigned int.
 *
 * @b: The string containing the binary
 * number
 *
 * Return: The converted binary as an unsigned
 * int
 *
 **/
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0, bit;
	int b_len = 0, exponent;

	if (_isbitsonly(b) == false)
	{
		return (0);
	}
	exponent = _strlen(b) - 1;
	while (b[b_len] != '\0')
	{
		bit = _getbit(b[b_len]);
		dec += bit_exponent(bit, exponent);
		b_len++;
		exponent--;
	}
	return (dec);
}

/**
 * _strlen - Find the total number of
 * characters in the given string.
 *
 * @str: The given string
 *
 * Return: The total number of characters
 * found (excludes the null character)
 *
 **/
int _strlen(const char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * bit_exponent - Find the exponent for
 * the given number raised at the given
 * index.
 *
 * @bit: The bit to be indexed
 * @index: The index to raise @bit
 *
 * Return: The result after raising
 * @bit to the power of @index
 *
 **/
int bit_exponent(int bit, int index)
{
	int index_count = 0, result = 1, base = 2;

	while (index_count < index)
	{
		result *= base;
		index_count++;
	}
	result *= bit;
	return (result);
}

/**
 * _isbitsonly - Checks whether the given string
 * representing binary characters has valid
 * characters.
 *
 * @str: The binary represented as a string
 *
 * Return: A true value when a valid binary is
 * given to the function otherwise false
 *
 **/
bool _isbitsonly(const char *str)
{
	int str_index = 0;

	if (str == NULL)
	{
		return (false);
	}
	while (str[str_index] != '\0')
	{
		if (str[str_index] != '0' &&
			str[str_index] != '1')
		{
			return (false);
		}
		str_index++;
	}
	return (true);
}

/**
 * _getbit - Obtain the numeric representation
 * for the given bit as a character.
 *
 * @bit_str: The character representation for
 * a bit
 *
 * Return: The numeric representation for the
 * given bit
 *
 */
int _getbit(char bit_str)
{
	if (bit_str == '0')
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
