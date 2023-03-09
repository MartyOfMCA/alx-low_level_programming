#include "main.h"

/**
 * _print_rev_recursion - Display the given string in
 * the reverse order.
 *
 * @s: The given string
 *
 **/
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
	}
	if (*s)
	{
		_putchar(*s);
	}
}
