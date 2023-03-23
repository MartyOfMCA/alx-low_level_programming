#include "variadic_functions.h"

int print_arg(va_list *args, char type);

/**
 * print_all - Display all arguments in the specified
 * @format.
 *
 * @format: The specifed format used in displaying
 * arguments
 *
 **/
void print_all(const char * const format, ...)
{
	char expected_format[] = {"cifs"};
	va_list args;
	int index = 0, expected_format_index;

	va_start(args, format);

	while (format && format[index])
	{
		expected_format_index = 0;
		while ((format[index] != expected_format[expected_format_index]) &&
			(expected_format[expected_format_index]))
		{
			expected_format_index++;
		}
		if (print_arg(&args, format[index]) == 1 && format[index + 1])
		{
			printf(", ");
		}
		index++;
	}
	va_end(args);
	printf("\n");
}
/**
 * print_arg - Display the given argument of the
 * specified type.
 *
 * @args: A pointer to the to the next item in the
 * list of argument to be processed.
 * @format: The format to be used in displaying
 * @str
 *
 * Return: 1 if a valid format is provided otherwise 0
 *
 **/
int print_arg(va_list *args, char format)
{
	char *str;

	switch (format)
	{
		case 'c':
			printf("%c", va_arg(*args, int));
			return (1);
		case 'i':
			printf("%d", va_arg(*args, int));
			return (1);
		case 'f':
			printf("%f", va_arg(*args, double));
			return (1);
		case 's':
			str = va_arg(*args, char *);
			if (str == NULL)
			{
				str = "(nil)";
			}
			printf("%s", str);
			return (1);
	}
	return (0);
}
