#include "variadic_functions.h"

/**
 * print_numbers - Display the given arguments with the given
 * @separator.
 *
 * @separator: The string to display between numbers
 * @n: The number of integers given as arguments
 *
 **/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int index = 0;
	int number;
	va_list args;

	va_start(args, n);

	while (index < n)
	{
		number = va_arg(args, int);
		printf("%d", number);

		if (index++ < (n - 1))
		{
			printf("%s", ((separator == NULL) ? "" : separator));
		}
	}
	va_end(args);
	printf("\n");
}
