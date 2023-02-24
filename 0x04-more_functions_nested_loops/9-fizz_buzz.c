#include <stdio.h>

/**
 * main - The Fizz-Buzz test program
 *
 * Return: The 0 exit code
 **/
int main(void)
{
	int magic_number = 2;

	printf("%d", 1);
	while (magic_number <= 100)
	{
		if (magic_number % 3 == 0 && magic_number % 5 == 0)
			printf(" FizzBuzz");
		else if (magic_number % 3 == 0)
			printf(" Fizz");
		else if (magic_number % 5 == 0)
			printf(" Buzz");
		else
			printf(" %d", magic_number);
		magic_number++;
	}
	printf("\n");
	return (0);
}
