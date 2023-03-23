#include "variadic_functions.h"

/**
 * print_strings - Display strings found in the given
 * arguments with the @separator between the strings.
 *
 * @separator: The characters to display between stringss
 * @n: The number of strings given as arguments
 *
 **/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int index = 0;
	char *word;
	va_list args;

	va_start(args, n);

	while (index < n)
	{
		word = va_arg(args, char *);
		if (word ==  NULL)
		{
			word = "(nil)";
		}
		printf("%s", word);
		if (index++ < (n - 1))
		{
			printf("%s", ((separator == NULL) ? "" : separator));
		}
	}
	va_end(args);
	printf("\n");
}
