#include <stdio.h>

/**
 * main - A program that prints lowercase alphabet
 * in reverse order then a new line
 *
 * Return: the success exit code 0
 **/

int main(void)
{
	char letters[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int x = 0;

	for (x = 25; x >= 0; x--)
	{
		char letter = letters[x] + 32;

		putchar(letter);
	}
	putchar('\n');
	return (0);
}
