#include <stdio.h>

/**
 * main - Displays the first 50 Fibonacci
 * numbers beginning 1.
 *
 * Return: Success exit code
 **/
int main(void)
{
	long left_number = 1;
	long right_number = 2;
	int numbers_scanned = 0;
	long temp;

	printf("%lu, %lu", left_number, right_number);
	while (numbers_scanned < (50 - 2))
	{
		temp = right_number;
		right_number = left_number + right_number;
		left_number = temp;
		printf(", %lu", right_number);
		numbers_scanned++;
	}
	printf("\n");

	return (0);
}
