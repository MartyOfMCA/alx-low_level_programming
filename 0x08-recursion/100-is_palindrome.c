#include "main.h"

int compare_letters(char *s, int start, int end);

/**
 * is_palindrome - Checks whether the given string @s
 * is a palindrome.
 *
 * @s: The given string
 *
 * Return: 1 if @s is a palindrome. Otherwise 0
 *
 **/
int is_palindrome(char *s)
{
	int end = strlen(s);
	int start = 0;

	return (compare_letters(s, start, end - 1));
}

/**
 * compare_letters - Get the charaters at specified position
 * @start and @end.
 *
 * @s: The given string
 * @start: Get the position of the character to the left
 * @end: Get the position of the character to teh right
 *
 * Return: A value after comparing characters at both
 * @start and @end
 *
 **/
int compare_letters(char *s, int start, int end)
{
	if (start < end)
	{
		return (compare_letters(s, start + 1, end - 1));
	}
	if (s[start] == s[end])
	{
		return (1);
	}
	return (0);
}
