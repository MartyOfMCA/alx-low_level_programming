#include "variadic_functions.h"

/**
 * sum_them_all - Calculate the sum of all the given
 * arguments.
 *
 * @n: The number of arguments given
 *
 * Return: The result obtained after the calculation
 *
 **/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int index = 0, sum = 0;
	int number;
	va_list args;

	va_start(args, n);
	while (index++ < n)
	{
		number = va_arg(args, int);
		sum += number;
	}
	return (sum);
}
