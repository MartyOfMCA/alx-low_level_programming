#include "inject.h"

/* Contains code to inject into gm program */

/**
 * puts - Injected functionality for puts function
 * for the ./gm program.
 *
 * @str: The inital string passed from ./gm.
 *
 * Return: 0 to signal a successful process otherwise
 * any negitive number
 *
 **/
int puts(const char *str)
{
	write(1, "9 8 10 24 75 - 9\n", 17);
	write(1, "Congratulations, you win the Jackpot!\n", 38);

	exit(0);
}

/**
 * printf - Injected functionality for printf functio
 * for the ./gm program.
 *
 * @format: The initial format specifier passed from
 * ./gm.
 *
 * Return: The number of characters printed excluding
 * the NULL character.
 *
 **/
int printf(const char *format, ...)
{
	puts("Inject");
	return (0);
}
