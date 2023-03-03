#include "main.h"

/**
 * reverse_array - Reverses the contents of
 * an intger array.
 *
 * @a: The interger array to be reveresed
 * @n: The size for the array
 **/
void reverse_array(int *a, int n)
{
	int first_pos = 0;
	int last_pos = n - 1;
	int tmp;

	while (first_pos < last_pos)
	{
		tmp = a[last_pos];
		a[last_pos] = a[first_pos];
		a[first_pos] = tmp;
		last_pos--;
		first_pos++;
	}
}
