#include <stdio.h>

/**
 * main - Determine and print the largest prime
 * factor of the number 612852475143
 *
 * Return: 0 exit code
 **/
int main(void)
{
	long int number = 612852475143;
	long int the_biggest_prime = number;
	long int factor_tracker = 2;

	while (the_biggest_prime > factor_tracker)
	{
		if (the_biggest_prime % factor_tracker == 0)
		{
			the_biggest_prime = the_biggest_prime / factor_tracker;
		}
		else
		{
			factor_tracker++;
		}
	}
	printf("%li\n", the_biggest_prime);
	return (0);
}
