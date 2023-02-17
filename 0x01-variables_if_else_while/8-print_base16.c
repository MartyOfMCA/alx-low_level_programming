#include <stdio.h>

/**
 * main - A program that prints all numbers of
 * base 16 then a new line
 *
 * Return: the success exit code 0
 **/

int main(void)
{
	char numbers[16] = "0123456789ABCDEF";
	int x;

	for (x = 0; x < 16; x++)
	{
		char character = numbers[x];

		if (x > 9)
			character = numbers[x] + 32;

		putchar(character);
	}
	putchar('\n');
	return (0);
}
