#include <stdio.h>

/**
 * main - A program that prints the alphabets in
 * lowercase and ignoring letters q and e
 * and  a new line
 *
 * Return: the success exit code 0
 **/

int main(void)
{
	char letters[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int x = 0;

	for (x = 0; x < 26; x++)
	{
		char letter = letters[x] + 32;

		if (letter != 'q' && letter != 'e')
			putchar(letter);
	}
	putchar('\n');
	return (0);
}
