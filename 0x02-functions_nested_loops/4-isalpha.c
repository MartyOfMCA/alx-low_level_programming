#include "main.h"

/**
 * _isalpha - Check whether a character
 * is an alphabet
 *
 * @c: a number representing the
 * character to be checked
 *
 * Return: 1 if c is an aphabet
 * otherwise 0
 **/
int _isalpha(int c)
{
	if ((c >= 97 && c <= 123) || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
