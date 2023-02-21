#include "main.h"

/**
 * _abs - Computer the absolute value of
 * the given number
 *
 * @number: the given number
 *
 * Return: the absolute value for the
 * given number
 **/
int _abs(int number)
{
	if (number < 0)
	{
		int positive_value = number * -1;

		return (positive_value);
	}
	return (number);
}
