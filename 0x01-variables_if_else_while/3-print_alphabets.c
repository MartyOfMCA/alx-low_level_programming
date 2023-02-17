#include <stdio.h>

/**
 * main - A program that prints the alphabet in
 * lowercase and uppercase  followed by a new line
 *
 * Return: the success exit code 0
 **/

int main(void)
{
	char letters[26] = "abcdefghijklmnopqrstuvwxyz";
	int x = 0;

	for (x = 0; x < 26; x++)
	{
		char letter = letters[x];

		putchar(letter);
	}

	for (x = 0; x < 26; x++)
	{
		putchar(letters[x] - 32);
	}
	putchar('\n');
	return (0);
}
