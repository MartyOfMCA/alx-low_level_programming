#include "main.h"

/**
 * print_array - Display the elements of an array.
 *
 * @a: The array storing the numbers
 * @n: The number of digits to be displayed
 *
 **/
void print_array(int *a, int n)
{
	int numbers_displayed = 0;

	if (n > 0)
		printf("%d", a[numbers_displayed]);
	numbers_displayed++;
	while (numbers_displayed < n)
	{
		printf(", %d", a[numbers_displayed]);
		numbers_displayed++;
	}
	printf("\n");
}
