#include <stdio.h>

/**
 * main - A program that prints all single digit
 * numbers of base 10 beginning at 0
 *
 * Return: the success exit code 0
 **/

int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
	{
		printf("%d", number);
	}
	printf("\n");
	return (0);
}
