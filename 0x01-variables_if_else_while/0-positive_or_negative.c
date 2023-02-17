#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - The entry point into my program.
 * Generates a random number and determine
 * whether its positive, negative or zero
 * Return: An exit code of 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive", n);
	else if (n == 0)
		printf("%d is zero", n);
	else
		printf("%d is negative", n);
	printf("\n");
	return (0);
}
