#include "main.h"

/**
 * _pow_recursion - Returns the value of @x raised to
 * the power of @y.
 *
 * @x: The given integer
 * @y: The exponent
 *
 * Return: The result after exponentiation
 *
 **/
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 1)
	{
		return (-1);
	}
	else if (y > 1)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	return (x);
}
