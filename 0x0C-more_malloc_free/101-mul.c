#include "main.h"

/**
 * main - Print the product for the two
 * arguments provided to the program. This is
 * the entry into the program.
 *
 * @argc: The number of arguments provided
 * @argv: The arguments given
 *
 * Return: The exit code for the program
 *
 **/
int main(int argc, char *argv[])
{
	const int EXIT_CODE = 98;
	int num1, num2, product;

	if (argc != 3)
	{
		print_error();
		exit(EXIT_CODE);
	}

	if (!(_isdigit(argv[1])) || !(_isdigit(argv[2])))
	{
		print_error();
		exit(EXIT_CODE);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	product = num1 * num2;
	print_number(product);
	_putchar('\n');

	return (EXIT_SUCCESS);
}

/**
 * _isdigit - Checks whether the given string
 * is a digit or not.
 *
 * @characters: The given string
 *
 * Return: 1 when the @characters consists of
 * only digits otherwise 0
 *
 **/
int _isdigit(char *characters)
{
	int char_index = 0;
	char character;

	while (characters[char_index])
	{
		character = characters[char_index];
		if ((character >= '0' && character <= '9') || (character == '-'))
		{
			char_index++;
			continue;
		}
		return (0);
	}
	return (1);
}

/**
 * print_error - Display an error message to the
 * standard output device followed by a new line.
 *
 **/
void print_error(void)
{
	char *err = "Error";
	int char_index = 0;

	while (err[char_index])
	{
		_putchar(err[char_index++]);
	}
	_putchar('\n');
}

/**
 * print_number - Display the given integer.
 *
 * @product: The integer to be displayed
 *
 **/
void print_number(int product)
{
	int last_digit = product, tmp = product,
	    number_of_digits = 0, digit_index = 1, digit_pos;

	if (product < 0)
	{
		_putchar('-');
		product = (product * -1) - 1;
	}
	while (last_digit != 0)
	{
		last_digit /= 10;
		number_of_digits++;
	}
	while (digit_index <= number_of_digits)
	{
		last_digit = product;
		digit_pos = digit_index;
		while (digit_pos < number_of_digits)
		{
			last_digit /= 10;
			digit_pos++;
		}
		if (tmp < 0 && digit_index == number_of_digits)
		{
			_putchar(((last_digit % 10) + 48));
		}
		digit_index++;
	}
	if (number_of_digits == 0)
	{
		_putchar('0');
	}
}
