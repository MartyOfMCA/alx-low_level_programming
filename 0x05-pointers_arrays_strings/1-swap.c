#include "main.h"

/**
 * swap_int - Swap two integers
 *
 * @a: The first integer
 * @b: The second integer
 *
 **/
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
