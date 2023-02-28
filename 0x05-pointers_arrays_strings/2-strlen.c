#include "main.h"

/**
 * _strlen - Return the length for given string.
 *
 * @s: The given string
 *
 * Return: The size for the given string
 *
 **/
int _strlen(char *s)
{
	int total_characters = 0;

	while (*s != '\0')
	{
		total_characters++;
		s++;
	}
	return (total_characters);
}
