#include "main.h"

/**
 * _isupper - Checks whether numeric representation
 * of a character is an uppercase.
 *
 * @c: The numeric representation for the character
 *
 * Return: 1 if @c is an uppercase otherwise 0
 **/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
