#include "main.h"

/**
 * _isdigit - Check whether the given number is
 * a digit and not any other ASCII character
 *
 * @c: The given character
 *
 * Return: 1 if @c is a digit othersie 0
 **/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
