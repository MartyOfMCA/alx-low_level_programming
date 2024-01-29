#include "main.h"

/**
 * _atoi - Convert a string into an integer.
 *
 * @str: The given string.
 *
 * Return: A number representing the given string.
 *
 */
int _atoi(char *str)
{
	int strIndex = 0, digitsIndex = 0;
	int digitsFound = 0;
	char *digits = NULL;
	char nextChar = '0';

	while (str[strIndex])
	{
		nextChar = str[strIndex + 1];

		if ((str[strIndex] >= '0' && str[strIndex] <= '9') ||
		(str[strIndex] == '-' && nextChar >= '0' && nextChar <= '9'))
			digitsFound++;
		else if (digitsFound > 0)
			break;
		strIndex++;
	}

	if (!digitsFound)
		return (0);

	strIndex = 0;
	digits = malloc(digitsFound + 1);
	while (str[strIndex])
	{
		nextChar = str[strIndex + 1];

		if ((str[strIndex] >= '0' && str[strIndex] <= '9') ||
		(str[strIndex] == '-' && nextChar >= '0' && nextChar <= '9'))
		digits[digitsIndex++] = str[strIndex];
		else if (digitsIndex > 0)
			break;
		strIndex++;
	}
	digits[digitsIndex] = '\0';

	return (atoi(digits));
}
