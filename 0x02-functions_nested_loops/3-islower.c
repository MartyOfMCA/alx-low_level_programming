#include "main.h"

/**
 * _islower - Check whether a character
 * is a lowercase.
 *
 * @c: a number representing the
 * character to be checked
 *
 * Return: 1 if c is a lowercase character
 * otherwise 0
 **/
int _islower(int c)
{
	if (c >= 97 && c <= 123)
	{
		return (1);
	}
	return (0);
}
