#include "main.h"

/**
 * print_diagsums - Dsiplay the sum of two
 * diagonals of a square matric of integers.
 *
 * @a: The matrix table
 * @size: The size for 2D array
 *
 **/
void print_diagsums(int *a, int size)
{
	int i = 0, sum = 0;
	int *ptr = a;

	sum = sum + *a;
	for ( ; i < size - 1; i++)
	{
		sum = sum + *(a += size + 1);
	}
	printf("%d, ", sum);
	sum = 0;
	a = ptr;
	for (i = 0; i < size; i++)
	{
		sum = sum + *(a += size - 1);
	}
	printf("%d\n", sum);
}
