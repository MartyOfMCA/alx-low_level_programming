#include "main.h"

/**
 * factorial - Calcluate the factorial for the
 * given number.
 *
 * @n: The given number
 *
 * Return: The factorial for the given number
 *
 **/
int factorial(int n)
{
	if (n > 0)
	{
		return (n * (factorial(n - 1)));
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (n + 1);
}
