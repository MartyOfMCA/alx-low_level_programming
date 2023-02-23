#include <stdio.h>

/**
 * main - Print the sum for a range of natural
 * numbers whose factors are the numbers 3 and 5.
 *
 * Return: 0 exit code
 */
int main(void)
{
	int sum_of_natural_numbers = 0;
	int number = 3;

	while (number < 1024)
	{
		if ((number % 3 == 0) || (number % 5 == 0))
		{
			sum_of_natural_numbers += number;
		}
		number++;
	}
	printf("%d\n", sum_of_natural_numbers);
	return (0);
}
