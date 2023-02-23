#include <stdio.h>

/**
 * main - Displays the sum of the even-values
 * terms in a Fibonacci.
 *
 * Return: Success exit code
 **/
int main(void)
{
	long left_number = 1;
	long right_number = 2;
	int sum_of_even_pairs = 0;
	long temp;

	while (right_number <= 4000000)
	{
		if (right_number % 2 == 0)
			sum_of_even_pairs += right_number;
		temp = right_number;
		right_number = left_number + right_number;
		left_number = temp;
	}
	printf("%d\n", sum_of_even_pairs);

	return (0);
}
